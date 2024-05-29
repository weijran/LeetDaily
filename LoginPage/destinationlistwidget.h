#ifndef DESTINATIONLISTWIDGET_H
#define DESTINATIONLISTWIDGET_H

#include <QLabel>
#include <QDebug>
#include <QWidget>
#include <QPushButton>
#include <QMouseEvent>
#include <QPlainTextEdit>

#include "api_for_ybc.h"
#include "api_for_djh.h"
#include "someassets.h"

namespace Ui {
    class DestinationListWidget;
}

class DestinationListWidget : public QWidget
{
    Q_OBJECT

    public:
        explicit DestinationListWidget(QWidget *parent = 0);
        void setDetails(Destination * details, int i);
        ~DestinationListWidget();

        QLabel * ql_destName, *ql_hot, *ql_remark;
        QLabel * ql_bgpic;
        QLabel * ql_pic;

        QPlainTextEdit * qple_abstract;

        int i;
        int id;

    signals:
        void clicked(DestinationListWidget * clickedWidget);

    protected:
        virtual void mouseReleaseEvent(QMouseEvent * ev);

};

#endif // DESTINATIONLISTWIDGET_H
