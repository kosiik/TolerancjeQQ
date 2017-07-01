#include "walek.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "otwor.h"
walek::walek()
{

}

void MainWindow::sprawdzanie_walka_a()
{
    // SPRAWDZANIE LITERY a
    if (ui->comboBox_3->currentText()=="a11" && ui->doubleSpinBox_12->value()<=2)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,330\n-0,270");
    }
    else if (ui->comboBox_3->currentText()=="a11" && ui->doubleSpinBox_12->value()<=6)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,345\n-0,270");
    }
    else if (ui->comboBox_3->currentText()=="a11" && ui->doubleSpinBox_12->value()<=10)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,370\n-0,280");
    }
    else if (ui->comboBox_3->currentText()=="a11" && ui->doubleSpinBox_12->value()<=18)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,345\n-0,270");
    }
    else if (ui->comboBox_3->currentText()=="a11" && ui->doubleSpinBox_12->value()<=30)
    {
        ui->label->setText(ui->doubleSpinBox_12->text());
        ui->label_2->setText("-0,430\n-0,300");
    }
    else if (ui->comboBox_3->currentText()=="a11" && ui->doubleSpinBox_12->value()<=40)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,470\n-0,310");
    }
    else if (ui->comboBox_3->currentText()=="a11" && ui->doubleSpinBox_12->value()<=50)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,480\n-0,320");
    }
    else if (ui->comboBox_3->currentText()=="a11" && ui->doubleSpinBox_12->value()<=65)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,530\n-0,540");
    }
    else if (ui->comboBox_3->currentText()=="a11" && ui->doubleSpinBox_12->value()<=80)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,550\n-0,360");
    }
    else if (ui->comboBox_3->currentText()=="a11" && ui->doubleSpinBox_12->value()<=100)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,600\n-0,380");
    }
    else if (ui->comboBox_3->currentText()=="a11" && ui->doubleSpinBox_12->value()<=120)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,630\n-0,410");
    }
    else if (ui->comboBox_3->currentText()=="a11" && ui->doubleSpinBox_12->value()<=140)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,710\n-0,460");
    }
    else if (ui->comboBox_3->currentText()=="a11" && ui->doubleSpinBox_12->value()<=160)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,770\n-0,520");
    }
    else if (ui->comboBox_3->currentText()=="a11" && ui->doubleSpinBox_12->value()<=180)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,830\n-0,580");
    }
    //KONIEC SPRAWDZANIA LITERY a
}

void MainWindow::sprawdzanie_walka_d()
{
    if (ui->comboBox_3->currentText()=="d8" && ui->doubleSpinBox_12->value()<=2)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,034\n-0,020");
    }
    else if (ui->comboBox_3->currentText()=="d8" && ui->doubleSpinBox_12->value()<=6)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,048\n-0,030");
    }
    else if (ui->comboBox_3->currentText()=="d8" && ui->doubleSpinBox_12->value()<=10)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,062\n-0,040");
    }
    else if (ui->comboBox_3->currentText()=="d8" && ui->doubleSpinBox_12->value()<=18)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,077\n-0,050");
    }
    else if (ui->comboBox_3->currentText()=="d8" && ui->doubleSpinBox_12->value()<=30)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,098\n-0,065");
    }
    else if (ui->comboBox_3->currentText()=="d8" && ui->doubleSpinBox_12->value()<=50)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,119\n-0,080");
    }
    else if (ui->comboBox_3->currentText()=="d8" && ui->doubleSpinBox_12->value()<=80)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,146\n-0,100");
    }
    else if (ui->comboBox_3->currentText()=="d8" && ui->doubleSpinBox_12->value()<=120)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,174\n-0,120");
    }
    else if (ui->comboBox_3->currentText()=="d8" && ui->doubleSpinBox_12->value()<=180)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,280\n-0,145");
    }

    //D9

    if (ui->comboBox_3->currentText()=="d9" && ui->doubleSpinBox_12->value()<=2)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,045\n-0,020");
    }
    else if (ui->comboBox_3->currentText()=="d9" && ui->doubleSpinBox_12->value()<=6)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,060\n-0,030");
    }
    else if (ui->comboBox_3->currentText()=="d9" && ui->doubleSpinBox_12->value()<=10)
    {
      ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,076\n-0,040");
    }
    else if (ui->comboBox_3->currentText()=="d9" && ui->doubleSpinBox_12->value()<=18)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,093\n-0,050");
    }
    else if (ui->comboBox_3->currentText()=="d9" && ui->doubleSpinBox_12->value()<=30)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,117\n-0,065");
    }
    else if (ui->comboBox_3->currentText()=="d9" && ui->doubleSpinBox_12->value()<=50)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,142\n-0,080");
    }
    else if (ui->comboBox_3->currentText()=="d9" && ui->doubleSpinBox_12->value()<=80)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,174\n-0,100");
    }
    else if (ui->comboBox_3->currentText()=="d9" && ui->doubleSpinBox_12->value()<=120)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,207\n-0,120");
    }
    else if (ui->comboBox_3->currentText()=="d9" && ui->doubleSpinBox_12->value()<=180)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,245\n-0,145");
    }

    //d10
    if (ui->comboBox_3->currentText()=="d10" && ui->doubleSpinBox_12->value()<=2)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,060\n-0,020");
    }
    else if (ui->comboBox_3->currentText()=="d10" && ui->doubleSpinBox_12->value()<=6)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,078\n-0,030");
    }
    else if (ui->comboBox_3->currentText()=="d10" && ui->doubleSpinBox_12->value()<=10)
    {
      ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,098\n-0,040");
    }
    else if (ui->comboBox_3->currentText()=="d10" && ui->doubleSpinBox_12->value()<=18)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,120\n-0,050");
    }
    else if (ui->comboBox_3->currentText()=="d10" && ui->doubleSpinBox_12->value()<=30)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,149\n-0,065");
    }
    else if (ui->comboBox_3->currentText()=="d10" && ui->doubleSpinBox_12->value()<=50)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,180\n-0,080");
    }
    else if (ui->comboBox_3->currentText()=="d10" && ui->doubleSpinBox_12->value()<=80)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,220\n-0,100");
    }
    else if (ui->comboBox_3->currentText()=="d10" && ui->doubleSpinBox_12->value()<=120)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,260\n-0,120");
    }
    else if (ui->comboBox_3->currentText()=="d10" && ui->doubleSpinBox_12->value()<=180)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,305\n-0,145");
    }
}

//sprawdzanie e

void MainWindow::sprawdzanie_walka_e()
{
    if (ui->comboBox_3->currentText()=="e7" && ui->doubleSpinBox_12->value()<=2)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,024\n-0,014");
    }
    else if (ui->comboBox_3->currentText()=="e7" && ui->doubleSpinBox_12->value()<=6)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,032\n-0,030");
    }
    else if (ui->comboBox_3->currentText()=="e7" && ui->doubleSpinBox_12->value()<=10)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,040\n-0,025");
    }
    else if (ui->comboBox_3->currentText()=="e7" && ui->doubleSpinBox_12->value()<=18)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,050\n-0,032");
    }
    else if (ui->comboBox_3->currentText()=="e7" && ui->doubleSpinBox_12->value()<=30)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,061\n-0,040");
    }
    else if (ui->comboBox_3->currentText()=="e7" && ui->doubleSpinBox_12->value()<=50)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,075\n-0,050");
    }
    else if (ui->comboBox_3->currentText()=="e7" && ui->doubleSpinBox_12->value()<=80)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,090\n-0,080");
    }
    else if (ui->comboBox_3->currentText()=="e7" && ui->doubleSpinBox_12->value()<=120)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,107\n-0,072");
    }
    else if (ui->comboBox_3->currentText()=="e7" && ui->doubleSpinBox_12->value()<=180)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,125\n-0,085");
    }

    //e8

    if (ui->comboBox_3->currentText()=="e8" && ui->doubleSpinBox_12->value()<=2)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,028\n-0,014");
    }
    else if (ui->comboBox_3->currentText()=="e8" && ui->doubleSpinBox_12->value()<=6)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,038\n-0,030");
    }
    else if (ui->comboBox_3->currentText()=="e8" && ui->doubleSpinBox_12->value()<=10)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,047\n-0,040");
    }
    else if (ui->comboBox_3->currentText()=="e8" && ui->doubleSpinBox_12->value()<=18)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,059\n-0,050");
    }
    else if (ui->comboBox_3->currentText()=="e8" && ui->doubleSpinBox_12->value()<=30)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,073\n-0,065");
    }
    else if (ui->comboBox_3->currentText()=="e8" && ui->doubleSpinBox_12->value()<=50)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,089\n-0,080");
    }
    else if (ui->comboBox_3->currentText()=="e8" && ui->doubleSpinBox_12->value()<=80)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,106\n-0,100");
    }
    else if (ui->comboBox_3->currentText()=="e8" && ui->doubleSpinBox_12->value()<=120)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,126\n-0,120");
    }
    else if (ui->comboBox_3->currentText()=="e8" && ui->doubleSpinBox_12->value()<=180)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,125\n-0,085");
    }
}

//sprawdzanie f

void MainWindow::sprawdzanie_walka_f()
{
    if (ui->comboBox_3->currentText()=="f7" && ui->doubleSpinBox_12->value()<=2)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,016\n-0,006");
    }
    else if (ui->comboBox_3->currentText()=="f7" && ui->doubleSpinBox_12->value()<=6)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,022\n-0,010");
    }
    else if (ui->comboBox_3->currentText()=="f7" && ui->doubleSpinBox_12->value()<=10)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,028\n-0,013");
    }
    else if (ui->comboBox_3->currentText()=="f7" && ui->doubleSpinBox_12->value()<=18)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,034\n-0,016");
    }
    else if (ui->comboBox_3->currentText()=="f7" && ui->doubleSpinBox_12->value()<=30)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,041\n-0,020");
    }
    else if (ui->comboBox_3->currentText()=="f7" && ui->doubleSpinBox_12->value()<=50)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,050\n-0,025");
    }
    else if (ui->comboBox_3->currentText()=="f7" && ui->doubleSpinBox_12->value()<=80)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,060\n-0,030");
    }
    else if (ui->comboBox_3->currentText()=="f7" && ui->doubleSpinBox_12->value()<=120)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,071\n-0,036");
    }
    else if (ui->comboBox_3->currentText()=="f7" && ui->doubleSpinBox_12->value()<=180)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,083\n-0,043");
    }
}


//sprawdzanie g

void MainWindow::sprawdzanie_walka_g()
{
    if (ui->comboBox_3->currentText()=="g5" && ui->doubleSpinBox_12->value()<=2)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,006\n-0,002");
    }
    else if (ui->comboBox_3->currentText()=="g5" && ui->doubleSpinBox_12->value()<=6)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,009\n-0,004");
    }
    else if (ui->comboBox_3->currentText()=="g5" && ui->doubleSpinBox_12->value()<=10)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,011\n-0,005");
    }
    else if (ui->comboBox_3->currentText()=="g5" && ui->doubleSpinBox_12->value()<=18)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,014\n-0,006");
    }
    else if (ui->comboBox_3->currentText()=="g5" && ui->doubleSpinBox_12->value()<=30)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,016\n-0,007");
    }
    else if (ui->comboBox_3->currentText()=="g5" && ui->doubleSpinBox_12->value()<=50)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,020\n-0,009");
    }
    else if (ui->comboBox_3->currentText()=="g5" && ui->doubleSpinBox_12->value()<=80)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,023\n-0,010");
    }
    else if (ui->comboBox_3->currentText()=="g5" && ui->doubleSpinBox_12->value()<=120)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,027\n-0,012");
    }
    else if (ui->comboBox_3->currentText()=="g5" && ui->doubleSpinBox_12->value()<=180)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,032\n-0,014");
    }

    //g6

    if (ui->comboBox_3->currentText()=="g6" && ui->doubleSpinBox_12->value()<=2)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("+0,008\n+0,002");
    }
    else if (ui->comboBox_3->currentText()=="g6" && ui->doubleSpinBox_12->value()<=6)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("+0,012\n+0,004");
    }
    else if (ui->comboBox_3->currentText()=="g6" && ui->doubleSpinBox_12->value()<=10)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("+0,014\n+0,005");
    }
    else if (ui->comboBox_3->currentText()=="g6" && ui->doubleSpinBox_12->value()<=18)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("+0,017\n+0,006");
    }
    else if (ui->comboBox_3->currentText()=="g6" && ui->doubleSpinBox_12->value()<=30)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,020\n-0,007");
    }
    else if (ui->comboBox_3->currentText()=="g6" && ui->doubleSpinBox_12->value()<=50)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,025\n-0,009");
    }
    else if (ui->comboBox_3->currentText()=="g6" && ui->doubleSpinBox_12->value()<=80)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,029\n-0,010");
    }
    else if (ui->comboBox_3->currentText()=="g6" && ui->doubleSpinBox_12->value()<=120)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,034\n-0,012");
    }
    else if (ui->comboBox_3->currentText()=="g6" && ui->doubleSpinBox_12->value()<=180)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,039\n-0,014");
    }
}

//sprawdzanie h

void MainWindow::sprawdzanie_walka_h()
{
    if (ui->comboBox_3->currentText()=="h5" && ui->doubleSpinBox_12->value()<=2)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,004\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h5" && ui->doubleSpinBox_12->value()<=6)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,005\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h5" && ui->doubleSpinBox_12->value()<=10)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,006\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h5" && ui->doubleSpinBox_12->value()<=18)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,008\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h5" && ui->doubleSpinBox_12->value()<=30)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,008\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h5" && ui->doubleSpinBox_12->value()<=50)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,011\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h5" && ui->doubleSpinBox_12->value()<=80)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,013\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h5" && ui->doubleSpinBox_12->value()<=120)
    {
        ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,015\n-0,012");
    }
    else if (ui->comboBox_3->currentText()=="h5" && ui->doubleSpinBox_12->value()<=180)
    {
       ui->label_4->setText(ui->doubleSpinBox_12->text());
        ui->label_3->setText("-0,018\n-0,014");
    }
}
