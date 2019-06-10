#include "daily.h"
#include "weekly.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    daily day;
    day.move(500, 275);
    day.setWindowIcon(QIcon(":icon.ico"));
    day.show();


    weekly week;
    week.move(780, 235);
    week.setWindowIcon(QIcon(":icon.ico"));
    week.show();

    return a.exec();
}
