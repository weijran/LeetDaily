/********************************************************************************
** Form generated from reading UI file 'pagea.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEA_H
#define UI_PAGEA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageA
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_user;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_pass;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *loginBtn;
    QPushButton *regisBtn;
    QLabel *label;
    QPushButton *btn_quit;
    QLabel *label_hint;

    void setupUi(QWidget *PageA)
    {
        if (PageA->objectName().isEmpty())
            PageA->setObjectName(QStringLiteral("PageA"));
        PageA->resize(1150, 730);
        PageA->setMinimumSize(QSize(1150, 730));
        PageA->setMaximumSize(QSize(1150, 730));
        verticalLayoutWidget = new QWidget(PageA);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(720, 260, 381, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_user = new QLineEdit(verticalLayoutWidget);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));
        lineEdit_user->setMinimumSize(QSize(300, 50));
        lineEdit_user->setMaximumSize(QSize(600, 50));

        verticalLayout->addWidget(lineEdit_user);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        lineEdit_pass = new QLineEdit(verticalLayoutWidget);
        lineEdit_pass->setObjectName(QStringLiteral("lineEdit_pass"));
        lineEdit_pass->setMinimumSize(QSize(300, 50));
        lineEdit_pass->setMaximumSize(QSize(600, 50));
        lineEdit_pass->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(lineEdit_pass);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        loginBtn = new QPushButton(verticalLayoutWidget);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setMinimumSize(QSize(140, 50));
        loginBtn->setMaximumSize(QSize(140, 50));

        horizontalLayout_2->addWidget(loginBtn);

        regisBtn = new QPushButton(verticalLayoutWidget);
        regisBtn->setObjectName(QStringLiteral("regisBtn"));
        regisBtn->setMinimumSize(QSize(140, 50));
        regisBtn->setMaximumSize(QSize(140, 50));

        horizontalLayout_2->addWidget(regisBtn);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(PageA);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1151, 741));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pic/pageA.jpg")));
        label->setScaledContents(true);
        btn_quit = new QPushButton(PageA);
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
        label_hint = new QLabel(PageA);
        label_hint->setObjectName(QStringLiteral("label_hint"));
        label_hint->setGeometry(QRect(726, 235, 141, 21));
        label_hint->setStyleSheet(QString::fromUtf8("QLabel {  \n"
"    color: red;  \n"
"    font-family: \"Microsoft YaHei\";  \n"
"    font-size: 16px; /* \345\260\235\350\257\225\344\275\277\347\224\2509pt\346\235\245\350\277\221\344\274\27410px\347\232\204\346\225\210\346\236\234 */  \n"
"}"));
        label->raise();
        verticalLayoutWidget->raise();
        btn_quit->raise();
        label_hint->raise();

        retranslateUi(PageA);

        QMetaObject::connectSlotsByName(PageA);
    } // setupUi

    void retranslateUi(QWidget *PageA)
    {
        PageA->setWindowTitle(QApplication::translate("PageA", "Login", Q_NULLPTR));
        loginBtn->setText(QApplication::translate("PageA", "\347\231\273\345\275\225", Q_NULLPTR));
        regisBtn->setText(QApplication::translate("PageA", "\346\263\250\345\206\214", Q_NULLPTR));
        label->setText(QString());
        btn_quit->setText(QString());
        label_hint->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PageA: public Ui_PageA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEA_H
