#include "diarylistwidget.h"
#include "ui_diarylistwidget.h"



DiaryListWidget::~DiaryListWidget()
{
    qDebug() << "析构DiaryListWidget" << this->i << this->j;
}

DiaryListWidget::DiaryListWidget(QWidget *parent) : QWidget(parent) {

    // 背景图片
    ql_bgpic = new QLabel(this);
    QPixmap pixmap(":/pic/PageB2-greyRectangle.png");
    ql_bgpic->setPixmap(pixmap);
    ql_bgpic->setMinimumSize(pixmap.size()); // 如果想要固定大小，可以使用setFixedSize()
}

void DiaryListWidget::setDetails(DiaryInformation * details, int i, int j)
{
    // 文字
    ql_title = new QLabel(this);
    ql_title->setStyleSheet("QLabel { color: white; font-family: 'Microsoft YaHei'; font-size: 22px; }");
    ql_title->move(27,17);
    ql_title->setText(QString::fromStdString(details->title));

    ql_author = new QLabel(this);
    ql_author->setStyleSheet("QLabel { color: white; font-family: 'Microsoft YaHei'; font-size: 16px; }");
    ql_author->move(272,22);
    ql_author->setText(QString::fromStdString(details->author));

    ql_time = new QLabel(this);
    ql_time->setStyleSheet("QLabel { color: white; font-family: 'Microsoft YaHei'; font-size: 16px; }");
    ql_time->move(63,68);
    ql_time->setText(QString::fromStdString(details->publication_time));

    ql_remark = new QLabel(this);
    ql_remark->setStyleSheet("QLabel { color: white; font-family: 'Microsoft YaHei'; font-size: 16px; }");
    ql_remark->move(63,93);
    ql_remark->setText(QString::number(details->score));

    ql_position = new QLabel(this);
    ql_position->setStyleSheet("QLabel { color: white; font-family: 'Microsoft YaHei'; font-size: 16px; }");
    ql_position->move(232,68);
    ql_position->setText(QString::fromStdString(details->publication_position));

    ql_hot = new QLabel(this);
    ql_hot->setStyleSheet("QLabel { color: white; font-family: 'Microsoft YaHei'; font-size: 18px; }");
    ql_hot->move(232,93);
    ql_hot->setText(QString::number(details->popularity));

    qple_abstract = new QPlainTextEdit(this);
    qple_abstract->setStyleSheet("QPlainTextEdit::verticalScrollBar { width: 0px; }"
                                 "QPlainTextEdit::horizontalScrollBar { height: 0px; }"
                                 "QPlainTextEdit {border: none; font-family: 'Microsoft YaHei'; font-size: 20px; color: white;background-color: transparent;}");

    qple_abstract->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    qple_abstract->move(30,65);
    qple_abstract->setPlainText(QString::fromStdString(details->abstract));
    qple_abstract->resize(293,68);
    qple_abstract->hide();
    qple_abstract->setReadOnly(true);

    this->id = details->id;
    this->i = i;
    this->j = j;
}


void DiaryListWidget::mouseReleaseEvent(QMouseEvent * event){
    emit clicked(this); // 发射信号，传递当前对象的指针
}


