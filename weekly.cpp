#include "weekly.h"
#include "ui_weekly.h"

weekly::weekly(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::weekly)
{
    ui->setupUi(this);
}

weekly::~weekly()
{
    delete ui;
}

void weekly::on_Week1_toggled(bool checked)
{
    if (checked)
        ui->Week->setValue(ui->Week->value() + 1);
    else
        ui->Week->setValue(ui->Week->value() - 1);

}

void weekly::on_Week2_toggled(bool checked)
{
    if (checked)
        ui->Week->setValue(ui->Week->value() + 1);
    else
        ui->Week->setValue(ui->Week->value() - 1);

}

void weekly::on_Week3_toggled(bool checked)
{
    if (checked)
        ui->Week->setValue(ui->Week->value() + 1);
    else
        ui->Week->setValue(ui->Week->value() - 1);

}

void weekly::on_Week4_toggled(bool checked)
{
    if (checked)
        ui->Week->setValue(ui->Week->value() + 1);
    else
        ui->Week->setValue(ui->Week->value() - 1);

}

void weekly::on_Week5_toggled(bool checked)
{
    if (checked)
        ui->Week->setValue(ui->Week->value() + 1);
    else
        ui->Week->setValue(ui->Week->value() - 1);

}

void weekly::on_Week6_toggled(bool checked)
{
    if (checked)
        ui->Week->setValue(ui->Week->value() + 1);
    else
        ui->Week->setValue(ui->Week->value() - 1);

}

void weekly::on_Week7_toggled(bool checked)
{
    if (checked)
        ui->Week->setValue(ui->Week->value() + 1);
    else
        ui->Week->setValue(ui->Week->value() - 1);

}

void weekly::on_Week8_toggled(bool checked)
{
    if (checked)
        ui->Week->setValue(ui->Week->value() + 1);
    else
        ui->Week->setValue(ui->Week->value() - 1);

}

void weekly::on_Week9_toggled(bool checked)
{
    if (checked)
        ui->Week->setValue(ui->Week->value() + 1);
    else
        ui->Week->setValue(ui->Week->value() - 1);

}

void weekly::on_Week10_toggled(bool checked)
{
    if (checked)
        ui->Week->setValue(ui->Week->value() + 1);
    else
        ui->Week->setValue(ui->Week->value() - 1);

}

void weekly::on_Week11_toggled(bool checked)
{
    if (checked)
        ui->Week->setValue(ui->Week->value() + 1);
    else
        ui->Week->setValue(ui->Week->value() - 1);

}

void weekly::on_Reset_Week_clicked()
{
    ui->Week1->setChecked(false);
    ui->Week2->setChecked(false);
    ui->Week3->setChecked(false);
    ui->Week4->setChecked(false);
    ui->Week5->setChecked(false);
    ui->Week6->setChecked(false);
    ui->Week7->setChecked(false);
    ui->Week8->setChecked(false);
    ui->Week9->setChecked(false);
    ui->Week10->setChecked(false);
    ui->Week11->setChecked(false);
}
