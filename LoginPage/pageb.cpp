#include "pageb.h"
#include "ui_pageb.h"



PageB::PageB(QWidget *parent) : QWidget(parent), ui(new Ui::PageB) {


    grey_pic = new QPixmap(":/pic/PageB2-greyRectangle.png");
    blue_pic = new QPixmap(":/pic/PageB2-blueRectangle.png");
    pic_width = grey_pic->width();
    pic_height_big = blue_pic->height();
    pic_height_small = grey_pic->height();

    narrow_bg = new QPixmap(":/pic/PageB1-flod.png");
    wide_bg = new QPixmap(":/pic/PageB1-unflod.png");
    bg_width = wide_bg->width();
    bg_height_big = wide_bg->height();
    bg_height_small = narrow_bg->height();


    ui->setupUi(this);
    ui->t1picnoans->hide();
    ui->t2picnoans->hide();
    ui->t1scrollArea->hide();
    this->setWindowFlags(Qt::FramelessWindowHint); //隐藏上方状态栏

    be_recomandList = _get_recomand_30(); //加载推荐列表


    for (int i=0; i<10; i++) {
        items[i] = new QListWidgetItem(ui->listWidget);
        items[i]->setText(QString::fromStdString(be_recomandList[i].name));
        items[i]->setData(ItemIdRole, QVariant(be_recomandList[i].id));
    }
    for (int i=10; i<20; i++) {
        items[i] = new QListWidgetItem(ui->listWidget_2);
        items[i]->setText(QString::fromStdString(be_recomandList[i].name));
        items[i]->setData(ItemIdRole, QVariant(be_recomandList[i].id));
    }
    for (int i=20; i<30; i++) {
        items[i] = new QListWidgetItem(ui->listWidget_3);
        items[i]->setText(QString::fromStdString(be_recomandList[i].name));
        items[i]->setData(ItemIdRole, QVariant(be_recomandList[i].id));
    }

    // 搜索按钮点击事件
    connect(ui->btn_quit, &QPushButton::clicked, this, &QWidget::close);
    connect(ui->t1btn_search, &QPushButton::clicked, this, &PageB::OnT1SearchBtnClicked);
    connect(ui->t2btn_search, &QPushButton::clicked, this, &PageB::OnT2SearchBtnClicked);
    connect(ui->listWidget, &QListWidget::itemClicked, this, &PageB::onListItemClicked);
    connect(ui->listWidget_2, &QListWidget::itemClicked, this, &PageB::onListItemClicked);
    connect(ui->listWidget_3, &QListWidget::itemClicked, this, &PageB::onListItemClicked);
    connect(ui->btn_logoff, &QPushButton::clicked, this, &PageB::onLogoffClicked);
    connect(ui->t2cb_sortType, SIGNAL(currentIndexChanged(int)), this, SLOT(OnT2SearchBtnClicked()));

    ui->scrollArea->setStyleSheet("QScrollArea {background-color:transparent;}"); //透明功能第一句话
    ui->scrollArea->viewport()->setStyleSheet("background-color:transparent;"); //透明功能第二句话
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // 总是隐藏垂直滚动条
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // 总是隐藏水平滚动条
    ui->scrollArea->setStyleSheet("QScrollArea { border: none; }"); //去掉边框

    ui->t1scrollArea->setStyleSheet("QScrollArea {background-color:transparent;}"); //透明功能第一句话
    ui->t1scrollArea->viewport()->setStyleSheet("background-color:transparent;"); //透明功能第二句话
    ui->t1scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // 总是隐藏垂直滚动条
    ui->t1scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // 总是隐藏水平滚动条
    ui->t1scrollArea->setStyleSheet("QScrollArea { border: none; }"); //去掉边框



    // 下拉框设置
    ui->t1cb_searchType->setView(new QListView());//必须有这句，后面设置itme才有效
    ui->t1cb_searchType->view()->window()->setWindowFlags(Qt::Popup | Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint);
    ui->t1cb_searchType->view()->window()->setAttribute(Qt::WA_TranslucentBackground);
    ui->t1cb_sortType->setView(new QListView());//必须有这句，后面设置itme才有效
    ui->t1cb_sortType->view()->window()->setWindowFlags(Qt::Popup | Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint);
    ui->t1cb_sortType->view()->window()->setAttribute(Qt::WA_TranslucentBackground);
    ui->t2cb_searchType->setView(new QListView());//必须有这句，后面设置itme才有效
    ui->t2cb_searchType->view()->window()->setWindowFlags(Qt::Popup | Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint);
    ui->t2cb_searchType->view()->window()->setAttribute(Qt::WA_TranslucentBackground);
    ui->t2cb_sortType->setView(new QListView());//必须有这句，后面设置itme才有效
    ui->t2cb_sortType->view()->window()->setWindowFlags(Qt::Popup | Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint);
    ui->t2cb_sortType->view()->window()->setAttribute(Qt::WA_TranslucentBackground);


    query_and_show_diary_list("", 0,0);

}


void PageB::OnT1SearchBtnClicked()
{
    ui->t1picnoans->hide();
    // 清除上次内容
    for (size_t i=0; i<fe_destList.size(); i++)
        delete fe_destList[i].dlw;
    fe_destList.clear();

    if (ui->t1le->text() != "")
    {
        qDebug() << "用户进行目的地搜索，输入的关键字为" << ui->t1le->text() << "并且选择按" <<ui->t1cb_searchType->currentText() << "搜索，且按" << ui->t1cb_sortType->currentText();

        // 把之前推荐的30个隐藏
        ui->listWidget->hide();
        ui->listWidget_2->hide();
        ui->listWidget_3->hide();
        ui->t1pic01->hide();
        ui->t1pic02->hide();
        ui->t1pic03->hide();

        // 加载搜索结果
        be_destList = _get_result_of_searching_destination(ui->t1le->text().toStdString(), ui->t1cb_searchType->currentIndex(), ui->t1cb_sortType->currentIndex());
        qDebug() <<"加载得到搜索目的地表项条数：" << be_destList.size();

        // 函数指针
        void(DestinationListWidget:: * signal)(DestinationListWidget *) = &DestinationListWidget::clicked;
        void(PageB:: * slot)(DestinationListWidget *) = &PageB::onDestItemClicked;

        for (size_t i=0; i<be_destList.size(); i++)
        {
            qDebug() << "显示目的地的搜索结果" << i;
            destListPos tmp;
            tmp.isFlod = true;
            tmp.position_y = i * (DEST_ROW_GAP + bg_height_small);
            tmp.dlw = new DestinationListWidget(ui->t1scrollAreaWidgetContents); //new出来的就要在不显示的时候delete
            tmp.dlw->setDetails(&be_destList[i], i);
            tmp.dlw->move(0, tmp.position_y);
            tmp.dlw->show();
            fe_destList.push_back(tmp);
            connect(tmp.dlw, signal, this, slot);
        }

        // 显示搜索结果
        ui->t1scrollArea->show();
        ui->t1scrollAreaWidgetContents->setMinimumSize(ui->t1scrollAreaWidgetContents->width(),be_destList.size() * (DEST_ROW_GAP + bg_height_small)); //

        if (be_destList.size() == 0)
        {
            // 查询不到，要有提示
            ui->t1picnoans->show();
        }
    }
    else
    {
        ui->t1scrollArea->hide();
        ui->listWidget->show();
        ui->listWidget_2->show();
        ui->listWidget_3->show();
        ui->t1pic01->show();
        ui->t1pic02->show();
        ui->t1pic03->show();
    }



}

void PageB::OnT2SearchBtnClicked()
{
    qDebug() << "用户进行日记搜索，输入的关键字为" << ui->t2le->text() << "并且选择按" <<ui->t2cb_searchType->currentText() << "搜索，且按" << ui->t2cb_sortType->currentText();

    // 把上次显示的那些widget delete掉
    for (size_t i=0; i<fe_diaryList.size(); i++)
        for (size_t j=0; j<fe_diaryList[i].size(); j++)
            delete fe_diaryList[i][j].dlw;
    // 清除上次内容
    fe_diaryList.clear();



    query_and_show_diary_list(ui->t2le->text(), ui->t2cb_searchType->currentIndex(),ui->t2cb_sortType->currentIndex());

}

void PageB::onListItemClicked(QListWidgetItem *item) {

    qDebug() << "用户选择了推荐列表中的" << item->text() << "作为目的地，编号为" << item->data(ItemIdRole);

    this->hide();
    PageC * page3 = new PageC(item->text(),item->data(ItemIdRole).toInt());
    page3->father = this;
    page3->show();

}

void PageB::onDiaryItemClicked(DiaryListWidget * clickedWidget)
{

    int id = clickedWidget->id, i = clickedWidget->i, j = clickedWidget->j;

    if (fe_diaryList[i][j].isFlod)
    {
        fe_diaryList[i][j].isFlod = false;
        qDebug() << "用户点击了全局id为" << id << "的日记表项，该日记在界面中的行列位置为(" << i << "," << j << ")";

        if (fe_diaryList[i][j].position_y + pic_height_big + DIARY_ROW_GAP > max_y_position)
            max_y_position = fe_diaryList[i][j].position_y + pic_height_big + DIARY_ROW_GAP;
        //把第j列的i行之后的格子每一个的纵坐标加300
        for (size_t r=i+1; 3*r+j < be_diaryList.size(); r++)
        {
            fe_diaryList[r][j].position_y+=(pic_height_big - pic_height_small);
            fe_diaryList[r][j].dlw->move((pic_width+DIARY_COLUMN_GAP)*j, fe_diaryList[r][j].position_y);
            if (fe_diaryList[r][j].position_y + (fe_diaryList[r][j].isFlod? pic_height_small : pic_height_big) + DIARY_ROW_GAP >  max_y_position)
                max_y_position = fe_diaryList[r][j].position_y + (fe_diaryList[r][j].isFlod? pic_height_small : pic_height_big)+ DIARY_ROW_GAP;
        }

        // 宽度不变 高度重设
        if( max_y_position > ui->scrollAreaWidgetContents->height())
            ui->scrollAreaWidgetContents->setMinimumSize(ui->scrollAreaWidgetContents->width(),max_y_position);


        // 对于被点击的这个表项，更换背景与文字

        clickedWidget->ql_bgpic->setPixmap(*blue_pic);
        clickedWidget->ql_bgpic->setMinimumSize(blue_pic->size()); // 如果想要固定大小，可以使用setFixedSize()
        clickedWidget->resize(pic_width,pic_height_big);

        clickedWidget->qple_abstract->show();
        clickedWidget->ql_position->hide();
        clickedWidget->ql_time->hide();
        clickedWidget->ql_hot->hide();
        clickedWidget->ql_remark->hide();

    }
    else
    {
        // 对于已经翻开的表项，再次点击就要新弹出一个日记展示界面

        // 加载被点击的日记的详细内容

        DiaryReadDetail dd = _get_diary_full_text(id);
        DiaryDialog * pageD  = new DiaryDialog(dd, id, clickedWidget->ql_title->text(), clickedWidget->ql_author->text());
        pageD->show();

    }


}

void PageB::onDestItemClicked(DestinationListWidget * clickedWidget)
{
    int i = clickedWidget->i;
    qDebug() << "用户点击了第" << i << "项";

    if (fe_destList[i].isFlod)
    {
        // 展开
        fe_destList[i].isFlod = false;
        for (size_t j=i+1; j<fe_destList.size(); j++)
        {
            fe_destList[j].position_y += (bg_height_big - bg_height_small);
            fe_destList[j].dlw->move(0, fe_destList[j].position_y);

        }

        // 对于被点击的这个表项，更换背景
        clickedWidget->ql_bgpic->setPixmap(*wide_bg);
        clickedWidget->ql_bgpic->setMinimumSize(wide_bg->size()); // 如果想要固定大小，可以使用setFixedSize()
        clickedWidget->resize(bg_width,bg_height_big);

        ui->t1scrollAreaWidgetContents->setMinimumSize(ui->t1scrollAreaWidgetContents->width(),
                                                     ui->t1scrollAreaWidgetContents->height()+(bg_height_big - bg_height_small));
        // 更换文字
        //……
        clickedWidget->ql_hot->move(780, 282);
        clickedWidget->ql_remark->move(898, 282);
        clickedWidget->ql_destName->move(49, 25);

        clickedWidget->qple_abstract->show();
        clickedWidget->ql_pic->show();

    }
    else
    {
    //跳转
        this->hide();
        PageC * page3 = new PageC(clickedWidget->ql_destName->text(), clickedWidget->id);
        page3->father = this;
        page3->show();
    }
}

void PageB::query_and_show_diary_list(QString keyword, int searchType, int sortType)
{
    ui->t2picnoans->hide();
    be_diaryList = _get_result_of_searching_diary(keyword.toStdString(), searchType,sortType);  //从后端请求日记列表（默认排序）
    qDebug() <<"加载得到日记表项条数：" << be_diaryList.size();

    // 函数指针
    void(DiaryListWidget:: * signal)(DiaryListWidget *) = &DiaryListWidget::clicked;
    void(PageB:: * slot)(DiaryListWidget *) = &PageB::onDiaryItemClicked;

    fe_diaryList.resize((be_diaryList.size()+2)/3);
    for (size_t i=0; 3*i<be_diaryList.size();i++)
    {

        for (size_t j=0; j<3 && 3*i+j < be_diaryList.size(); j++)
        {
            diaryListPos tmp;
            tmp.isFlod = true;
            tmp.dlw = new DiaryListWidget(ui->scrollAreaWidgetContents);
            tmp.dlw->setDetails(&be_diaryList[3*i+j], i, j);
            tmp.position_y = 0;
            if (i>0)
                tmp.position_y = fe_diaryList[i-1][j].position_y + DIARY_ROW_GAP +(fe_diaryList[i-1][j].isFlod ? pic_height_small : pic_height_small);

            fe_diaryList[i].push_back(tmp);
            tmp.dlw->show();
            tmp.dlw->move(j * (pic_width+DIARY_COLUMN_GAP), tmp.position_y);

            connect(tmp.dlw, signal, this, slot);

        }

    }
    // 每次重新显示，最大高度和内部窗口大小重新设置
    max_y_position = (be_diaryList.size()+2)/3*(pic_height_small+DIARY_ROW_GAP);
    ui->scrollAreaWidgetContents->setMinimumSize(ui->scrollAreaWidgetContents->width(),max_y_position);

    if (be_diaryList.empty())
    {
        ui->t2picnoans->show();
    }
}

void PageB::onLogoffClicked()
{
    this->setAttribute(Qt::WA_DeleteOnClose, true);
    this->close();
    this->father->show();
}

PageB::~PageB()
{
    qDebug() << "~PageB";
    delete ui;
}


