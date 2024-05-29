#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QMouseEvent>

#include "pageb.h"
#include "api_for_ybc.h"
#include "api_for_djh.h"
#include "diarylistwidget.h"

namespace Ui {
    class PageA;
}

class PageA : public QWidget
{
    Q_OBJECT

    public:
        explicit PageA(QWidget *parent = 0);
        ~PageA();

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
        Ui::PageA *ui;
        static const int DRAG_AREA_HEIGHT = 30; // 假设拖拽区域的高度为30像素
        bool isDragging;
        QPoint lastPoint;

    public slots:
        void on_login_clicked();
        void on_regist_clicked();

};

#endif // LOGIN_H
