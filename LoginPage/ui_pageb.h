/********************************************************************************
** Form generated from reading UI file 'pageb.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEB_H
#define UI_PAGEB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageB
{
public:
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget;
    QLabel *t1pic02;
    QLabel *t1pic03;
    QLabel *t1pic01;
    QLineEdit *t1le;
    QPushButton *t1btn_search;
    QComboBox *t1cb_searchType;
    QLabel *t1pic_search;
    QComboBox *t1cb_sortType;
    QListWidget *listWidget_2;
    QListWidget *listWidget_3;
    QScrollArea *t1scrollArea;
    QWidget *t1scrollAreaWidgetContents;
    QLineEdit *t1le_2;
    QLabel *t1picnoans;
    QWidget *tab_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *t2pic_search;
    QComboBox *t2cb_searchType;
    QComboBox *t2cb_sortType;
    QLineEdit *t2le;
    QPushButton *t2btn_search;
    QLabel *t2picnoans;
    QPushButton *btn_quit;
    QPushButton *btn_logoff;

    void setupUi(QWidget *PageB)
    {
        if (PageB->objectName().isEmpty())
            PageB->setObjectName(QStringLiteral("PageB"));
        PageB->resize(1150, 730);
        PageB->setMinimumSize(QSize(1150, 730));
        PageB->setMaximumSize(QSize(1150, 730));
        label = new QLabel(PageB);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1151, 731));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pic/PageB-bg.png")));
        tabWidget = new QTabWidget(PageB);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1131, 711));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane{\n"
"min-width:100px;\n"
"min-height:50px;\n"
"border-top: 2px solid;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"\n"
"min-width:100px;\n"
"\n"
"min-height:50px;\n"
"\n"
"color: white;\n"
"\n"
"font:20px \"Microsoft YaHei\";\n"
"\n"
"border: 0px solid;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:selected{\n"
"\n"
"min-width:100px;\n"
"\n"
"min-height:50px;\n"
"color: white;\n"
"\n"
"font:22px \"Microsoft YaHei\";\n"
"\n"
"border: 0px solid;\n"
"\n"
"border-bottom: 2px solid;\n"
"\n"
"border-color: #4796f0;\n"
"\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        listWidget = new QListWidget(tab);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(80, 310, 231, 311));
        listWidget->setStyleSheet(QLatin1String("QListView {\n"
"	background-color: transparent;\n"
"	font: 7pt \"Microsoft YaHei\";\n"
"	/*font-weight:bold;*/\n"
"	border: none;\n"
"}\n"
"\n"
"QListView::item {\n"
"    height: 30px;\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"	background-color: transparent;\n"
"	padding: 10px;\n"
"	border-left: 3px solid rgb(130, 130, 130);\n"
"}\n"
"\n"
"QListView::item:selected {\n"
"	background-color: transparent;\n"
"	color: black;\n"
"	padding: 10px;\n"
"	border-left: 3px solid black;\n"
"}"));
        t1pic02 = new QLabel(tab);
        t1pic02->setObjectName(QStringLiteral("t1pic02"));
        t1pic02->setGeometry(QRect(430, 200, 275, 422));
        t1pic02->setPixmap(QPixmap(QString::fromUtf8(":/pic/PageB-02.png")));
        t1pic03 = new QLabel(tab);
        t1pic03->setObjectName(QStringLiteral("t1pic03"));
        t1pic03->setGeometry(QRect(800, 200, 275, 422));
        t1pic03->setPixmap(QPixmap(QString::fromUtf8(":/pic/PageB-03.png")));
        t1pic01 = new QLabel(tab);
        t1pic01->setObjectName(QStringLiteral("t1pic01"));
        t1pic01->setGeometry(QRect(60, 200, 275, 421));
        t1pic01->setPixmap(QPixmap(QString::fromUtf8(":/pic/PageB-01.png")));
        t1le = new QLineEdit(tab);
        t1le->setObjectName(QStringLiteral("t1le"));
        t1le->setGeometry(QRect(420, 90, 401, 41));
        t1le->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: transparent;\n"
"	border: none;\n"
"	text-align: center; \n"
"	font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"	color: rgb(255,255,255);\n"
"}\n"
""));
        t1btn_search = new QPushButton(tab);
        t1btn_search->setObjectName(QStringLiteral("t1btn_search"));
        t1btn_search->setGeometry(QRect(790, 60, 91, 81));
        t1btn_search->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    border: none;  \n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */  \n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */  \n"
"    color: rgb(255, 255, 255); /* \345\255\227\344\275\223\351\242\234\350\211\262 */  \n"
"    font: 15px \"Microsoft YaHei\"; /* \345\255\227\344\275\223\345\244\247\345\260\217\345\222\214\345\220\215\347\247\260 */  \n"
"    text-align: center;  \n"
"    background: transparent; /* \350\277\231\351\207\214\345\217\257\344\273\245\347\234\201\347\225\245\357\274\214\345\233\240\344\270\272\345\220\216\351\235\242\344\274\232\350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"    background-image: url(:/pic/btn-search-normal.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */"
                        "  \n"
"	background-repeat:no-repeat;\n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-image: url(:/pic/btn-search-hover.png); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"	background-repeat:no-repeat;\n"
"}"));
        t1cb_searchType = new QComboBox(tab);
        t1cb_searchType->setObjectName(QStringLiteral("t1cb_searchType"));
        t1cb_searchType->setGeometry(QRect(265, 85, 151, 47));
        t1cb_searchType->setStyleSheet(QString::fromUtf8("/* \346\234\252\344\270\213\346\213\211\346\227\266\357\274\214QComboBox\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox {\n"
"    border: none;\n"
"    border-radius:22px;   /* \345\234\206\350\247\222 */\n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */\n"
"    /*color: rgba(0,0,0,1);*/\n"
"    font: normal normal 20px \"Microsoft YaHei\";\n"
"    background: transparent;\n"
"    text-align: AlignHCenter;\n"
" \n"
"    color:rgb(255,255,255);/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
"    background-color: transparent;\n"
"    border-image: url(:/pic/PageB2-combo-bg1.png);/*\350\203\214\346\231\257\345\233\276\347\211\207\357\274\214\345\234\206\350\247\222*/\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347"
                        "\252\227\344\275\223\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView {\n"
"    outline: 0px solid gray;   /* \351\200\211\345\256\232\351\241\271\347\232\204\350\231\232\346\241\206 */\n"
"    border-radius:10px;   /* \345\234\206\350\247\222 */\n"
"    padding-top:10px;    /*\344\270\212\344\270\213\351\203\275\347\225\23110px\357\274\214\346\230\257\345\233\240\344\270\272\351\200\211\344\270\255\351\241\271\346\230\257\347\237\251\345\275\242\357\274\214\345\246\202\346\236\234\344\270\215\347\225\231\357\274\214\347\247\273\345\212\250\345\210\260\347\254\254\344\270\200\351\241\271\345\222\214\346\234\200\345\220\216\344\270\200\351\241\271\344\274\232\345\217\230\344\270\272\347\233\264\350\247\222\357\274\214\344\270\215\345\245\275\347\234\213*/\n"
"    padding-bottom:10px;\n"
" \n"
"    color:rgb(160,160,160);\n"
"    border-image: url(:/pic/PageB2-combo-bg2.png);/*\344\270\213\346\213\211\346\241\206\350\203\214\346\231\257\357\274\214\345\234\206\350\247\222\345\233\276\347\211\207*/\n"
""
                        "}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item {\n"
" \n"
"    min-height: 47px;/*\346\257\217\351\241\271\351\253\230\345\272\246*/\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    color:rgb(255,255,255);\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\346\213\251\347\232\204\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    color:rgb(255,255,255);\n"
" \n"
"    border-image: url(:/pic/PageB2-combo-bg1.png);/*\351"
                        "\274\240\346\240\207\346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\345\233\276\347\211\207*/\n"
"}\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;/*\346\224\276\344\272\216\345\217\263\346\226\271\351\241\266\351\203\250*/\n"
"    width: 50px;/*\350\256\276\347\275\256\346\214\211\351\222\256\350\214\203\345\233\264\345\256\275\345\272\246*/\n"
" 	/*border-radius: 15px;\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;*/\n"
"\n"
"    border-top-right-radius: 3px;/*\350\256\276\347\275\256\350\276\271\346\241\206\345\234\206\350\247\222*/\n"
"    border-bottom-right-radius: 3px;\n"
"/*padding-right: 50px;*/\n"
"}\n"
"\n"
"/*QCombobox\345\217\263\344\276\247\346\214\211\351\222\256\347\232\204\347\256\255\345\244\264\345\233\276\346\240\207*/\n"
"QComboBox::down-arrow {\n"
"	border-image: url(:/pic/down.png);/*\350\207\252\345\256\232\344\271\211\345\233\276\347\211\207\345\241\253\345\205\205"
                        "*/\n"
"	width: 15px;/*\350\256\276\347\275\256\350\257\245\345\233\276\346\240\207\347\232\204\345\256\275\351\253\230*/\n"
"	height: 15px;\n"
"}\n"
"\n"
""));
        t1pic_search = new QLabel(tab);
        t1pic_search->setObjectName(QStringLiteral("t1pic_search"));
        t1pic_search->setGeometry(QRect(261, 44, 651, 131));
        t1pic_search->setPixmap(QPixmap(QString::fromUtf8(":/pic/PageB-searchLine.png")));
        t1cb_sortType = new QComboBox(tab);
        t1cb_sortType->setObjectName(QStringLiteral("t1cb_sortType"));
        t1cb_sortType->setGeometry(QRect(260, 150, 161, 31));
        t1cb_sortType->setStyleSheet(QString::fromUtf8("/* \346\234\252\344\270\213\346\213\211\346\227\266\357\274\214QComboBox\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox {\n"
"    /*border: 1px solid gray;   /* \350\276\271\346\241\206 */\n"
"    border-radius:15px;   /* \345\234\206\350\247\222 */\n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */\n"
"    color: rgba(0,0,0,1);\n"
"    font: normal normal 20px \"Microsoft YaHei\";\n"
"    background: transparent;\n"
"    text-align: AlignHCenter;\n"
" \n"
"    color:rgb(255,255,255);/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
"    background-color: transparent;\n"
"   /* border-image: url(:/pic/PageB2-combo-bg2.png);/*\350\203\214\346\231\257\345\233\276\347\211\207\357\274\214\345\234\206\350\247\222*/\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225"
                        "\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView {\n"
"    outline: 0px solid gray;   /* \351\200\211\345\256\232\351\241\271\347\232\204\350\231\232\346\241\206 */\n"
"    border-radius:10px;   /* \345\234\206\350\247\222 */\n"
"    padding-top:10px;    /*\344\270\212\344\270\213\351\203\275\347\225\23110px\357\274\214\346\230\257\345\233\240\344\270\272\351\200\211\344\270\255\351\241\271\346\230\257\347\237\251\345\275\242\357\274\214\345\246\202\346\236\234\344\270\215\347\225\231\357\274\214\347\247\273\345\212\250\345\210\260\347\254\254\344\270\200\351\241\271\345\222\214\346\234\200\345\220\216\344\270\200\351\241\271\344\274\232\345\217\230\344\270\272\347\233\264\350\247\222\357\274\214\344\270\215\345\245\275\347\234\213*/\n"
"    padding-bottom:10px;\n"
" \n"
"    color:rgb(160,160,160);\n"
"    border-image: url(:/pic/PageB2-combo-bg2.png);/*\344\270\213\346\213\211\346\241\206\350\203\214\346\231\257\357\274\214\345\234\206"
                        "\350\247\222\345\233\276\347\211\207*/\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item {\n"
" \n"
"    min-height: 50px;/*\346\257\217\351\241\271\351\253\230\345\272\246*/\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    color:rgb(255,255,255);\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\346\213\251\347\232\204\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    color:rgb(255,255,255);\n"
" \n"
"    border-i"
                        "mage: url(:/pic/PageB2-combo-bg1.png);/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\345\233\276\347\211\207*/\n"
"}\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;/*\346\224\276\344\272\216\345\217\263\346\226\271\351\241\266\351\203\250*/\n"
"    width: 50px;/*\350\256\276\347\275\256\346\214\211\351\222\256\350\214\203\345\233\264\345\256\275\345\272\246*/\n"
" 	/*border-radius: 15px;\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;*/\n"
"\n"
"    border-top-right-radius: 3px;/*\350\256\276\347\275\256\350\276\271\346\241\206\345\234\206\350\247\222*/\n"
"    border-bottom-right-radius: 3px;\n"
"/*padding-right: 50px;*/\n"
"}\n"
"\n"
"/*QCombobox\345\217\263\344\276\247\346\214\211\351\222\256\347\232\204\347\256\255\345\244\264\345\233\276\346\240\207*/\n"
"QComboBox::down-arrow {\n"
"	border-image: url(:/pic/down.png);/*\350\207\252\345\256\232\344\271\211\345"
                        "\233\276\347\211\207\345\241\253\345\205\205*/\n"
"	width: 15px;/*\350\256\276\347\275\256\350\257\245\345\233\276\346\240\207\347\232\204\345\256\275\351\253\230*/\n"
"	height: 15px;\n"
"}\n"
""));
        listWidget_2 = new QListWidget(tab);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(450, 310, 231, 311));
        listWidget_2->setStyleSheet(QLatin1String("QListView {\n"
"	background-color: transparent;\n"
"	font: 7pt \"Microsoft YaHei\";\n"
"	border: none;\n"
"}\n"
"\n"
"QListView::item {\n"
"    height: 30px;\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"	background-color: transparent;\n"
"	padding: 10px;\n"
"	border-left: 3px solid rgb(130, 130, 130);\n"
"}\n"
"\n"
"QListView::item:selected {\n"
"	background-color: transparent;\n"
"	color: black;\n"
"	padding: 10px;\n"
"	border-left: 3px solid black;\n"
"}"));
        listWidget_3 = new QListWidget(tab);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(820, 310, 231, 311));
        listWidget_3->setStyleSheet(QLatin1String("QListView {\n"
"	background-color: transparent;\n"
"	font: 7pt \"Microsoft YaHei\";\n"
"	border: none;\n"
"}\n"
"\n"
"QListView::item {\n"
"    height: 30px;\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"	background-color: transparent;\n"
"	padding: 10px;\n"
"	border-left: 3px solid rgb(130, 130, 130);\n"
"}\n"
"\n"
"QListView::item:selected {\n"
"	background-color: transparent;\n"
"	color: black;\n"
"	padding: 10px;\n"
"	border-left: 3px solid black;\n"
"}"));
        t1scrollArea = new QScrollArea(tab);
        t1scrollArea->setObjectName(QStringLiteral("t1scrollArea"));
        t1scrollArea->setGeometry(QRect(70, 210, 1041, 431));
        t1scrollArea->setStyleSheet(QLatin1String("QWidget#scrollAreaWidgetContents{\n"
"    background:transparent;\n"
"}"));
        t1scrollArea->setWidgetResizable(true);
        t1scrollAreaWidgetContents = new QWidget();
        t1scrollAreaWidgetContents->setObjectName(QStringLiteral("t1scrollAreaWidgetContents"));
        t1scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1039, 429));
        t1scrollAreaWidgetContents->setStyleSheet(QLatin1String("QWidget#scrollAreaWidgetContents{\n"
"    background:transparent;\n"
"}"));
        t1scrollArea->setWidget(t1scrollAreaWidgetContents);
        t1le_2 = new QLineEdit(tab);
        t1le_2->setObjectName(QStringLiteral("t1le_2"));
        t1le_2->setGeometry(QRect(690, 610, 401, 41));
        t1le_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: transparent;\n"
"	border: none;\n"
"	text-align: center; \n"
"	font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"	color: rgb(255,255,255);\n"
"}\n"
""));
        t1picnoans = new QLabel(tab);
        t1picnoans->setObjectName(QStringLiteral("t1picnoans"));
        t1picnoans->setGeometry(QRect(70, 230, 977, 384));
        t1picnoans->setPixmap(QPixmap(QString::fromUtf8(":/pic/PageB1-noans.png")));
        tabWidget->addTab(tab, QString());
        t1pic_search->raise();
        t1le->raise();
        t1pic02->raise();
        t1pic03->raise();
        t1pic01->raise();
        listWidget->raise();
        t1cb_searchType->raise();
        t1cb_sortType->raise();
        t1btn_search->raise();
        listWidget_2->raise();
        listWidget_3->raise();
        t1scrollArea->raise();
        t1le_2->raise();
        t1picnoans->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 210, 1111, 451));
        scrollArea->setStyleSheet(QLatin1String("QWidget#scrollAreaWidgetContents{\n"
"    background:transparent;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1109, 449));
        scrollAreaWidgetContents->setStyleSheet(QLatin1String("QWidget#scrollAreaWidgetContents{\n"
"    background:transparent;\n"
"}"));
        scrollArea->setWidget(scrollAreaWidgetContents);
        t2pic_search = new QLabel(tab_2);
        t2pic_search->setObjectName(QStringLiteral("t2pic_search"));
        t2pic_search->setGeometry(QRect(261, 44, 651, 131));
        t2pic_search->setPixmap(QPixmap(QString::fromUtf8(":/pic/PageB-searchLine.png")));
        t2cb_searchType = new QComboBox(tab_2);
        t2cb_searchType->setObjectName(QStringLiteral("t2cb_searchType"));
        t2cb_searchType->setGeometry(QRect(265, 85, 151, 47));
        t2cb_searchType->setStyleSheet(QString::fromUtf8("/* \346\234\252\344\270\213\346\213\211\346\227\266\357\274\214QComboBox\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox {\n"
"    border: none;\n"
"    border-radius:22px;   /* \345\234\206\350\247\222 */\n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */\n"
"    /*color: rgba(0,0,0,1);*/\n"
"    font: normal normal 20px \"Microsoft YaHei\";\n"
"    background: transparent;\n"
"    text-align: AlignHCenter;\n"
" \n"
"    color:rgb(255,255,255);/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
"    background-color: transparent;\n"
"    border-image: url(:/pic/PageB2-combo-bg1.png);/*\350\203\214\346\231\257\345\233\276\347\211\207\357\274\214\345\234\206\350\247\222*/\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347"
                        "\252\227\344\275\223\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView {\n"
"    outline: 0px solid gray;   /* \351\200\211\345\256\232\351\241\271\347\232\204\350\231\232\346\241\206 */\n"
"    border-radius:10px;   /* \345\234\206\350\247\222 */\n"
"    padding-top:10px;    /*\344\270\212\344\270\213\351\203\275\347\225\23110px\357\274\214\346\230\257\345\233\240\344\270\272\351\200\211\344\270\255\351\241\271\346\230\257\347\237\251\345\275\242\357\274\214\345\246\202\346\236\234\344\270\215\347\225\231\357\274\214\347\247\273\345\212\250\345\210\260\347\254\254\344\270\200\351\241\271\345\222\214\346\234\200\345\220\216\344\270\200\351\241\271\344\274\232\345\217\230\344\270\272\347\233\264\350\247\222\357\274\214\344\270\215\345\245\275\347\234\213*/\n"
"    padding-bottom:10px;\n"
" \n"
"    color:rgb(160,160,160);\n"
"    border-image: url(:/pic/PageB2-combo-bg2.png);/*\344\270\213\346\213\211\346\241\206\350\203\214\346\231\257\357\274\214\345\234\206\350\247\222\345\233\276\347\211\207*/\n"
""
                        "}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item {\n"
" \n"
"    min-height: 47px;/*\346\257\217\351\241\271\351\253\230\345\272\246*/\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    color:rgb(255,255,255);\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\346\213\251\347\232\204\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    color:rgb(255,255,255);\n"
" \n"
"    border-image: url(:/pic/PageB2-combo-bg1.png);/*\351"
                        "\274\240\346\240\207\346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\345\233\276\347\211\207*/\n"
"}\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;/*\346\224\276\344\272\216\345\217\263\346\226\271\351\241\266\351\203\250*/\n"
"    width: 50px;/*\350\256\276\347\275\256\346\214\211\351\222\256\350\214\203\345\233\264\345\256\275\345\272\246*/\n"
" 	/*border-radius: 15px;\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;*/\n"
"\n"
"    border-top-right-radius: 3px;/*\350\256\276\347\275\256\350\276\271\346\241\206\345\234\206\350\247\222*/\n"
"    border-bottom-right-radius: 3px;\n"
"/*padding-right: 50px;*/\n"
"}\n"
"\n"
"/*QCombobox\345\217\263\344\276\247\346\214\211\351\222\256\347\232\204\347\256\255\345\244\264\345\233\276\346\240\207*/\n"
"QComboBox::down-arrow {\n"
"	border-image: url(:/pic/down.png);/*\350\207\252\345\256\232\344\271\211\345\233\276\347\211\207\345\241\253\345\205\205"
                        "*/\n"
"	width: 15px;/*\350\256\276\347\275\256\350\257\245\345\233\276\346\240\207\347\232\204\345\256\275\351\253\230*/\n"
"	height: 15px;\n"
"}\n"
"\n"
""));
        t2cb_sortType = new QComboBox(tab_2);
        t2cb_sortType->setObjectName(QStringLiteral("t2cb_sortType"));
        t2cb_sortType->setGeometry(QRect(260, 150, 161, 31));
        t2cb_sortType->setStyleSheet(QString::fromUtf8("/* \346\234\252\344\270\213\346\213\211\346\227\266\357\274\214QComboBox\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox {\n"
"    /*border: 1px solid gray;   /* \350\276\271\346\241\206 */\n"
"    border-radius:15px;   /* \345\234\206\350\247\222 */\n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */\n"
"    color: rgba(0,0,0,1);\n"
"    font: normal normal 20px \"Microsoft YaHei\";\n"
"    background: transparent;\n"
"    text-align: AlignHCenter;\n"
" \n"
"    color:rgb(255,255,255);/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
"    background-color: transparent;\n"
"   /* border-image: url(:/pic/PageB2-combo-bg2.png);/*\350\203\214\346\231\257\345\233\276\347\211\207\357\274\214\345\234\206\350\247\222*/\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225"
                        "\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView {\n"
"    outline: 0px solid gray;   /* \351\200\211\345\256\232\351\241\271\347\232\204\350\231\232\346\241\206 */\n"
"    border-radius:10px;   /* \345\234\206\350\247\222 */\n"
"    padding-top:10px;    /*\344\270\212\344\270\213\351\203\275\347\225\23110px\357\274\214\346\230\257\345\233\240\344\270\272\351\200\211\344\270\255\351\241\271\346\230\257\347\237\251\345\275\242\357\274\214\345\246\202\346\236\234\344\270\215\347\225\231\357\274\214\347\247\273\345\212\250\345\210\260\347\254\254\344\270\200\351\241\271\345\222\214\346\234\200\345\220\216\344\270\200\351\241\271\344\274\232\345\217\230\344\270\272\347\233\264\350\247\222\357\274\214\344\270\215\345\245\275\347\234\213*/\n"
"    padding-bottom:10px;\n"
" \n"
"    color:rgb(160,160,160);\n"
"    border-image: url(:/pic/PageB2-combo-bg2.png);/*\344\270\213\346\213\211\346\241\206\350\203\214\346\231\257\357\274\214\345\234\206"
                        "\350\247\222\345\233\276\347\211\207*/\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item {\n"
" \n"
"    min-height: 50px;/*\346\257\217\351\241\271\351\253\230\345\272\246*/\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    color:rgb(255,255,255);\n"
"}\n"
" \n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\346\213\251\347\232\204\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    color:rgb(255,255,255);\n"
" \n"
"    border-i"
                        "mage: url(:/pic/PageB2-combo-bg1.png);/*\351\274\240\346\240\207\346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\345\233\276\347\211\207*/\n"
"}\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;/*\346\224\276\344\272\216\345\217\263\346\226\271\351\241\266\351\203\250*/\n"
"    width: 50px;/*\350\256\276\347\275\256\346\214\211\351\222\256\350\214\203\345\233\264\345\256\275\345\272\246*/\n"
" 	/*border-radius: 15px;\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;*/\n"
"\n"
"    border-top-right-radius: 3px;/*\350\256\276\347\275\256\350\276\271\346\241\206\345\234\206\350\247\222*/\n"
"    border-bottom-right-radius: 3px;\n"
"/*padding-right: 50px;*/\n"
"}\n"
"\n"
"/*QCombobox\345\217\263\344\276\247\346\214\211\351\222\256\347\232\204\347\256\255\345\244\264\345\233\276\346\240\207*/\n"
"QComboBox::down-arrow {\n"
"	border-image: url(:/pic/down.png);/*\350\207\252\345\256\232\344\271\211\345"
                        "\233\276\347\211\207\345\241\253\345\205\205*/\n"
"	width: 15px;/*\350\256\276\347\275\256\350\257\245\345\233\276\346\240\207\347\232\204\345\256\275\351\253\230*/\n"
"	height: 15px;\n"
"}\n"
""));
        t2le = new QLineEdit(tab_2);
        t2le->setObjectName(QStringLiteral("t2le"));
        t2le->setGeometry(QRect(420, 90, 401, 41));
        t2le->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: transparent;\n"
"	border: none;\n"
"	text-align: center; \n"
"	font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';\n"
"	color: rgb(255,255,255);\n"
"}\n"
""));
        t2btn_search = new QPushButton(tab_2);
        t2btn_search->setObjectName(QStringLiteral("t2btn_search"));
        t2btn_search->setGeometry(QRect(790, 60, 91, 81));
        t2btn_search->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    border: none;  \n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */  \n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */  \n"
"    color: rgb(255, 255, 255); /* \345\255\227\344\275\223\351\242\234\350\211\262 */  \n"
"    font: 15px \"Microsoft YaHei\"; /* \345\255\227\344\275\223\345\244\247\345\260\217\345\222\214\345\220\215\347\247\260 */  \n"
"    text-align: center;  \n"
"    background: transparent; /* \350\277\231\351\207\214\345\217\257\344\273\245\347\234\201\347\225\245\357\274\214\345\233\240\344\270\272\345\220\216\351\235\242\344\274\232\350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"    background-image: url(:/pic/btn-search-normal.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */"
                        "  \n"
"	background-repeat:no-repeat;\n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-image: url(:/pic/btn-search-hover.png); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"	background-repeat:no-repeat;\n"
"}"));
        t2picnoans = new QLabel(tab_2);
        t2picnoans->setObjectName(QStringLiteral("t2picnoans"));
        t2picnoans->setGeometry(QRect(70, 230, 977, 384));
        t2picnoans->setPixmap(QPixmap(QString::fromUtf8(":/pic/PageB1-noans.png")));
        tabWidget->addTab(tab_2, QString());
        btn_quit = new QPushButton(PageB);
        btn_quit->setObjectName(QStringLiteral("btn_quit"));
        btn_quit->setGeometry(QRect(1090, 0, 61, 61));
        btn_quit->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    border: none;  \n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */  \n"
"    background: transparent; /* \350\277\231\351\207\214\345\217\257\344\273\245\347\234\201\347\225\245\357\274\214\345\233\240\344\270\272\345\220\216\351\235\242\344\274\232\350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"    background-image: url(:/pic/btn-close-normal.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"	background-repeat:no-repeat;\n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-image: url(:/pic/btn-close-hover.png); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"	background-repeat:no-repeat;\n"
"}"));
        btn_quit->setIconSize(QSize(30, 30));
        btn_logoff = new QPushButton(PageB);
        btn_logoff->setObjectName(QStringLiteral("btn_logoff"));
        btn_logoff->setGeometry(QRect(1027, 9, 61, 41));
        btn_logoff->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    border: none;   \n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */  \n"
"    color: rgb(255, 255, 255); /* \345\255\227\344\275\223\351\242\234\350\211\262 */  \n"
"    font: 15px \"Microsoft YaHei\"; /* \345\255\227\344\275\223\345\244\247\345\260\217\345\222\214\345\220\215\347\247\260 */  \n"
"    text-align: center;  \n"
"    background: transparent; /* \350\277\231\351\207\214\345\217\257\344\273\245\347\234\201\347\225\245\357\274\214\345\233\240\344\270\272\345\220\216\351\235\242\344\274\232\350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"    background-image: url(:/pic/btn-logoff-normal.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"	background-repeat:no-repeat;\n"
"}  \n"
"  \n"
"QPush"
                        "Button:hover {  \n"
"    background-image: url(:/pic/btn-logoff-hover.png); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"	background-repeat:no-repeat;\n"
"}"));
        btn_logoff->setIconSize(QSize(30, 30));

        retranslateUi(PageB);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PageB);
    } // setupUi

    void retranslateUi(QWidget *PageB)
    {
        PageB->setWindowTitle(QApplication::translate("PageB", "Form", Q_NULLPTR));
        label->setText(QString());
        t1pic02->setText(QString());
        t1pic03->setText(QString());
        t1pic01->setText(QString());
        t1btn_search->setText(QString());
        t1cb_searchType->clear();
        t1cb_searchType->insertItems(0, QStringList()
         << QApplication::translate("PageB", "\345\220\215\347\247\260", Q_NULLPTR)
         << QApplication::translate("PageB", "\347\261\273\345\210\253", Q_NULLPTR)
         << QApplication::translate("PageB", "\345\205\263\351\224\256\345\255\227", Q_NULLPTR)
        );
        t1pic_search->setText(QString());
        t1cb_sortType->clear();
        t1cb_sortType->insertItems(0, QStringList()
         << QApplication::translate("PageB", "\346\214\211\347\203\255\345\272\246\346\216\222\345\272\217", Q_NULLPTR)
         << QApplication::translate("PageB", "\346\214\211\350\257\204\344\273\267\346\216\222\345\272\217", Q_NULLPTR)
        );
        t1picnoans->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PageB", "\346\270\270\350\247\210", Q_NULLPTR));
        t2pic_search->setText(QString());
        t2cb_searchType->clear();
        t2cb_searchType->insertItems(0, QStringList()
         << QApplication::translate("PageB", "\346\227\245\350\256\260\346\240\207\351\242\230", Q_NULLPTR)
         << QApplication::translate("PageB", "\346\227\245\350\256\260\345\206\205\345\256\271", Q_NULLPTR)
         << QApplication::translate("PageB", "\347\233\256\347\232\204\345\234\260", Q_NULLPTR)
        );
        t2cb_sortType->clear();
        t2cb_sortType->insertItems(0, QStringList()
         << QApplication::translate("PageB", "\346\214\211\347\203\255\345\272\246\346\216\222\345\272\217", Q_NULLPTR)
         << QApplication::translate("PageB", "\346\214\211\350\257\204\344\273\267\346\216\222\345\272\217", Q_NULLPTR)
         << QApplication::translate("PageB", "\346\214\211\345\205\264\350\266\243\346\216\222\345\272\217", Q_NULLPTR)
        );
        t2btn_search->setText(QString());
        t2picnoans->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PageB", "\347\254\224\350\256\260", Q_NULLPTR));
        btn_quit->setText(QString());
        btn_logoff->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageB: public Ui_PageB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEB_H
