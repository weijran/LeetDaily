#include "diarydialog.h"
#include "ui_diarydialog.h"

DiaryDialog::DiaryDialog(DiaryReadDetail d, int id, QString title, QString author, QWidget *parent) : QWidget(parent), ui(new Ui::DiaryDialog)
{
    this->setWindowFlags(Qt::FramelessWindowHint); //隐藏上方状态栏
    this->setAttribute(Qt::WA_TranslucentBackground);
    qDebug() << "显示日记";
    ui->setupUi(this);
    // 设置日记标题与内容
    ui->pushButton->setText(title);
    ui->pushButton_2->setText(author);
    ui->body->setPlainText(QString::fromStdString(d.body));
    ui->body->setReadOnly(true);

    ui->body->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    connect(ui->btn_close, &QPushButton::clicked, this, &DiaryDialog::on_close_clicked);
    //this->setAttribute(Qt::WA_DeleteOnClose);
    this->id = id;

}


void DiaryDialog::on_close_clicked()
{
    this->setAttribute(Qt::WA_DeleteOnClose, true);
    // 上传分数
    qDebug() << "打分" << ui->horizontalSlider->value();
    _set_diary_score(this->id, ui->horizontalSlider->value());
    this->close();
}

DiaryDialog::~DiaryDialog()
{
    qDebug() << "~DiaryDialog" ;
    delete ui;
}
