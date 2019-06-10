#include "DailyWindow.h"
#include "ui_DailyWindow.h"

DailyWindow::DailyWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DailyWindow)
{
    ui->setupUi(this);
}

DailyWindow::~DailyWindow()
{
    delete ui;
}

void DailyWindow::on_Day1_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void DailyWindow::on_Day2_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void DailyWindow::on_Day3_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void DailyWindow::on_Day4_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void DailyWindow::on_Day5_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void DailyWindow::on_Day6_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void DailyWindow::on_Day7_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void DailyWindow::on_Day8_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void DailyWindow::on_Reset_Day_clicked()
{
    ui->Day1->setChecked(false);
    ui->Day2->setChecked(false);
    ui->Day3->setChecked(false);
    ui->Day4->setChecked(false);
    ui->Day5->setChecked(false);
    ui->Day6->setChecked(false);
    ui->Day7->setChecked(false);
    ui->Day8->setChecked(false);
}
