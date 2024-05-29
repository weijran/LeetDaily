#ifndef PAGEB_H
#define PAGEB_H

#include <QDebug>
#include <QWidget>
#include <QLineEdit>
#include <QComboBox>
#include <QPushButton>
#include <QMouseEvent>
#include <QListWidget>
#include <QTableWidget>

#include "api_for_ybc.h"
#include "api_for_djh.h"
#include "pagec.h"
#include "ui_pageb.h"
#include "frontend_ds.h"
#include "diarydialog.h"
#include "diarylistwidget.h"
#include "destinationlistwidget.h"

namespace Ui {
    class PageB;
}

class PageB : public QWidget
{
    Q_OBJECT

    public:
        explicit PageB(QWidget *parent = 0);
        ~PageB();

        QWidget * father;

    private:
        Ui::PageB *ui;

        QPushButton * btn_quit;

        const int ItemIdRole = Qt::UserRole + 1;

        // 拖拽页面功能
        static const int DRAG_AREA_HEIGHT = 30; // 假设拖拽区域的高度为30像素
        bool isDragging;
        QPoint lastPoint;

        // tab“游学”的内容
        QListWidgetItem *items[30];
        std::vector<Destination> be_recomandList;

        std::vector<Destination> be_destList;
        std::vector<destListPos> fe_destList;

        // tab“日记”的内容
        std::vector<DiaryInformation> be_diaryList;// 从后端得到的日记信息列表
        std::vector< std::vector<diaryListPos>> fe_diaryList; //前端日记列表

        // 日记列表相关
        QPixmap *grey_pic;
        QPixmap *blue_pic;
        int pic_width;
        int pic_height_big;
        int pic_height_small;
        int max_y_position; // 最大高度

        QPixmap *narrow_bg;
        QPixmap *wide_bg;
        int bg_width;
        int bg_height_big;
        int bg_height_small;


    protected:
        void mousePressEvent(QMouseEvent *event) override {
            if (event->button() == Qt::LeftButton && event->y() <= DRAG_AREA_HEIGHT) {
                // 鼠标左键按下且位置在窗口上方一定区域内
                isDragging = true;
                lastPoint = event->globalPos() - this->pos();
            }
        }

        void mouseMoveEvent(QMouseEvent *event) override {
            if ((event->buttons() & Qt::LeftButton) && isDragging) {
                // 鼠标左键按下且正在拖拽
                move(event->globalPos() - lastPoint);
            }
        }

        void mouseReleaseEvent(QMouseEvent *event) override {
            if (event->button() == Qt::LeftButton && isDragging) {
                // 鼠标左键释放，结束拖拽
                isDragging = false;
            }
        }

    private:
        void query_and_show_diary_list(QString keyword, int searchType, int sortType);

    public slots:
        void onListItemClicked(QListWidgetItem *item);
        void OnT1SearchBtnClicked();
        void OnT2SearchBtnClicked();
        void onDiaryItemClicked(DiaryListWidget * clickedWidget);
        void onDestItemClicked(DestinationListWidget * clickedWidget);
        void onLogoffClicked();
};

#endif // PAGEB_H
