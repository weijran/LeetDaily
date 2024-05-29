#ifndef FRONTEND_DS_H
#define FRONTEND_DS_H

#include "diarylistwidget.h"
#include "destinationlistwidget.h"

constexpr int DIARY_COLUMN_GAP = 15;
constexpr int DIARY_ROW_GAP = 15;
constexpr int DEST_ROW_GAP = 10;

struct diaryListPos{
    int position_y;
    bool isFlod; //1代表未展开，0代表展开
    DiaryListWidget * dlw;
};

struct destListPos{
    int position_y;
    bool isFlod; //1代表未展开，0代表展开
    DestinationListWidget * dlw;
};



#endif // FRONTEND_DS_H
