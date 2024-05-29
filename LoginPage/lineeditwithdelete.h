#ifndef LINEEDITWITHDELETE_H
#define LINEEDITWITHDELETE_H

#include <QDebug>
#include <QObject>
#include <QLineEdit>
#include <QMouseEvent>


class LineEditWithDelete : public QLineEdit
{
     Q_OBJECT

    public:
        LineEditWithDelete(QWidget *parent = nullptr);

    signals:
        void clicked_right(LineEditWithDelete *);

    public slots:
        void mouseReleaseEvent(QMouseEvent *event) override {
            if (event->button() == Qt::RightButton) {
                qDebug() << "右键了胶囊LineEdit";
                emit clicked_right(this);
                return;
            }
        }

        void contextMenuEvent(QContextMenuEvent *event) override {
            // 阻止上下文菜单的显示
            event->ignore();
        }

};



#endif // LINEEDITWITHDELETE_H
