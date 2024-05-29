#ifndef SHOWLINEWIDGET_H
#define SHOWLINEWIDGET_H

#include <QPainter>
#include <QPixmap>
#include <QLabel>
#include <QDebug>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QMouseEvent>
#include <QListWidget>
#include <QListWidgetItem>

#include "api_for_ybc.h"
#include "api_for_djh.h"
#include "writenotewidget.h"
#include "showlinewidget.h"

namespace Ui {
    class ShowLineWidget;
}

class ShowLineWidget : public QWidget
{
    Q_OBJECT

    private:
        // 地图偏移
        const double alpha = 1.126126;
        const int delta = 64;

    public:
        explicit ShowLineWidget(QWidget *parent = 0);
        ~ShowLineWidget();

        RoutePlanResult be_route;
        bool shouldDraw = false;

    protected:
        void paintEvent(QPaintEvent *event) override {

            qDebug() << "画图 paintEvent";
            QPainter painter(this);

            if (shouldDraw)
            {

                QPen pen1(QColor(QString("#11FFAC")), 6, Qt::SolidLine);
                painter.setPen(pen1);
                for (size_t i = 0; i < be_route.min_time_route.wayline.size() - 1; ++i)
                    painter.drawLine(be_route.min_time_route.wayline[ i ].x*alpha, be_route.min_time_route.wayline[ i ].y*alpha+delta,
                                     be_route.min_time_route.wayline[i+1].x*alpha, be_route.min_time_route.wayline[i+1].y*alpha+delta);


                QPen pen2(QColor(QString("#ff9c00")), 6, Qt::SolidLine);
                painter.setPen(pen2);
                for (size_t i = 0; i < be_route.min_distance_route.wayline.size() - 1; ++i)
                    painter.drawLine(be_route.min_distance_route.wayline[ i ].x*alpha, be_route.min_distance_route.wayline[ i ].y*alpha+delta,
                                     be_route.min_distance_route.wayline[i+1].x*alpha, be_route.min_distance_route.wayline[i+1].y*alpha+delta);

                shouldDraw = false;
            }
        }
};

#endif // SHOWLINEWIDGET_H
