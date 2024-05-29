/********************************************************************************
** Form generated from reading UI file 'diarydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIARYDIALOG_H
#define UI_DIARYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiaryDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QPlainTextEdit *body;
    QPushButton *pushButton;
    QSlider *horizontalSlider;
    QPushButton *btn_close;
    QPushButton *pushButton_2;

    void setupUi(QWidget *DiaryDialog)
    {
        if (DiaryDialog->objectName().isEmpty())
            DiaryDialog->setObjectName(QStringLiteral("DiaryDialog"));
        DiaryDialog->resize(376, 512);
        label = new QLabel(DiaryDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 379, 512));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pic/PageD-bg.png")));
        label_2 = new QLabel(DiaryDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 376, 512));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/pic/PageD-lookDiary.png")));
        body = new QPlainTextEdit(DiaryDialog);
        body->setObjectName(QStringLiteral("body"));
        body->setGeometry(QRect(30, 120, 311, 281));
        body->setStyleSheet(QLatin1String("QPlainTextEdit {\n"
"	border-radius: 3px;\n"
"	padding: 5px;\n"
"	font: 17px \"Microsoft YaHei\";\n"
"	color: white;\n"
"	background-color: transparent;\n"
"}"));
        pushButton = new QPushButton(DiaryDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 30, 181, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    border: none;\n"
"    border-radius: 3px;  \n"
"    padding: 10px 5px; /* \344\270\212\344\270\213 padding \345\244\247\344\272\216\345\267\246\345\217\263 padding\357\274\214\344\273\245\346\250\241\346\213\237\345\236\202\347\233\264\345\261\205\344\270\255\347\232\204\346\225\210\346\236\234 */  \n"
"    font: 20px \"Microsoft YaHei\";  \n"
"    color: white;  \n"
"    background-color: transparent; /* \346\263\250\346\204\217\350\203\214\346\231\257\350\211\262\346\230\257\345\220\246\351\200\217\346\230\216 */  \n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-color: transparent;  \n"
"}  \n"
"  \n"
""));
        horizontalSlider = new QSlider(DiaryDialog);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(79, 446, 141, 31));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal { /* \346\263\250\346\204\217\357\274\232groove \344\270\215\346\230\257\346\240\207\345\207\206 QSS \345\261\236\346\200\247\357\274\214\345\217\257\350\203\275\351\234\200\350\246\201\346\233\277\346\215\242\344\270\272\345\205\266\344\273\226\345\205\203\347\264\240 */  \n"
"    height: 12px;   \n"
"    background: rgba(156, 9, 78, 100); \n"
"		left: 0px; \n"
"		right: 0px;\n"
"	border-radius:6px;   \n"
"\n"
"}  \n"
"  \n"
"QSlider::handle:horizontal {  \n"
"    width: 18px;   \n"
"    height: 18px;  \n"
"	margin-top: -3px;  \n"
"	margin-bottom: -3px; \n"
"    border-image: url(:/pic/slider-handle.png);  \n"
"    /* \345\205\266\344\273\226\346\240\267\345\274\217\345\261\236\346\200\247... */  \n"
"}  \n"
"  \n"
"QSlider::sub-page:horizontal {  \n"
"    background: rgba(0, 200, 205, 1); \n"
"border-radius:6px;    \n"
"    /* \345\205\266\344\273\226\346\240\267\345\274\217\345\261\236\346\200\247... */  \n"
"}"));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(5);
        horizontalSlider->setPageStep(2);
        horizontalSlider->setValue(4);
        horizontalSlider->setOrientation(Qt::Horizontal);
        btn_close = new QPushButton(DiaryDialog);
        btn_close->setObjectName(QStringLiteral("btn_close"));
        btn_close->setGeometry(QRect(240, 442, 100, 37));
        btn_close->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    border: none;  \n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */  \n"
"    padding: 0px 0px 0px 10px; /* \344\270\212\345\206\205\350\276\271\350\267\235\343\200\201\345\217\263\345\206\205\350\276\271\350\267\235\343\200\201\344\270\213\345\206\205\350\276\271\350\267\235\343\200\201\345\267\246\345\206\205\350\276\271\350\267\235 */  \n"
"    color: rgb(255, 255, 255); /* \345\255\227\344\275\223\351\242\234\350\211\262 */  \n"
"    font: 14px \"Microsoft YaHei\"; /* \345\255\227\344\275\223\345\244\247\345\260\217\345\222\214\345\220\215\347\247\260 */  \n"
"    text-align: center;  \n"
"    background: transparent; /* \350\277\231\351\207\214\345\217\257\344\273\245\347\234\201\347\225\245\357\274\214\345\233\240\344\270\272\345\220\216\351\235\242\344\274\232\350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"    background-image: url(:/pic/btn-pinkcyon2-normal.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207"
                        " */  \n"
"	background-repeat:no-repeat;\n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-image: url(:/pic/btn-pinkcyon2-hover.png); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\224\271\345\217\230\350\203\214\346\231\257\345\233\276\347\211\207 */  \n"
"	background-repeat:no-repeat;\n"
"}"));
        pushButton_2 = new QPushButton(DiaryDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 60, 181, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {  \n"
"    border: none;\n"
"    border-radius: 3px;  \n"
"    padding: 10px 5px; /* \344\270\212\344\270\213 padding \345\244\247\344\272\216\345\267\246\345\217\263 padding\357\274\214\344\273\245\346\250\241\346\213\237\345\236\202\347\233\264\345\261\205\344\270\255\347\232\204\346\225\210\346\236\234 */  \n"
"    font: 16px \"Microsoft YaHei\";  \n"
"    color: white;  \n"
"    background-color: transparent; /* \346\263\250\346\204\217\350\203\214\346\231\257\350\211\262\346\230\257\345\220\246\351\200\217\346\230\216 */  \n"
"}  \n"
"  \n"
"QPushButton:hover {  \n"
"    background-color: transparent;  \n"
"}  \n"
"  \n"
""));

        retranslateUi(DiaryDialog);

        QMetaObject::connectSlotsByName(DiaryDialog);
    } // setupUi

    void retranslateUi(QWidget *DiaryDialog)
    {
        DiaryDialog->setWindowTitle(QApplication::translate("DiaryDialog", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        body->setPlainText(QString());
        pushButton->setText(QString());
        btn_close->setText(QApplication::translate("DiaryDialog", "\345\205\263\351\227\255 ", Q_NULLPTR));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DiaryDialog: public Ui_DiaryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIARYDIALOG_H
