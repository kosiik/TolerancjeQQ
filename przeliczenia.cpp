#include "przeliczenia.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
przeliczenia::przeliczenia()
{

}
void MainWindow::przelicz_calemm()
{
    //PRZELICZAMY CALE
    if (ui->comboBox_2->currentText()=="Cale na mm")
    {
        double a=ui->doubleSpinBox_10->value();
        double b=ui->doubleSpinBox_8->value(); //25,4
        ui->doubleSpinBox_11->setValue(a*b);
    }
    else
    {
        double c=ui->doubleSpinBox_10->value();
        double d=ui->doubleSpinBox_8->value(); //25,4
        ui->doubleSpinBox_11->setValue(c/d);
    }
    //KONIEC PRZELICZEN
}
