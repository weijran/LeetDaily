#include "destinationlistwidget.h"

DestinationListWidget::DestinationListWidget(QWidget *parent) :
    QWidget(parent)
{
    ql_bgpic = new QLabel(this);
    QPixmap pixmap(":/pic/PageB1-flod.png");
    ql_bgpic->setPixmap(pixmap);
    ql_bgpic->setMinimumSize(pixmap.size()); // 如果想要固定大小，可以使用setFixedSize()
}

void DestinationListWidget::setDetails(Destination * details, int i)
{
    ql_destName = new QLabel(this);
    ql_destName->setStyleSheet("QLabel { color: white; font-family: 'Microsoft YaHei'; font-size: 32px; }");
    ql_destName->move(37,18);
    ql_destName->setText(QString::fromStdString(details->name));

    ql_remark = new QLabel(this);
    ql_remark->setStyleSheet("QLabel { color: white; font-family: 'Microsoft YaHei'; font-size: 18px; }");
    ql_remark->move(718,48);
    ql_remark->setText(QString::number(details->score));

    ql_hot = new QLabel(this);
    ql_hot->setStyleSheet("QLabel { color: white; font-family: 'Microsoft YaHei'; font-size: 18px; }");
    ql_hot->move(832,48);
    ql_hot->setText(QString::number(details->popularity));

    qple_abstract = new QPlainTextEdit(this);
    qple_abstract->setStyleSheet("QPlainTextEdit::verticalScrollBar { width: 0px; }"
                                 "QPlainTextEdit::horizontalScrollBar { height: 0px; }"
                                 "QPlainTextEdit {border: none; font-family: 'Microsoft YaHei'; font-size: 20px; color: white;background-color: transparent;}");
    qple_abstract->setReadOnly(true);
    this->i =i;
    this->id = details->id;

    qple_abstract->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    qple_abstract->move(422,35);
    qple_abstract->setPlainText(ABSTRACTS[id % 7]);
    qple_abstract->resize(519,153);
    qple_abstract->hide();

    ql_pic = new QLabel(this);
    QPixmap pixmap(":/pic/"+QString::number(id % 7)+".jpg");
    ql_pic->move(46,80);
    ql_pic->setPixmap(pixmap);
    ql_pic->setFixedSize(330,205); // 固定大小
    ql_pic->hide();

}

void DestinationListWidget::mouseReleaseEvent(QMouseEvent * event){
    emit clicked(this); // 发射信号，传递当前对象的指针
}

DestinationListWidget::~DestinationListWidget()
{
        qDebug() << "析构DestinationListWidget" << this->i;
}
