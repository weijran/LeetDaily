#ifndef BUILDINGBTN_H
#define BUILDINGBTN_H

#include <QPushButton>
#include <QDebug>

#include "api_for_djh.h"

class BuildingBtn : public QPushButton
{
    Q_OBJECT

    public:
        BuildingBtn(int i, QString n, FacilityType type, int x, int y, QWidget *parent);

        int id;
        bool isChecked;
        QString name;

    private:
        // 地图偏移
        const double alpha = 1.126126;
        const int delta = 64;

};

#endif // BUILDINGBTN_H
