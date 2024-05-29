#include "writenotewidget.h"

WriteNoteWidget::WriteNoteWidget(QWidget *parent) : QWidget(parent)
{
    ql_bgpic = new QLabel(this);
    QPixmap pixmap(":/pic/PageC-diary.png");
    ql_bgpic->setPixmap(pixmap);
    ql_bgpic->setMinimumSize(pixmap.size()); // 如果想要固定大小，可以使用setFixedSize()

    ql_title = new MyLineEdit("标题",this);

    // 设置样式表
    ql_title->setStyleSheet("QLineEdit {"
                            "border: 1px solid pink;" // 未选中时边框为粉色
                            "border-radius: 3px;" // 可选：设置边框圆角
                            "padding: 5px;" // 可选：设置内边距
                            "font: 17px \"Microsoft YaHei\";" // 字体大小和类型
                            "color: white;" // 字体颜色
                            "background-color: transparent;" // 透明背景
                            "}"
                            "QLineEdit:hover {"
                            "border: 1px solid cyan;" // 悬停时边框为青色
                            "background-color: transparent;" // 保持透明背景
                            "}"
                            "QLineEdit:focus {"
                            "border: 1px solid cyan;" // 选中（聚焦）时边框也为青色
                            "background-color: transparent;" // 保持透明背景
                            "}");
    // 你可以设置ql_title的位置、大小等属性
    ql_title->setGeometry(48,125,277,33);


    plte_body = new QPlainTextEdit(this);

    plte_body->setStyleSheet(
                "QPlainTextEdit {"
                "border: 1px solid pink;"
                "border-radius: 3px;"
                "padding: 5px;"
                "font: 17px \"Microsoft YaHei\";"
                "color: white;"
                "background-color: transparent;"
                "}"
                "QPlainTextEdit:hover, QPlainTextEdit:focus {"
                "border: 1px solid cyan;"
                "}"
                );

    // 设置plainTextEdit的位置和大小
    plte_body->setGeometry(48, 171, 277, 225);


    btn_save = new QPushButton("保存", this);

    // 设置样式表
    btn_save->setStyleSheet(
                "QPushButton {"
                "border: none;"
                "padding: 0px 0px 0px 10px;"
                "color: rgb(255, 255, 255);"
                "font: 15px \"Microsoft YaHei\";"
                "text-align: center;"
                "background: transparent;"
                "background-image: url(:/pic/btn-pinkcyon-normal.png);"
                "background-repeat: no-repeat;"
                "}"
                "QPushButton:hover {"
                "background-image: url(:/pic/btn-pinkcyon-hover.png);"
                "background-repeat: no-repeat;"
                "}"
                );

    // 设置btn_save的位置和大小（如果需要）
    btn_save->setGeometry(40,430,135,49);

    btn_cancle = new QPushButton("取消", this);

    // 设置样式表
    btn_cancle->setStyleSheet(
                "QPushButton {"
                "border: none;"
                "padding: 0px 0px 0px 10px;"
                "color: rgb(255, 255, 255);"
                "font: 15px \"Microsoft YaHei\";"
                "text-align: center;"
                "background: transparent;"
                "background-image: url(:/pic/btn-pinkcyon-normal.png);"
                "background-repeat: no-repeat;"
                "}"
                "QPushButton:hover {"
                "background-image: url(:/pic/btn-pinkcyon-hover.png);"
                "background-repeat: no-repeat;"
                "}"
                );

    // 设置btn_save的位置和大小（如果需要）
    btn_cancle->setGeometry(210,430,135,49);


    connect(btn_save, &QPushButton::clicked, this, &WriteNoteWidget::on_saveButton_clicked);
    connect(btn_cancle, &QPushButton::clicked, this, &WriteNoteWidget::on_cancleButton_clicked);

}
void WriteNoteWidget::on_saveButton_clicked()
{
    qDebug() << "笔记标题：" << ql_title->text();
    qDebug() << "笔记正文：" << plte_body->toPlainText();


    QDateTime dateTime= QDateTime::currentDateTime();//获取系统当前的时间
    QString str = dateTime .toString("yyyy-MM-dd hh:mm:ss");
    // 向后端提交日记内容
    DiaryWriteDetail d;
    d.author = _get_current_user();
    d.body = plte_body->toPlainText().toStdString();
    d.publication_position = _get_current_destination();
    d.title = ql_title->text().toStdString();
    d.publication_time = str.toStdString();
    _wirte_diary(d);

    ql_title->setText("");
    ql_title->setText("");
    this->hide(); // 关闭对话框
}

void WriteNoteWidget::on_cancleButton_clicked()
{
    this->hide(); // 关闭对话框
}

WriteNoteWidget::~WriteNoteWidget()
{

}
