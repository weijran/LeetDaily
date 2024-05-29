#ifndef PAGEC_H
#define PAGEC_H

#include <QLabel>
#include <QDebug>
#include <QPainter>
#include <QPixmap>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QMouseEvent>
#include <QListWidget>
#include <QListWidgetItem>
#include <QScrollBar>

#include "api_for_ybc.h"
#include "api_for_djh.h"
#include "writenotewidget.h"
#include "showlinewidget.h"
#include "buildingbtn.h"
#include "lineeditwithdelete.h"

namespace Ui {
    class PageC;
}

class PageC : public QWidget
{
    Q_OBJECT

    public:
        explicit PageC(QString name, int id, QWidget *parent = 0);
        ~PageC();

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

        // 地图偏移
        const double alpha = 1.126126;
        const int delta = 64;

        // 背景
        QLabel * ql_bgpic;
        // .ui文件中的控件
        Ui::PageC *ui;
        QLineEdit * lineEdit_searchInfo, *lineEdit_searchInfo2;

        std::vector<BuildingBtn *> fe_buildings;
        std::vector<BuildingInfomation> be_buildings;

        std::vector<FacilityInfomation> be_facilities;
        std::vector<QListWidgetItem *> fe_facilities;

        //在地图上显示设施的图标（目前没设计点选功能）
        std::vector<BuildingBtn *> fe_facilities_btn;

        // 拖拽窗口功能
        static const int DRAG_AREA_HEIGHT = 50; // 假设拖拽区域的高度为30像素
        bool isDragging;
        QPoint lastPoint;

        // 查找附近设施相关

        // 搜索框相关
        std::vector<LineEditWithDelete *> lineedit_pointers; //指针们
        std::vector<int> must_pass_building; //每个输入框里面的内容（对应建筑的标号）
        QPushButton * btn_add_or_finish;
        bool btn_is_add = true;


        WriteNoteWidget * noteWidget;

        // 用于点选建筑、设置起点
        BuildingBtn * CheckedBtn = nullptr;
        BuildingBtn * StartBtn = nullptr;

        // 路径显示相关
        QLineEdit * od, *ot, *gd, *gt;


    public:
        QString name; //当前游学目的地名称
        int id; //当前游学目的地编号


    public:
        QWidget * father;
        ShowLineWidget *lineWidget;

    private:
        void quire_and_show(BuildingBtn * btn, int selectType);
        void add_line_edit();
        void solve_add();
        void solve_finish(QString input);
        bool check_buliding_name_is_exist(QString name);

    public slots:
        void on_return_click();
        void on_write_note_click();
        void on_go_clicked();
        void on_building_clicked();
        void on_combox_select(int id);
        void on_add_to_ways_clicked();
        void on_set_startpoint_clicked();
        void on_add_or_finish_clicked();
        void on_go_there_clicked();
        void delete_a_capsule_lineedit(LineEditWithDelete * le);

};

#endif // PAGEC_H
