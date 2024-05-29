#include "pagea.h"
#include "ui_pagea.h"
PageA::PageA(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PageA)
{
    this->setWindowFlags(Qt::FramelessWindowHint); //隐藏上方状态栏
    ui->setupUi(this);

    /* 输入框-密码 */
    ui->lineEdit_pass->setEchoMode(QLineEdit::Password);//密文输入
    ui->lineEdit_pass->setStyleSheet("QLineEdit { text-align: center; }");
    ui->lineEdit_pass->setStyleSheet("font: 25 14pt '微软雅黑 Light';" //字体
                                    "color: rgb(201,232,250);"		//字体颜色
                                    "padding-left:20px;"       //内边距-字体缩进
                                    "background-color: rgb(19,54,77);" //背景颜色
                                    "border:2px solid rgb(46,163,214);border-radius:15px;");//边框粗细-颜色-圆角设置
    /* 输入框-用户名 */
    ui->lineEdit_user->setStyleSheet("QLineEdit { text-align: center; }");
    ui->lineEdit_user->setStyleSheet("font: 25 14pt '微软雅黑 Light';" //字体
                                    "color: rgb(201,232,252);"		//字体颜色
                                    "padding-left:20px;"       //内边距-字体缩进
                                    "background-color: rgb(19,54,77);" //背景颜色
                                    "border:2px solid rgb(46,163,214);border-radius:15px;");//边框粗细-颜色-圆角设置
    /* 按钮-登录*/
    ui->loginBtn->setStyleSheet("QPushButton{font: 25 10pt '微软雅黑 Light';color: rgb(255,255,255);background-color: rgb(46,163,214);"
                                    "border: none;border-radius:20px;}"
                                    "QPushButton:hover{background-color: rgb(8,109,153);}"//hover
                                    "QPushButton:pressed{background-color: rgb(8,109,153);}");//pressed

    ui->regisBtn->setStyleSheet("QPushButton{font: 25 10pt '微软雅黑 Light';color: rgb(255,255,255);background-color: rgb(46,163,214);"
                                    "border: none;border-radius:20px;}"
                                    "QPushButton:hover{background-color: rgb(8,109,153);}"//hover
                                    "QPushButton:pressed{background-color: rgb(8,109,153);}");//pressed


    connect(ui->btn_quit, &QPushButton::clicked, this, &QWidget::close);

    connect(ui->loginBtn, &QPushButton::clicked, this, &PageA::on_login_clicked);
    connect(ui->regisBtn, &QPushButton::clicked, this, &PageA::on_regist_clicked);

}


void PageA::on_login_clicked(void)
{
    qDebug() << "请求登录用户为" << ui->lineEdit_user->text() << "密码为" << ui->lineEdit_pass->text();
    ui->label_hint->setText("");
    if (_login(ui->lineEdit_user->text().toStdString(), ui->lineEdit_pass->text().toStdString()))
    {
        this->hide();
        PageB * bpage = new PageB();
        bpage->father = this;
        bpage->show();

    }
    else
    {
        // 提示登录错误
        ui->label_hint->setText("用户名或密码错误");
    }
}

void PageA::on_regist_clicked(void)
{
    qDebug() << "请求注册用户为" << ui->lineEdit_user->text() << "密码为" << ui->lineEdit_pass->text();
    if (_regist(ui->lineEdit_user->text().toStdString(), ui->lineEdit_pass->text().toStdString()))
    {
        // 提示注册成功
        ui->label_hint->setText("注册成功，请登录");
    }
    else
    {
        //提示注册失败
        ui->label_hint->setText("注册失败，信息填写不完整或账户已经存在");
    }

}

PageA::~PageA()
{
    delete ui;
}
