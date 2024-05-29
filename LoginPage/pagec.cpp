#include "pagec.h"
#include "ui_pagec.h"

PageC::PageC(QString _name, int _id, QWidget *parent) : QWidget(parent), ui(new Ui::PageC) , name(_name), id(_id)
{


    this->setWindowFlags(Qt::FramelessWindowHint); //隐藏上方状态栏

    int map_name = _get_map_name(id);
    // 背景
    QPixmap pixmap(":/pic/map"+QString::number(map_name)+".jpg");
    ql_bgpic = new QLabel(this);
    ql_bgpic->setPixmap(pixmap);
    ql_bgpic->setMinimumSize(pixmap.size()); // 如果想要固定大小，可以使用setFixedSize()
    ql_bgpic->setStyleSheet("background-color: transparent");

    // 画线图层,，必须放在背景设置之后
    lineWidget = new ShowLineWidget(this);

    // 必须放在这
    ui->setupUi(this);

    ui->legned->hide();
    ui->green->hide();
    ui->orange->hide();

    gd = new QLineEdit(ui->green);
    gt = new QLineEdit(ui->green);
    od = new QLineEdit(ui->orange);
    ot = new QLineEdit(ui->orange);


    gd->setStyleSheet("QLineEdit {  "
                      "border: none;"
                      "font: 18px \"Microsoft YaHei\";"
                      "font-weight: bold;"
                      "color: white; "
                      "background-color: transparent;"
                      "}");

    gt->setStyleSheet("QLineEdit {  "
                      "border: none;"
                      "font: 18px \"Microsoft YaHei\";"
                      "font-weight: bold;"
                      "color: white; "
                      "background-color: transparent;"
                      "}");
    od->setStyleSheet("QLineEdit {  "
                      "border: none;"
                      "font: 18px \"Microsoft YaHei\";"
                      "font-weight: bold;"
                      "color: white; "
                      "background-color: transparent;"
                      "}");
    ot->setStyleSheet("QLineEdit {  "
                      "border: none;"
                      "font: 18px \"Microsoft YaHei\";"
                      "font-weight: bold;"
                      "color: white; "
                      "background-color: transparent;"
                      "}");

    gd->move(0,0);
    gt->move(0,25);
    od->move(0,0);
    ot->move(0,25);
    connect(ui->btn_quit, &QPushButton::clicked, this, &QWidget::close);
    connect(ui->btn_return, &QPushButton::clicked, this, &PageC::on_return_click);
    connect(ui->btn_write_note, &QPushButton::clicked, this, &PageC::on_write_note_click);
    connect(ui->selectType, SIGNAL(currentIndexChanged(int)), this, SLOT(on_combox_select(int)));
    connect(ui->btn_addto, &QPushButton::clicked, this, &PageC::on_add_to_ways_clicked);
    connect(ui->btn_setstart, &QPushButton::clicked, this, &PageC::on_set_startpoint_clicked);
    connect(ui->btn_gothere, &QPushButton::clicked, this, &PageC::on_go_there_clicked);
    qDebug() << "打开pageC,地点为" << this->name;

    ui->label_destination->setText(this->name);

    // 加载全部建筑信息
    be_buildings = _get_all_building_of(this->id);


    // 绘制建筑按钮
    for (int i=0; i<(int)be_buildings.size(); i++)
    {
        BuildingBtn* tmp = new BuildingBtn(be_buildings[i].id,
                                           QString::fromStdString(be_buildings[i].name),
                                           be_buildings[i].tag,
                                           be_buildings[i].coordinates.x, be_buildings[i].coordinates.y,
                                           this);
        if (be_buildings[i].tag == FacilityType::GATE)
            StartBtn = tmp;
        fe_buildings.push_back(tmp);
        connect(fe_buildings.back(), &QPushButton::clicked, this, on_building_clicked);

    }



    noteWidget = new WriteNoteWidget(this);
    noteWidget->hide();

    connect(ui->btn_go, &QPushButton::clicked, this, &PageC::on_go_clicked);


    btn_add_or_finish = new QPushButton(this);
    btn_add_or_finish->setStyleSheet("QPushButton { "
                                     "    border: none;  "
                                     "    background: transparent; "
                                     "    background-image: url(:/pic/btn-add-normal.png);"
                                     "    background-repeat:no-repeat;"
                                     "}  "
                                     "QPushButton:hover {  "
                                     "    background-image: url(:/pic/btn-add-hover.png);"
                                     "    background-repeat:no-repeat;"
                                     "}");
    btn_add_or_finish->resize(33,33);
    btn_add_or_finish->move(878,58);

    connect(btn_add_or_finish, &QPushButton::clicked, this, PageC::on_add_or_finish_clicked);

   // ui->scrollArea->setStyleSheet("QScrollArea {background-color:transparent; }"); //透明功能第一句话
    ui->scrollArea->viewport()->setStyleSheet("background-color:transparent;"); //透明功能第二句话
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // 总是隐藏垂直滚动条
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // 总是隐藏水平滚动条
    ui->scrollArea->setStyleSheet("QScrollArea { border: none; }"); //去掉边框

}

void PageC::on_return_click()
{
    this->setAttribute(Qt::WA_DeleteOnClose, true);
    this->close();
    father->show();

}

void PageC::on_write_note_click()
{
    qDebug() << "写笔记" ;
    noteWidget->show();
    noteWidget->move(700,160);
}

void PageC::on_go_clicked()
{
    // 从后端得到两条路线，一条话成红色，一条画成绿色，代表距离/时间最短。并且把两条路线的所需距离和时间返回。
    qDebug() << "【出发】";

    // 加载路线
    lineWidget->be_route = _get_shortest_route_by(must_pass_building, ui->vehicleType->currentIndex());
    lineWidget->shouldDraw = true; // 更新状态变量
    lineWidget->update(); // 触发重绘

    // 显示标记
    ui->legned->show();

    // 显示绿色infobox和橙色infobox
    ui->orange->show();
    ui->green->show();
    od->setText(QString::number(lineWidget->be_route.min_distance_route.total_distance) + " m");
    ot->setText(QString::number(lineWidget->be_route.min_distance_route.total_time)+ " sec");
    gd->setText(QString::number(lineWidget->be_route.min_time_route.total_distance)+ " m");
    gt->setText(QString::number(lineWidget->be_route.min_time_route.total_time)+ " sec");

}


void PageC::on_building_clicked()
{
    BuildingBtn * clickedBtn = qobject_cast<BuildingBtn *>(sender());
    if (clickedBtn->isChecked)
    {
        CheckedBtn = nullptr;
        clickedBtn->isChecked = false;
        ui->label_building->setText("");
        ui->listWidget->clear();

    }
    else
    {
        // 把之前选中的取消
        for (size_t i=0; i<fe_buildings.size(); i++)
        {
            if (fe_buildings[i]->isChecked)
            {
                fe_buildings[i]->setChecked(false);
                fe_buildings[i]->isChecked = false;
            }
        }
        CheckedBtn = clickedBtn;
        ui->label_building->setText(CheckedBtn->name);
        clickedBtn->isChecked = true;
        qDebug() << "场所查询,id=" << clickedBtn->id <<",name=" << clickedBtn->name <<",selectType="<< ui->selectType->currentIndex();

        quire_and_show(clickedBtn, ui->selectType->currentIndex());
    }


}

void PageC::on_combox_select(int id)
{
    qDebug() << "切换筛选模式至："<< id;

    if (CheckedBtn != nullptr)
        quire_and_show(CheckedBtn, id);
}


void PageC::quire_and_show(BuildingBtn * btn, int selectType)
{
    // 清空
    for (size_t i=0; i<fe_facilities.size(); i++)
    {
        delete fe_facilities[i];
        delete fe_facilities_btn[i];
    }

    fe_facilities.clear();
    fe_facilities_btn.clear();
    ui->listWidget->clear();

    // 加载周围设施信息
    be_facilities = _get_facility_near_by(btn->id, selectType);

    // 显示
    for (size_t i=0; i<be_facilities.size(); i++) {
        // 在列表中显示条目
        fe_facilities.push_back(new QListWidgetItem(ui->listWidget));
        fe_facilities.back()->setText(QString::fromStdString(be_facilities[i].name)+"  " + QString::number(be_facilities[i].distance_form_current_building)+"m");

        // 在图上显示图标
        BuildingBtn* tmp = new BuildingBtn(be_facilities[i].id,
                                           QString::fromStdString(be_facilities[i].name),
                                           be_facilities[i].tag,
                                           be_facilities[i].coordinates.x, be_facilities[i].coordinates.y,
                                           this);
        tmp->show();
        fe_facilities_btn.push_back(tmp);
    }




}

void PageC::on_add_to_ways_clicked()
{
    if (CheckedBtn != nullptr)
    {
        // vector中添加一个叫
        if (btn_is_add)
        {
            add_line_edit();
        }
        solve_finish(CheckedBtn->name);
    }
}

void PageC::on_set_startpoint_clicked()
{
    if (CheckedBtn != nullptr)
    {
        qDebug() << "设置" << CheckedBtn->name << "为起点。";
        // 通知后端
        _set_current_position(CheckedBtn->id);
        // 更改图标
        CheckedBtn->setStyleSheet("QPushButton { "
                                  "    border: none;  "
                                  "    padding: 0px 0px 0px 10px; "
                                  "    background: transparent; "
                                  "    background-image: url(:/pic/pos_12_normal.png);"
                                  "    background-repeat:no-repeat;"
                                  "}  "
                                  "QPushButton:hover {  "
                                  "    background-image: url(:/pic/pos_12_hover.png);"
                                  "    background-repeat:no-repeat;"
                                  "}"
                                  "QPushButton:checked {  "
                                  "    background-image: url(:/pic/pos_12_checked.png);"
                                  "    background-repeat:no-repeat;"
                                  "}");
        // 把上一个起始点设置为普通图标
        //qDebug() << StartBtn->id << CheckedBtn->id;
        if (StartBtn->id != CheckedBtn->id)
        {
            qDebug() << "上一个起点是" << StartBtn->name;
            StartBtn->setStyleSheet("QPushButton { "
                                    "    border: none;  "
                                    "    padding: 0px 0px 0px 10px; "
                                    "    background: transparent; "
                                    "    background-image: url(:/pic/pos_11_normal.png);"
                                    "    background-repeat:no-repeat;"
                                    "}  "
                                    "QPushButton:hover {  "
                                    "    background-image: url(:/pic/pos_11_hover.png);"
                                    "    background-repeat:no-repeat;"
                                    "}"
                                    "QPushButton:checked {  "
                                    "    background-image: url(:/pic/pos_11_checked.png);"
                                    "    background-repeat:no-repeat;"
                                    "}");
            StartBtn = CheckedBtn;
        }

    }

}

void PageC::add_line_edit()
{
    qDebug() << "add line edit";
    LineEditWithDelete * tmp = new LineEditWithDelete(ui->scrollAreaWidgetContents);
    //tmp->raise();
    tmp->show();
    tmp->setStyleSheet("QLineEdit { "
                       "  background-color: rgba(62,116,207,128);"
                       "  color: #FFFFFF;"
                       "  font-size: 20px; "
                       "  font-family: \"Microsoft YaHei\", \"SimHei\", sans-serif;"
                       "  border-radius: 18px;"
                       "  padding: 8px;"
                       "}"
                       "QLineEdit:focus {  "
                       "  border: 1px solid rgb(29,233,255);"
                       " }"
                       );
    tmp->resize(121,36);
    if (lineedit_pointers.empty())
        tmp->move(0,0);
    else
        tmp->move(lineedit_pointers.back()->pos().x()+lineedit_pointers.back()->size().width() + 10, 0);
    lineedit_pointers.push_back(tmp);

    ui->scrollArea->horizontalScrollBar()->setValue(ui->scrollArea->horizontalScrollBar()->maximum());
    ui->scrollAreaWidgetContents->setMinimumSize(lineedit_pointers.back()->pos().x() + 200 ,ui->scrollAreaWidgetContents->height());

    connect(tmp, &LineEditWithDelete::clicked_right, this, PageC::delete_a_capsule_lineedit);
}

void PageC::on_add_or_finish_clicked()
{
    if (btn_is_add)
    {
        solve_add();
    }
    else
    {
        solve_finish(lineedit_pointers.back()->text());
    }
}

void PageC::solve_add()
{
    btn_is_add = false;
    btn_add_or_finish->setStyleSheet("QPushButton { "
                                     "    border: none;  "
                                     "    background: transparent; "
                                     "    background-image: url(:/pic/btn-finish-normal.png);"
                                     "    background-repeat:no-repeat;"
                                     "}  "
                                     "QPushButton:hover {  "
                                     "    background-image: url(:/pic/btn-finish-hover.png);"
                                     "    background-repeat:no-repeat;"
                                     "}");
    add_line_edit();
}

void PageC::solve_finish(QString input)
{
    lineedit_pointers.back()->setText(input);
    // 检查内容是否合法
    if (!check_buliding_name_is_exist(input))
    {
        // 给点提示
        // ……
        return;
    }
    // 加入到vector中
    // 设置为不可编辑
    lineedit_pointers.back()->setReadOnly(true);
    // 设置长度
    lineedit_pointers.back()->resize(input.length() * 21+18, 36);

    btn_is_add = true;
    btn_add_or_finish->setStyleSheet("QPushButton { "
                                     "    border: none;  "
                                     "    background: transparent; "
                                     "    background-image: url(:/pic/btn-add-normal.png);"
                                     "    background-repeat:no-repeat;"
                                     "}  "
                                     "QPushButton:hover {  "
                                     "    background-image: url(:/pic/btn-add-hover.png);"
                                     "    background-repeat:no-repeat;"
                                     "}"
                                     );
}

bool PageC::check_buliding_name_is_exist(QString name)
{
    int ans = false;
    for (size_t i = 0; i<be_buildings.size(); i++)
    {
        if (name == QString::fromStdString(be_buildings[i].name))
        {
            ans = true;
            must_pass_building.push_back(i);
            qDebug() << "添加id=" << i << "的建筑到途径点中";
            break;
        }
    }
    return ans;
}

void PageC::on_go_there_clicked()
{
    //std::vector<int> tmp;
    must_pass_building.clear();
    for (size_t i = 0; i<lineedit_pointers.size(); i++)
    {
        delete lineedit_pointers[i];
    }
    lineedit_pointers.clear();
    must_pass_building.push_back(CheckedBtn->id);
    on_go_clicked();

}

void PageC::delete_a_capsule_lineedit(LineEditWithDelete * le)
{
    qDebug() << "删了这个胶囊！";
    // 找到它是第几个胶囊，然后delete它，把后面的胶囊前提
    int delta;
    size_t i;
    for (i=0; i<lineedit_pointers.size(); i++)
    {
        if (le == lineedit_pointers[i])
        {
            delta = le->width() + 10;
            break;
        }
    }
    qDebug() << "它是第" << i << "个胶囊,宽度为" << delta;

    //delete lineedit_pointers[i];
    lineedit_pointers[i]->hide();

    le = nullptr;
    lineedit_pointers.erase(lineedit_pointers.begin() + i);
    must_pass_building.erase(must_pass_building.begin()+i);
    for (size_t j = i; j<lineedit_pointers.size(); j++)
    {
        qDebug() << "新的第" << j << "个胶囊前提！";
        lineedit_pointers[j]->move(lineedit_pointers[j]->pos().x() - delta, lineedit_pointers[j]->pos().y());
    }


    // 调试
    qDebug() << "必经点为：";
    for (size_t i = 0; i<must_pass_building.size(); i++)
    {
        qDebug() << must_pass_building[i];
    }
}

PageC::~PageC()
{

    for (size_t i = 0; i<lineedit_pointers.size(); i++)
    {
        delete lineedit_pointers[i];
    }

    qDebug() << "~pageC";
    delete ui;
}


