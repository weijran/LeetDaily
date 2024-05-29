/********************************************************************************
** Form generated from reading UI file 'pagec.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEC_H
#define UI_PAGEC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageC
{
public:
    QLabel *label_bg;
    QLabel *label_searchRect;
    QLabel *label_destination;
    QPushButton *btn_return;
    QPushButton *btn_write_note;
    QComboBox *selectType;
    QLabel *label_facilitiesCard;
    QPushButton *btn_go;
    QPushButton *btn_quit;
    QLabel *label_building;
    QListWidget *listWidget;
    QComboBox *vehicleType;
    QPushButton *btn_addto;
    QPushButton *btn_setstart;
    QPushButton *btn_gothere;
    QLabel *legned;
    QLabel *green;
    QLabel *orange;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *PageC)
    {
        if (PageC->objectName().isEmpty())
            PageC->setObjectName(QStringLiteral("PageC"));
        PageC->resize(1150, 730);
        PageC->setMinimumSize(QSize(1150, 730));
        PageC->setMaximumSize(QSize(1150, 730));
        label_bg = new QLabel(PageC);
        label_bg->setObjectName(QStringLiteral("label_bg"));
        label_bg->setGeometry(QRect(0, 0, 1151, 751));
        label_bg->setScaledContents(true);
        label_searchRect = new QLabel(PageC);
        label_searchRect->setObjectName(QStringLiteral("label_searchRect"));
        label_searchRect->setGeometry(QRect(300, 30, 801, 91));
        label_searchRect->setPixmap(QPixmap(QString::fromUtf8(":/pic/PageC-searchLine.png")));
        label_destination = new QLabel(PageC);
        label_destination->setObjectName(QStringLiteral("label_destination"));
        label_destination->setGeometry(QRect(90, 50, 201, 21));
        label_destination->setStyleSheet(QLatin1String("QLabel {\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 20px;\n"
"    color: #FFFFFF;\n"
"}\n"
""));
        btn_return = new QPushButton(PageC);
        btn_return->setObjectName(QStringLiteral("btn_return"));
        btn_return->setGeometry(QRect(20, 40, 61, 51));
        btn_return->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    border: none;  \n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */  \n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */  \n"
"    color: rgb(255, 255, 255); /* \345\255\227\344\275\223\351\242\234\350\211\262 */  \n"
"    font: 15px \"Microsoft YaHei\"; /* \345\255\227\344\275\223\345\244\247\345\260\217\345\222\214\345\220\215\347\247\260 */  \n"
"    text-align: center;  \n"
"    background: transparent; /* \350\277\231\351\207\214\345\217\257\344\273\245\347\234\201\347\225\245\357\274\214\345\233\240\344\270\272\345\220\216\351\235\242\344\274\232\350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"    background-image: url(:/pic/btn-return-normal.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */"
                        "  \n"
"	background-repeat:no-repeat;\n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-image: url(:/pic/btn-return-hover.png); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"	background-repeat:no-repeat;\n"
"}"));
        btn_write_note = new QPushButton(PageC);
        btn_write_note->setObjectName(QStringLiteral("btn_write_note"));
        btn_write_note->setGeometry(QRect(23, 100, 61, 51));
        btn_write_note->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    border: none;  \n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */  \n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */  \n"
"    color: rgb(255, 255, 255); /* \345\255\227\344\275\223\351\242\234\350\211\262 */  \n"
"    font: 15px \"Microsoft YaHei\"; /* \345\255\227\344\275\223\345\244\247\345\260\217\345\222\214\345\220\215\347\247\260 */  \n"
"    text-align: center;  \n"
"    background: transparent; /* \350\277\231\351\207\214\345\217\257\344\273\245\347\234\201\347\225\245\357\274\214\345\233\240\344\270\272\345\220\216\351\235\242\344\274\232\350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"    background-image: url(:/pic/btn-note-normal.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  "
                        "\n"
"	background-repeat:no-repeat;\n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-image: url(:/pic/btn-note-hover.png); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"	background-repeat:no-repeat;\n"
"}"));
        selectType = new QComboBox(PageC);
        selectType->setObjectName(QStringLiteral("selectType"));
        selectType->setGeometry(QRect(840, 230, 101, 31));
        selectType->setStyleSheet(QString::fromUtf8("/* \346\234\252\344\270\213\346\213\211\346\227\266\357\274\214QComboBox\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox {\n"
"    /*border: 1px solid gray;   /* \350\276\271\346\241\206 */\n"
"    border-radius:15px;   /* \345\234\206\350\247\222 */\n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */\n"
"    color: rgba(0,0,0,1);\n"
"    font: normal normal 16px \"Microsoft YaHei\";\n"
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
        label_facilitiesCard = new QLabel(PageC);
        label_facilitiesCard->setObjectName(QStringLiteral("label_facilitiesCard"));
        label_facilitiesCard->setGeometry(QRect(700, 160, 376, 512));
        label_facilitiesCard->setPixmap(QPixmap(QString::fromUtf8(":/pic/PageC-facilitie.png")));
        btn_go = new QPushButton(PageC);
        btn_go->setObjectName(QStringLiteral("btn_go"));
        btn_go->setGeometry(QRect(940, 51, 48, 48));
        btn_go->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    border: none;  \n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */  \n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */  \n"
"    color: rgb(255, 255, 255); /* \345\255\227\344\275\223\351\242\234\350\211\262 */  \n"
"    font: 15px \"Microsoft YaHei\"; /* \345\255\227\344\275\223\345\244\247\345\260\217\345\222\214\345\220\215\347\247\260 */  \n"
"    text-align: center;  \n"
"    background: transparent; /* \350\277\231\351\207\214\345\217\257\344\273\245\347\234\201\347\225\245\357\274\214\345\233\240\344\270\272\345\220\216\351\235\242\344\274\232\350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"    background-image: url(:/pic/btn-go-normal.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
""
                        "	background-repeat:no-repeat;\n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-image: url(:/pic/btn-go-hover.png); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"	background-repeat:no-repeat;\n"
"}"));
        btn_quit = new QPushButton(PageC);
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
        label_building = new QLabel(PageC);
        label_building->setObjectName(QStringLiteral("label_building"));
        label_building->setGeometry(QRect(740, 236, 71, 20));
        label_building->setStyleSheet(QLatin1String("QLabel {\n"
"    font-family: \"Microsoft YaHei\";\n"
"    font-size: 16px;\n"
"    color: #FFFFFF;\n"
"    background-color: transparent;\n"
"}\n"
""));
        listWidget = new QListWidget(PageC);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(730, 280, 311, 281));
        listWidget->setStyleSheet(QLatin1String("QListView {\n"
"	background-color: transparent;\n"
"	font: 7pt \"Microsoft YaHei\";\n"
"	border: none;\n"
"	color : white\n"
"}\n"
"\n"
"QListView::item {\n"
"    height: 60px;\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"	background-color: transparent;\n"
"	padding: 10px;\n"
"	border-left: 3px solid cyan;\n"
"}\n"
"\n"
"QListView::item:selected {\n"
"	background-color: transparent;\n"
"	color: black;\n"
"	padding: 10px;\n"
"	border-left: 3px solid black;\n"
"}"));
        vehicleType = new QComboBox(PageC);
        vehicleType->setObjectName(QStringLiteral("vehicleType"));
        vehicleType->setGeometry(QRect(304, 51, 151, 47));
        vehicleType->setStyleSheet(QString::fromUtf8("/* \346\234\252\344\270\213\346\213\211\346\227\266\357\274\214QComboBox\347\232\204\346\240\267\345\274\217 */\n"
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
        btn_addto = new QPushButton(PageC);
        btn_addto->setObjectName(QStringLiteral("btn_addto"));
        btn_addto->setGeometry(QRect(958, 600, 72, 41));
        btn_addto->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    border: none;  \n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */  \n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */  \n"
"    color: rgb(255, 255, 255); /* \345\255\227\344\275\223\351\242\234\350\211\262 */  \n"
"    font: 15px \"Microsoft YaHei\"; /* \345\255\227\344\275\223\345\244\247\345\260\217\345\222\214\345\220\215\347\247\260 */  \n"
"    text-align: center;  \n"
"    background: transparent; /* \350\277\231\351\207\214\345\217\257\344\273\245\347\234\201\347\225\245\357\274\214\345\233\240\344\270\272\345\220\216\351\235\242\344\274\232\350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"    background-image: url(:/pic/btn-addto-normal.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */ "
                        " \n"
"	background-repeat:no-repeat;\n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-image: url(:/pic/btn-addto-hover.png); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"	background-repeat:no-repeat;\n"
"}"));
        btn_setstart = new QPushButton(PageC);
        btn_setstart->setObjectName(QStringLiteral("btn_setstart"));
        btn_setstart->setGeometry(QRect(750, 600, 72, 41));
        btn_setstart->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    border: none;  \n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */  \n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */  \n"
"    color: rgb(255, 255, 255); /* \345\255\227\344\275\223\351\242\234\350\211\262 */  \n"
"    font: 15px \"Microsoft YaHei\"; /* \345\255\227\344\275\223\345\244\247\345\260\217\345\222\214\345\220\215\347\247\260 */  \n"
"    text-align: center;  \n"
"    background: transparent; /* \350\277\231\351\207\214\345\217\257\344\273\245\347\234\201\347\225\245\357\274\214\345\233\240\344\270\272\345\220\216\351\235\242\344\274\232\350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"    background-image: url(:/pic/btn-setstart-normal.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 "
                        "*/  \n"
"	background-repeat:no-repeat;\n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-image: url(:/pic/btn-setstart-hover.png); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"	background-repeat:no-repeat;\n"
"}"));
        btn_gothere = new QPushButton(PageC);
        btn_gothere->setObjectName(QStringLiteral("btn_gothere"));
        btn_gothere->setGeometry(QRect(855, 600, 72, 41));
        btn_gothere->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    border: none;  \n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */  \n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */  \n"
"    color: rgb(255, 255, 255); /* \345\255\227\344\275\223\351\242\234\350\211\262 */  \n"
"    font: 15px \"Microsoft YaHei\"; /* \345\255\227\344\275\223\345\244\247\345\260\217\345\222\214\345\220\215\347\247\260 */  \n"
"    text-align: center;  \n"
"    background: transparent; /* \350\277\231\351\207\214\345\217\257\344\273\245\347\234\201\347\225\245\357\274\214\345\233\240\344\270\272\345\220\216\351\235\242\344\274\232\350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"    background-image: url(:/pic/btn-gothere-normal.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 *"
                        "/  \n"
"	background-repeat:no-repeat;\n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-image: url(:/pic/btn-gothere-hover.png); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"	background-repeat:no-repeat;\n"
"}"));
        legned = new QLabel(PageC);
        legned->setObjectName(QStringLiteral("legned"));
        legned->setGeometry(QRect(30, 690, 227, 18));
        legned->setPixmap(QPixmap(QString::fromUtf8(":/pic/legend.png")));
        green = new QLabel(PageC);
        green->setObjectName(QStringLiteral("green"));
        green->setGeometry(QRect(130, 430, 85, 74));
        green->setPixmap(QPixmap(QString::fromUtf8(":/pic/Infobox-green.png")));
        orange = new QLabel(PageC);
        orange->setObjectName(QStringLiteral("orange"));
        orange->setGeometry(QRect(240, 430, 85, 74));
        orange->setPixmap(QPixmap(QString::fromUtf8(":/pic/Infobox-orange.png")));
        scrollArea = new QScrollArea(PageC);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(470, 60, 411, 51));
        scrollArea->setStyleSheet(QStringLiteral(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 409, 49));
        scrollAreaWidgetContents->setStyleSheet(QStringLiteral(""));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_bg->raise();
        label_searchRect->raise();
        label_destination->raise();
        btn_return->raise();
        btn_write_note->raise();
        label_facilitiesCard->raise();
        selectType->raise();
        btn_go->raise();
        btn_quit->raise();
        label_building->raise();
        listWidget->raise();
        vehicleType->raise();
        btn_addto->raise();
        btn_setstart->raise();
        btn_gothere->raise();
        legned->raise();
        green->raise();
        orange->raise();
        scrollArea->raise();

        retranslateUi(PageC);

        QMetaObject::connectSlotsByName(PageC);
    } // setupUi

    void retranslateUi(QWidget *PageC)
    {
        PageC->setWindowTitle(QApplication::translate("PageC", "Form", Q_NULLPTR));
        label_bg->setText(QString());
        label_searchRect->setText(QString());
        label_destination->setText(QString());
        btn_return->setText(QString());
        btn_write_note->setText(QString());
        selectType->clear();
        selectType->insertItems(0, QStringList()
         << QApplication::translate("PageC", "\345\205\250\351\203\250", Q_NULLPTR)
         << QApplication::translate("PageC", "\345\225\206\345\272\227", Q_NULLPTR)
         << QApplication::translate("PageC", "\350\266\205\345\270\202", Q_NULLPTR)
         << QApplication::translate("PageC", "\344\276\277\345\210\251\345\272\227", Q_NULLPTR)
         << QApplication::translate("PageC", "\344\271\246\345\272\227", Q_NULLPTR)
         << QApplication::translate("PageC", "\351\244\220\351\246\206", Q_NULLPTR)
         << QApplication::translate("PageC", "\351\243\237\345\240\202", Q_NULLPTR)
         << QApplication::translate("PageC", "\345\222\226\345\225\241\345\216\205", Q_NULLPTR)
         << QApplication::translate("PageC", "\345\245\266\350\214\266", Q_NULLPTR)
         << QApplication::translate("PageC", "\345\215\253\347\224\237\351\227\264", Q_NULLPTR)
         << QApplication::translate("PageC", "\344\274\221\346\201\257\345\256\244", Q_NULLPTR)
         << QApplication::translate("PageC", "\345\233\276\344\271\246\351\246\206", Q_NULLPTR)
        );
        label_facilitiesCard->setText(QString());
        btn_go->setText(QString());
        btn_quit->setText(QString());
        label_building->setText(QString());
        vehicleType->clear();
        vehicleType->insertItems(0, QStringList()
         << QApplication::translate("PageC", "\346\255\245\350\241\214", Q_NULLPTR)
         << QApplication::translate("PageC", "\351\252\221\350\241\214", Q_NULLPTR)
         << QApplication::translate("PageC", "\347\224\265\350\275\246", Q_NULLPTR)
        );
        btn_addto->setText(QString());
        btn_setstart->setText(QString());
        btn_gothere->setText(QString());
        legned->setText(QString());
        green->setText(QString());
        orange->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageC: public Ui_PageC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEC_H
