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
   sprawdzanie_walka_h();
}
