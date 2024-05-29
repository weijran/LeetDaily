#include "buildingbtn.h"

BuildingBtn::BuildingBtn(int i, QString n, FacilityType type, int x, int y, QWidget *parent = 0) : id(i), name(n), QPushButton(parent)
{

    QString url = ":/pic/pos_"+QString::number((int)type)+"_";

    if (type == FacilityType::NORMALBUILDING || type == FacilityType::GATE)
    {
        this->setStyleSheet("QPushButton { "
                            "    border: none;  "
                            "    padding: 0px 0px 0px 10px; "
                            "    background: transparent; "
                            "    background-image: url("+url+"normal.png);"
                            "    background-repeat:no-repeat;"
                            "}  "
                            "QPushButton:hover {  "
                            "    background-image: url("+url+"hover.png);"
                            "    background-repeat:no-repeat;"
                            "}"
                            "QPushButton:checked {  "
                            "    background-image: url("+url+"checked.png);"
                            "    background-repeat:no-repeat;"
                            "}");
        this->setCheckable(true);
        this->isChecked = false;
    }
    else
    {
        this->setStyleSheet("QPushButton { "
                            "    border: none;  "
                            "    padding: 0px 0px 0px 10px; "
                            "    background: transparent; "
                            "    background-image: url("+url+"normal.png);"
                            "    background-repeat:no-repeat;"
                            "}  ");

        this->setCheckable(false);
    }
    this->move(x * alpha, y * alpha + delta);
    this->resize(50,50);
}
