/********************************************************************************
** Form generated from reading UI file 'diarylistwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIARYLISTWIDGET_H
#define UI_DIARYLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiaryListWidget
{
public:
    QLabel *label;

    void setupUi(QWidget *DiaryListWidget)
    {
        if (DiaryListWidget->objectName().isEmpty())
            DiaryListWidget->setObjectName(QStringLiteral("DiaryListWidget"));
        DiaryListWidget->resize(400, 300);
        label = new QLabel(DiaryListWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -20, 461, 331));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pic/PageC-destinations.png")));

        retranslateUi(DiaryListWidget);

        QMetaObject::connectSlotsByName(DiaryListWidget);
    } // setupUi

    void retranslateUi(QWidget *DiaryListWidget)
    {
        DiaryListWidget->setWindowTitle(QApplication::translate("DiaryListWidget", "Form", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DiaryListWidget: public Ui_DiaryListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIARYLISTWIDGET_H
