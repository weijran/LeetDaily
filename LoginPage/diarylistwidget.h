#ifndef DIARYLISTWIDGET_H
#define DIARYLISTWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QDebug>
#include <QMouseEvent>
#include <QPlainTextEdit>

#include "api_for_ybc.h"
#include "api_for_djh.h"

class PageB;

namespace Ui {
    class DiaryListWidget;
}

class DiaryListWidget : public QWidget
{
    Q_OBJECT

    public:
        explicit DiaryListWidget(QWidget *parent = 0);
        void setDetails(DiaryInformation * details, int i, int j);
        ~DiaryListWidget();



    public:
        int id, i, j;

        // 文字
        QLabel * ql_title, *ql_author, *ql_time, *ql_remark, *ql_position, *ql_hot;
        QPlainTextEdit * qple_abstract;

        // 背景图片
        QLabel * ql_bgpic;


    signals:
        void clicked(DiaryListWidget * clickedWidget);

    protected:
        virtual void mouseReleaseEvent(QMouseEvent * ev);

};

#endif // DIARYLISTWIDGET_H
