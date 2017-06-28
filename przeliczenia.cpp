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
        double a=ui->lineEdit->text().toDouble();
        double b=a*25.4;
        ui->lineEdit_2->setText(QString::number(b));
    }
    else
    {
        double c=ui->lineEdit->text().toDouble();
        double d=c/25.4;
        ui->lineEdit_2->setText(QString::number(d));
    }
    //KONIEC PRZELICZEN
}
