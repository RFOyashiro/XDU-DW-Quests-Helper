#include "daily.h"
#include "ui_daily.h"

daily::daily(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::daily)
{
    ui->setupUi(this);

}

daily::~daily()
{
    delete ui;
}

void daily::on_Day1_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void daily::on_Day2_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void daily::on_Day3_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void daily::on_Day4_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void daily::on_Day5_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void daily::on_Day6_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void daily::on_Day7_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void daily::on_Day8_toggled(bool checked)
{
    if (checked)
        ui->Day->setValue(ui->Day->value() + 1);
    else
        ui->Day->setValue(ui->Day->value() - 1);

}

void daily::on_Reset_Day_clicked()
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
