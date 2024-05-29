#include "pagea.h"
#include <QApplication>
#include "pagec.h"
#include <Windows.h>//这个一定要添加，不然会报"No Target Architecture" 错误
#include <WinUser.h>
#include <wingdi.h>
int main(int argc, char *argv[])
{
    DEVMODE NewDevMode;
    //获取屏幕设置中的分辨率
    EnumDisplaySettings(0, ENUM_CURRENT_SETTINGS, &NewDevMode);
    qreal  cx = NewDevMode.dmPelsWidth;			//当前屏幕宽度

    qreal scale = cx / 1920 *1.5;
    qputenv("QT_SCALE_FACTOR", QString::number(scale).toLatin1());

    QApplication a(argc, argv);
    PageA w;
    //Page3 w;
    w.show();

    return a.exec();
}
