#ifndef WRITENOTEWIDGET_H
#define WRITENOTEWIDGET_H

#include <QWidget>
#include <QDialog>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QDebug>
#include <QPlainTextEdit>
#include <QLabel>
#include <QDateTime>

#include "mylineedit.h"
#include"api_for_ybc.h"
#include "api_for_djh.h"

namespace Ui {
    class WriteNoteWidget;
}

class WriteNoteWidget : public QWidget
{
    Q_OBJECT

    public:
        explicit WriteNoteWidget(QWidget *parent = 0);
        ~WriteNoteWidget();

    private:
        MyLineEdit * ql_title;
        QPlainTextEdit *plte_body;
        QPushButton * btn_save, * btn_cancle;
        QLabel * ql_bgpic;

    public slots:
        void on_saveButton_clicked();
        void on_cancleButton_clicked();

};

#endif // WRITENOTEWIDGET_H
