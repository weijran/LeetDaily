/********************************************************************************
** Form generated from reading UI file 'notedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEDIALOG_H
#define UI_NOTEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NoteDialog
{
public:
    QPushButton *btn_save;
    QPushButton *btn_cancle;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_title;
    QLineEdit *lineEdit_abstract;
    QLabel *label;

    void setupUi(QDialog *NoteDialog)
    {
        if (NoteDialog->objectName().isEmpty())
            NoteDialog->setObjectName(QStringLiteral("NoteDialog"));
        NoteDialog->resize(950, 650);
        btn_save = new QPushButton(NoteDialog);
        btn_save->setObjectName(QStringLiteral("btn_save"));
        btn_save->setGeometry(QRect(370, 540, 101, 31));
        btn_save->setStyleSheet(QStringLiteral("QPushButton { background-color: rgba(255, 255, 255, 0); }"));
        btn_cancle = new QPushButton(NoteDialog);
        btn_cancle->setObjectName(QStringLiteral("btn_cancle"));
        btn_cancle->setGeometry(QRect(500, 540, 111, 31));
        btn_cancle->setStyleSheet(QStringLiteral("QPushButton { background-color: rgba(255, 255, 255, 0); }"));
        textEdit = new QTextEdit(NoteDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(180, 320, 501, 191));
        lineEdit_title = new QLineEdit(NoteDialog);
        lineEdit_title->setObjectName(QStringLiteral("lineEdit_title"));
        lineEdit_title->setGeometry(QRect(180, 100, 211, 41));
        lineEdit_abstract = new QLineEdit(NoteDialog);
        lineEdit_abstract->setObjectName(QStringLiteral("lineEdit_abstract"));
        lineEdit_abstract->setGeometry(QRect(180, 220, 481, 51));
        lineEdit_abstract->setStyleSheet(QStringLiteral(""));
        label = new QLabel(NoteDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 951, 651));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pic/PageE-bg.png")));
        label->raise();
        btn_save->raise();
        btn_cancle->raise();
        textEdit->raise();
        lineEdit_title->raise();
        lineEdit_abstract->raise();

        retranslateUi(NoteDialog);

        QMetaObject::connectSlotsByName(NoteDialog);
    } // setupUi

    void retranslateUi(QDialog *NoteDialog)
    {
        NoteDialog->setWindowTitle(QApplication::translate("NoteDialog", "Dialog", Q_NULLPTR));
        btn_save->setText(QString());
        btn_cancle->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NoteDialog: public Ui_NoteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEDIALOG_H
