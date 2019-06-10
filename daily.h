#ifndef DAILY_H
#define DAILY_H

#include <QWidget>

namespace Ui {
    class daily;
}

class daily : public QWidget
{
        Q_OBJECT

    public:
        explicit daily(QWidget *parent = 0);
        ~daily();

    private slots:
        void on_Day1_toggled(bool checked);
        void on_Day2_toggled(bool checked);
        void on_Day3_toggled(bool checked);
        void on_Day4_toggled(bool checked);
        void on_Day5_toggled(bool checked);
        void on_Day6_toggled(bool checked);
        void on_Day7_toggled(bool checked);
        void on_Day8_toggled(bool checked);
        void on_Reset_Day_clicked();

    private:
        Ui::daily *ui;
};

#endif // DAILY_H
