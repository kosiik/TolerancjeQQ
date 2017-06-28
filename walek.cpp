#include "walek.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "otwor.h"
walek::walek()
{

}

void MainWindow::sprawdzanie_walka_h()
{
    if (ui->comboBox_3->currentText()=="h7" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0\n-0,018");
    }
}
