#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "otwor.h"
#include "walek.h"


//VER 0.1.1


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
sprawdzanie_otworu_A();
sprawdzanie_otworu_B();
sprawdzanie_otworu_C();
sprawdzanie_otworu_D();
sprawdzanie_otworu_E();
sprawdzanie_otworu_F();
sprawdzanie_otworu_G();
sprawdzanie_otworu_H();
sprawdzanie_walka_h();
}


//zakladka 3
void MainWindow::on_pushButton_2_clicked()
{
    przelicz_calemm(); // czyta z pliku przeliczenia voida
}

void MainWindow::on_pushButton_4_clicked()
{
    sprawdzanie_walka_a();
   sprawdzanie_walka_d();
   sprawdzanie_walka_e();
   sprawdzanie_walka_f();
   sprawdzanie_walka_g();
   sprawdzanie_walka_h();
}

void MainWindow::on_comboBox_5_activated(const QString &arg1)
{

    if (ui->comboBox_5->currentText()=="Aluminium")
    {
    double aa=2720;
    ui->doubleSpinBox_7->setValue(aa);
    }
    else if (ui->comboBox_5->currentText()=="Stal")
    {
    double as=7856;
    ui->doubleSpinBox_7->setValue(as);
    }
    else if (ui->comboBox_5->currentText()=="Brąz")
    {
       double ab=8850;
       ui->doubleSpinBox_7->setValue(ab);
    }
}



void MainWindow::on_comboBox_4_activated(const QString &arg1)
{
    if (ui->comboBox_4->currentText()=="Rura []")
    {
        ui->doubleSpinBox_3->setEnabled(true);
        ui->doubleSpinBox_4->setEnabled(true);
        ui->label_8->setText("długość");
    }
    else if (ui->comboBox_4->currentText()=="Rura O")
    {
        ui->doubleSpinBox_3->setEnabled(false);
        ui->doubleSpinBox_4->setEnabled(true);
        ui->label_8->setText("długość");
    }
    else if (ui->comboBox_4->currentText()=="Blacha")
    {
        ui->doubleSpinBox_3->setEnabled(true);
        ui->doubleSpinBox_4->setEnabled(false);
        ui->label_8->setText("grubość");
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    double a=ui->doubleSpinBox_2->value();
    double b=ui->doubleSpinBox_3->value();
    double c=ui->doubleSpinBox_4->value();
    double d=ui->doubleSpinBox_5->value();
    double e=ui->doubleSpinBox_7->value();
    double f=ui->doubleSpinBox_9->value();

    if (ui->comboBox_4->currentText()=="Rura []")
    {
    double wynik=(((a*b)/1000000)-((a-(2*c))*(b-(2*c)))/1000000)*((d/1000)*e);
    ui->doubleSpinBox_6->setValue(wynik);
    }
    else if (ui->comboBox_4->currentText()=="Rura O")
    {
        double wynik2=(((a*a*f)/1000000/4)-((a-(2*c))*(a-(2*c))*f/1000000/4))*((d/1000)*e);
        ui->doubleSpinBox_6->setValue(wynik2);
    }
    else if (ui->comboBox_4->currentText()=="Blacha")
    {
        double wynik3=(((a*b)/1000000)*(d/1000)*e);
        ui->doubleSpinBox_6->setValue(wynik3);
    }
}
