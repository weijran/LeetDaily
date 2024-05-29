#ifndef DIARYDIALOG_H
#define DIARYDIALOG_H

#include <QDebug>
#include <QWidget>
#include <QPushButton>
#include <QMouseEvent>

#include "api_for_ybc.h"
#include "api_for_djh.h"

namespace Ui {
    class DiaryDialog;
}

class DiaryDialog : public QWidget
{
    Q_OBJECT

    public:
        explicit DiaryDialog(DiaryReadDetail d,int id, QString title, QString author, QWidget *parent = 0);
        ~DiaryDialog();

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
        Ui::DiaryDialog *ui;
        static const int DRAG_AREA_HEIGHT = 30; // 假设拖拽区域的高度为30像素
        bool isDragging;
        QPoint lastPoint;

        // 内容相关
        int id;


    public slots:
        void on_close_clicked();
};

#endif // DIARYDIALOG_H
