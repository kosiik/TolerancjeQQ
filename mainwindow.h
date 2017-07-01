#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "otwor.h"
#include "walek.h"
namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

     void sprawdzanie_otworu_A();
     void sprawdzanie_otworu_B();
     void sprawdzanie_otworu_C();
     void sprawdzanie_otworu_D();
     void sprawdzanie_otworu_E();
     void sprawdzanie_otworu_F();
     void sprawdzanie_otworu_G();
     void sprawdzanie_otworu_H();

     void sprawdzanie_walka_h();

    void przelicz_calemm(); //zakladka 3

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_comboBox_5_activated(const QString &arg1);

    void on_comboBox_4_activated(const QString &arg1);

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
