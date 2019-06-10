#ifndef WEEKLY_H
#define WEEKLY_H

#include <QWidget>

namespace Ui {
    class weekly;
}

class weekly : public QWidget
{
        Q_OBJECT

    public:
        explicit weekly(QWidget *parent = 0);
        ~weekly();

    private slots:
        void on_Week1_toggled(bool checked);
        void on_Week2_toggled(bool checked);
        void on_Week3_toggled(bool checked);
        void on_Week4_toggled(bool checked);
        void on_Week5_toggled(bool checked);
        void on_Week6_toggled(bool checked);
        void on_Week7_toggled(bool checked);
        void on_Week8_toggled(bool checked);
        void on_Week9_toggled(bool checked);
        void on_Week10_toggled(bool checked);
        void on_Week11_toggled(bool checked);
        void on_Reset_Week_clicked();

    private:
        Ui::weekly *ui;
};

#endif // WEEKLY_H
