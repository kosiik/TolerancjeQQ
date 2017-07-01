
#include "mainwindow.h"
#include <QMessageBox>
#include "ui_mainwindow.h"
#include "walek.h"
#include "otwor.h"
otwor::otwor()
{

}
void MainWindow::sprawdzanie_otworu_A()
{
    // SPRAWDZANIE LITERY A
    if (ui->comboBox->currentText()=="A11" && ui->doubleSpinBox->value()<=2)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,330\n+0,270");
    }
    else if (ui->comboBox->currentText()=="A11" && ui->doubleSpinBox->value()<=6)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,345\n+0,270");
    }
    else if (ui->comboBox->currentText()=="A11" && ui->doubleSpinBox->value()<=10)
    {
       ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,370\n+0,280");
    }
    else if (ui->comboBox->currentText()=="A11" && ui->doubleSpinBox->value()<=18)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,345\n+0,270");
    }
    else if (ui->comboBox->currentText()=="A11" && ui->doubleSpinBox->value()<=30)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,430\n+0,300");
    }
    else if (ui->comboBox->currentText()=="A11" && ui->doubleSpinBox->value()<=40)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,470\n+0,310");
    }
    else if (ui->comboBox->currentText()=="A11" && ui->doubleSpinBox->value()<=50)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,480\n+0,320");
    }
    else if (ui->comboBox->currentText()=="A11" && ui->doubleSpinBox->value()<=65)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,530\n+0,540");
    }
    else if (ui->comboBox->currentText()=="A11" && ui->doubleSpinBox->value()<=80)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,550\n+0,360");
    }
    else if (ui->comboBox->currentText()=="A11" && ui->doubleSpinBox->value()<=100)
    {
       ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,600\n+0,380");
    }
    else if (ui->comboBox->currentText()=="A11" && ui->doubleSpinBox->value()<=120)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,630\n+0,410");
    }
    else if (ui->comboBox->currentText()=="A11" && ui->doubleSpinBox->value()<=140)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,710\n+0,460");
    }
    else if (ui->comboBox->currentText()=="A11" && ui->doubleSpinBox->value()<=160)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,770\n+0,520");
    }
    else if (ui->comboBox->currentText()=="A11" && ui->doubleSpinBox->value()<=180)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,830\n+0,580");
    }
    //KONIEC SPRAWDZANIA LITERY A
}


void MainWindow::sprawdzanie_otworu_B()
{
    // SPRAWDZANIE LITERY B
    if (ui->comboBox->currentText()=="B11" && ui->doubleSpinBox->value()<=2)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,200\n+0,140");
    }
    else if (ui->comboBox->currentText()=="B11" && ui->doubleSpinBox->value()<=6)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,215\n+0,140");
    }
    else if (ui->comboBox->currentText()=="B11" && ui->doubleSpinBox->value()<=10)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,240\n+0,150");
    }
    else if (ui->comboBox->currentText()=="B11" && ui->doubleSpinBox->value()<=18)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,260\n+0,150");
    }
    else if (ui->comboBox->currentText()=="B11" && ui->doubleSpinBox->value()<=30)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,290\n+0,160");
    }
    else if (ui->comboBox->currentText()=="B11" && ui->doubleSpinBox->value()<=40)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,330\n+0,170");
    }
    else if (ui->comboBox->currentText()=="B11" && ui->doubleSpinBox->value()<=50)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,340\n+0,180");
    }
    else if (ui->comboBox->currentText()=="B11" && ui->doubleSpinBox->value()<=65)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,380\n+0,190");
    }
    else if (ui->comboBox->currentText()=="B11" && ui->doubleSpinBox->value()<=80)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,390\n+0,200");
    }
    else if (ui->comboBox->currentText()=="B11" && ui->doubleSpinBox->value()<=100)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,440\n+0,220");
    }
    else if (ui->comboBox->currentText()=="B11" && ui->doubleSpinBox->value()<=120)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,460\n+0,240");
    }
    else if (ui->comboBox->currentText()=="B11" && ui->doubleSpinBox->value()<=140)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,510\n+0,260");
    }
    else if (ui->comboBox->currentText()=="B11" && ui->doubleSpinBox->value()<=160)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,530\n+0,280");
    }
    else if (ui->comboBox->currentText()=="B11" && ui->doubleSpinBox->value()<=180)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,560\n+0,310");
    }
    //KONIEC SPRAWDZANIA LITERY B
}

void MainWindow::sprawdzanie_otworu_C()
{
    // SPRAWDZANIE LITERY C
    if (ui->comboBox->currentText()=="C8" && ui->doubleSpinBox->value()<=2)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,074\n+0,060");
    }
    else if (ui->comboBox->currentText()=="C8" && ui->doubleSpinBox->value()<=6)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,088\n+0,070");
    }
    else if (ui->comboBox->currentText()=="C8" && ui->doubleSpinBox->value()<=10)
    {
       ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,102\n+0,089");
    }
    else if (ui->comboBox->currentText()=="C8" && ui->doubleSpinBox->value()<=18)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,122\n+0,095");
    }
    else if (ui->comboBox->currentText()=="C8" && ui->doubleSpinBox->value()<=30)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,143\n+0,110");
    }
    else if (ui->comboBox->currentText()=="C8" && ui->doubleSpinBox->value()<=40)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,159\n+0,120");
    }
    else if (ui->comboBox->currentText()=="C8" && ui->doubleSpinBox->value()<=50)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,169\n+0,130");
    }
    else if (ui->comboBox->currentText()=="C8" && ui->doubleSpinBox->value()<=65)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,186\n+0,140");
    }
    else if (ui->comboBox->currentText()=="C8" && ui->doubleSpinBox->value()<=80)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,196\n+0,150");
    }
    else if (ui->comboBox->currentText()=="C8" && ui->doubleSpinBox->value()<=100)
    {
       ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,224\n+0,170");
    }
    else if (ui->comboBox->currentText()=="C8" && ui->doubleSpinBox->value()<=120)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,234\n+0,180");
    }
    else if (ui->comboBox->currentText()=="C8" && ui->doubleSpinBox->value()<=140)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,263\n+0,200");
    }
    else if (ui->comboBox->currentText()=="C8" && ui->doubleSpinBox->value()<=160)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,273\n+0,210");
    }
    else if (ui->comboBox->currentText()=="C8" && ui->doubleSpinBox->value()<=180)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,293\n+0,230");
    }
    //KONIEC SPRAWDZANIA LITERY C
}


void MainWindow::sprawdzanie_otworu_D()
{
    // SPRAWDZANIE LITERY D
    if (ui->comboBox->currentText()=="D8" && ui->doubleSpinBox->value()<=2)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,034\n+0,020");
    }
    else if (ui->comboBox->currentText()=="D8" && ui->doubleSpinBox->value()<=6)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,048\n+0,030");
    }
    else if (ui->comboBox->currentText()=="D8" && ui->doubleSpinBox->value()<=10)
    {
       ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,062\n+0,040");
    }
    else if (ui->comboBox->currentText()=="D8" && ui->doubleSpinBox->value()<=18)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,077\n+0,050");
    }
    else if (ui->comboBox->currentText()=="D8" && ui->doubleSpinBox->value()<=30)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,098\n+0,065");
    }
    else if (ui->comboBox->currentText()=="D8" && ui->doubleSpinBox->value()<=50)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,119\n+0,080");
    }
    else if (ui->comboBox->currentText()=="D8" && ui->doubleSpinBox->value()<=80)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,146\n+0,100");
    }
    else if (ui->comboBox->currentText()=="D8" && ui->doubleSpinBox->value()<=120)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,174\n+0,120");
    }
    else if (ui->comboBox->currentText()=="D8" && ui->doubleSpinBox->value()<=180)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,280\n+0,145");
    }

    //D9

    if (ui->comboBox->currentText()=="D9" && ui->doubleSpinBox->value()<=2)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,045\n+0,020");
    }
    else if (ui->comboBox->currentText()=="D9" && ui->doubleSpinBox->value()<=6)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,060\n+0,030");
    }
    else if (ui->comboBox->currentText()=="D9" && ui->doubleSpinBox->value()<=10)
    {
       ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,076\n+0,040");
    }
    else if (ui->comboBox->currentText()=="D9" && ui->doubleSpinBox->value()<=18)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,093\n+0,050");
    }
    else if (ui->comboBox->currentText()=="D9" && ui->doubleSpinBox->value()<=30)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,117\n+0,065");
    }
    else if (ui->comboBox->currentText()=="D9" && ui->doubleSpinBox->value()<=50)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,142\n+0,080");
    }
    else if (ui->comboBox->currentText()=="D9" && ui->doubleSpinBox->value()<=80)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,174\n+0,100");
    }
    else if (ui->comboBox->currentText()=="D9" && ui->doubleSpinBox->value()<=120)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,207\n+0,120");
    }
    else if (ui->comboBox->currentText()=="D9" && ui->doubleSpinBox->value()<=180)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,245\n+0,145");
    }


    //D10

    if (ui->comboBox->currentText()=="D10" && ui->doubleSpinBox->value()<=2)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,060\n+0,020");
    }
    else if (ui->comboBox->currentText()=="D10" && ui->doubleSpinBox->value()<=6)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,078\n+0,030");
    }
    else if (ui->comboBox->currentText()=="D10" && ui->doubleSpinBox->value()<=10)
    {
       ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,098\n+0,040");
    }
    else if (ui->comboBox->currentText()=="D10" && ui->doubleSpinBox->value()<=18)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,120\n+0,050");
    }
    else if (ui->comboBox->currentText()=="D10" && ui->doubleSpinBox->value()<=30)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,149\n+0,065");
    }
    else if (ui->comboBox->currentText()=="D10" && ui->doubleSpinBox->value()<=50)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,180\n+0,080");
    }
    else if (ui->comboBox->currentText()=="D10" && ui->doubleSpinBox->value()<=80)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,220\n+0,100");
    }
    else if (ui->comboBox->currentText()=="D10" && ui->doubleSpinBox->value()<=120)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,260\n+0,120");
    }
    else if (ui->comboBox->currentText()=="D10" && ui->doubleSpinBox->value()<=180)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,305\n+0,145");
    }


    //D11

    if (ui->comboBox->currentText()=="D11" && ui->doubleSpinBox->value()<=2)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,080\n+0,020");
    }
    else if (ui->comboBox->currentText()=="D11" && ui->doubleSpinBox->value()<=6)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,105\n+0,030");
    }
    else if (ui->comboBox->currentText()=="D11" && ui->doubleSpinBox->value()<=10)
    {
       ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,130\n+0,040");
    }
    else if (ui->comboBox->currentText()=="D11" && ui->doubleSpinBox->value()<=18)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,160\n+0,050");
    }
    else if (ui->comboBox->currentText()=="D11" && ui->doubleSpinBox->value()<=30)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,195\n+0,065");
    }
    else if (ui->comboBox->currentText()=="D11" && ui->doubleSpinBox->value()<=50)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,240\n+0,080");
    }
    else if (ui->comboBox->currentText()=="D11" && ui->doubleSpinBox->value()<=80)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,290\n+0,100");
    }
    else if (ui->comboBox->currentText()=="D11" && ui->doubleSpinBox->value()<=120)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,340\n+0,120");
    }
    else if (ui->comboBox->currentText()=="D11" && ui->doubleSpinBox->value()<=180)
    {
        ui->label->setText(ui->doubleSpinBox->text());
        ui->label_2->setText("+0,395\n+0,145");
    }
}
//E7

    void MainWindow::sprawdzanie_otworu_E()
    {
        // SPRAWDZANIE LITERY E
        if (ui->comboBox->currentText()=="E7" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,024\n+0,014");
        }
        else if (ui->comboBox->currentText()=="E7" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,032\n+0,030");
        }
        else if (ui->comboBox->currentText()=="E7" && ui->doubleSpinBox->value()<=10)
        {
           ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,040\n+0,040");
        }
        else if (ui->comboBox->currentText()=="E7" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,050\n+0,050");
        }
        else if (ui->comboBox->currentText()=="E7" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,061\n+0,065");
        }
        else if (ui->comboBox->currentText()=="E7" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,075\n+0,080");
        }
        else if (ui->comboBox->currentText()=="E7" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,090\n+0,100");
        }
        else if (ui->comboBox->currentText()=="E7" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,107\n+0,120");
        }
        else if (ui->comboBox->currentText()=="E7" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,125\n+0,145");
        }

        //E8
        if (ui->comboBox->currentText()=="E8" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,028\n+0,014");
        }
        else if (ui->comboBox->currentText()=="E8" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,038\n+0,030");
        }
        else if (ui->comboBox->currentText()=="E8" && ui->doubleSpinBox->value()<=10)
        {
           ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,047\n+0,040");
        }
        else if (ui->comboBox->currentText()=="E8" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,059\n+0,050");
        }
        else if (ui->comboBox->currentText()=="E8" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,073\n+0,065");
        }
        else if (ui->comboBox->currentText()=="E8" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,089\n+0,080");
        }
        else if (ui->comboBox->currentText()=="E8" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,106\n+0,100");
        }
        else if (ui->comboBox->currentText()=="E8" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,126\n+0,120");
        }
        else if (ui->comboBox->currentText()=="E8" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,148\n+0,145");
        }
}
        void MainWindow::sprawdzanie_otworu_F()
        {
            // SPRAWDZANIE LITERY F
            if (ui->comboBox->currentText()=="F7" && ui->doubleSpinBox->value()<=2)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,016\n+0,006");
            }
            else if (ui->comboBox->currentText()=="F7" && ui->doubleSpinBox->value()<=6)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,022\n+0,010");
            }
            else if (ui->comboBox->currentText()=="F7" && ui->doubleSpinBox->value()<=10)
            {
               ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,028\n+0,013");
            }
            else if (ui->comboBox->currentText()=="F7" && ui->doubleSpinBox->value()<=18)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,034\n+0,016");
            }
            else if (ui->comboBox->currentText()=="F7" && ui->doubleSpinBox->value()<=30)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,041\n+0,020");
            }
            else if (ui->comboBox->currentText()=="F7" && ui->doubleSpinBox->value()<=50)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,050\n+0,025");
            }
            else if (ui->comboBox->currentText()=="F7" && ui->doubleSpinBox->value()<=80)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,060\n+0,030");
            }
            else if (ui->comboBox->currentText()=="F7" && ui->doubleSpinBox->value()<=120)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,071\n+0,036");
            }
            else if (ui->comboBox->currentText()=="F7" && ui->doubleSpinBox->value()<=180)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,083\n+0,043");
            }
    }

        void MainWindow::sprawdzanie_otworu_G()
        {
            // SPRAWDZANIE LITERY G
            if (ui->comboBox->currentText()=="G5" && ui->doubleSpinBox->value()<=2)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,006\n+0,002");
            }
            else if (ui->comboBox->currentText()=="G5" && ui->doubleSpinBox->value()<=6)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,009\n+0,004");
            }
            else if (ui->comboBox->currentText()=="G5" && ui->doubleSpinBox->value()<=10)
            {
               ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,011\n+0,005");
            }
            else if (ui->comboBox->currentText()=="G5" && ui->doubleSpinBox->value()<=18)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,014\n+0,006");
            }
            else if (ui->comboBox->currentText()=="G5" && ui->doubleSpinBox->value()<=30)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,016\n+0,007");
            }
            else if (ui->comboBox->currentText()=="G5" && ui->doubleSpinBox->value()<=50)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,020\n+0,009");
            }
            else if (ui->comboBox->currentText()=="G5" && ui->doubleSpinBox->value()<=80)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,023\n+0,010");
            }
            else if (ui->comboBox->currentText()=="G5" && ui->doubleSpinBox->value()<=120)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,027\n+0,012");
            }
            else if (ui->comboBox->currentText()=="G5" && ui->doubleSpinBox->value()<=180)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,032\n+0,014");
            }

            // SPRAWDZANIE LITERY G6
            if (ui->comboBox->currentText()=="G6" && ui->doubleSpinBox->value()<=2)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,008\n+0,002");
            }
            else if (ui->comboBox->currentText()=="G6" && ui->doubleSpinBox->value()<=6)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,012\n+0,004");
            }
            else if (ui->comboBox->currentText()=="G6" && ui->doubleSpinBox->value()<=10)
            {
               ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,014\n+0,005");
            }
            else if (ui->comboBox->currentText()=="G6" && ui->doubleSpinBox->value()<=18)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,017\n+0,006");
            }
            else if (ui->comboBox->currentText()=="G6" && ui->doubleSpinBox->value()<=30)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,020\n+0,007");
            }
            else if (ui->comboBox->currentText()=="G6" && ui->doubleSpinBox->value()<=50)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,025\n+0,009");
            }
            else if (ui->comboBox->currentText()=="G6" && ui->doubleSpinBox->value()<=80)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,029\n+0,010");
            }
            else if (ui->comboBox->currentText()=="G6" && ui->doubleSpinBox->value()<=120)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,034\n+0,012");
            }
            else if (ui->comboBox->currentText()=="G6" && ui->doubleSpinBox->value()<=180)
            {
                ui->label->setText(ui->doubleSpinBox->text());
                ui->label_2->setText("+0,039\n+0,014");
            }
    }
        void MainWindow::sprawdzanie_otworu_H()
        {
        // SPRAWDZANIE LITERY H5
        if (ui->comboBox->currentText()=="H5" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,004\n+0,002");
        }
        else if (ui->comboBox->currentText()=="H5" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,005\n+0");
        }
        else if (ui->comboBox->currentText()=="H5" && ui->doubleSpinBox->value()<=10)
        {
           ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,006\n+0");
        }
        else if (ui->comboBox->currentText()=="H5" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,008\n+0");
        }
        else if (ui->comboBox->currentText()=="H5" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,009\n+0");
        }
        else if (ui->comboBox->currentText()=="H5" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,011\n+0");
        }
        else if (ui->comboBox->currentText()=="H5" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,013\n+0");
        }
        else if (ui->comboBox->currentText()=="H5" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,015\n+0");
        }
        else if (ui->comboBox->currentText()=="H5" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,018\n+0");
        }
        //koniec H5
        // SPRAWDZANIE LITERY H6
        if (ui->comboBox->currentText()=="H6" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,006\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H6" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,008\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H6" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,009\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H6" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,011\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H6" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,013\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H6" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,016\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H6" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,019\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H6" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,022\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H6" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,025\n+0,0");
        }
        //KONIEC H6
        // SPRAWDZANIE LITERY H7
        if (ui->comboBox->currentText()=="H7" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,01\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H7" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,012\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H7" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,015\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H7" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,018\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H7" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,021\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H7" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,025\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H7" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,030\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H7" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,035\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H7" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,040\n+0,0");
        }
        //KONIEC H7
        // SPRAWDZANIE LITERY H8
        if (ui->comboBox->currentText()=="H8" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,014\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H8" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,018\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H8" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,022\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H8" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,027\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H8" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,033\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H8" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,039\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H8" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,046\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H8" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,054\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H8" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,063\n+0,0");
        }
        //KONIEC H8
        // SPRAWDZANIE LITERY H9
        if (ui->comboBox->currentText()=="H9" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,025\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H9" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,03\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H9" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,036\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H9" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,043\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H9" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,052\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H9" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,062\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H9" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,074\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H9" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,087\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H9" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,1\n+0,0");
        }
        //KONIEC H9
        // SPRAWDZANIE LITERY H10
        if (ui->comboBox->currentText()=="H10" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,04\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H10" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,048\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H10" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,058\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H10" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,070\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H10" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,084\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H10" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,1\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H10" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,12\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H10" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,14\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H10" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,16\n+0,0");
        }
        //KONIEC H10
        // SPRAWDZANIE LITERY H11
        if (ui->comboBox->currentText()=="H11" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,06\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H11" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,075\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H11" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,09\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H11" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,11\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H11" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,13\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H11" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,16\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H11" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,19\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H11" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,22\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H11" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,25\n+0,0");
        }
        //KONIEC H11
        // SPRAWDZANIE LITERY H12
        if (ui->comboBox->currentText()=="H12" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,1\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H12" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,12\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H12" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,15\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H12" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,18\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H12" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,21\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H12" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,25\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H12" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,3\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H12" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,35\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H12" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,4\n+0,0");
        }
        //KONIEC H12
        // SPRAWDZANIE LITERY H13
        if (ui->comboBox->currentText()=="H13" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,14\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H13" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,18\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H13" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,22\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H13" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,27\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H13" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,33\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H13" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,39\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H13" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,46\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H13" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,54\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H13" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,63\n+0,0");
        }
        //KONIEC H13
        // SPRAWDZANIE LITERY H15
        if (ui->comboBox->currentText()=="H15" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,4\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H15" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,48\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H15" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,58\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H15" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,7\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H15" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,84\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H15" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+1,0\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H15" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+1,2\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H15" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+1,4\n+0,0");
        }
        else if (ui->comboBox->currentText()=="H15" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+1,6\n+0,0");
        }
        //KONIEC H15
}
void MainWindow::sprawdzanie_otworu_JS()
{
        // SPRAWDZANIE LITERY JS5
        if (ui->comboBox->currentText()=="JS5" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,002\n-0,002");
        }
        else if (ui->comboBox->currentText()=="JS5" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0025\n-0,0025");
        }
        else if (ui->comboBox->currentText()=="JS5" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,003\n-0,003");
        }
        else if (ui->comboBox->currentText()=="JS5" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,004\n-0,004");
        }
        else if (ui->comboBox->currentText()=="JS5" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0045\n-0,0045");
        }
        else if (ui->comboBox->currentText()=="JS5" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0055\n-0,0055");
        }
        else if (ui->comboBox->currentText()=="JS5" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0065\n-0,0065");
        }
        else if (ui->comboBox->currentText()=="JS5" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0075\n-0,0075");
        }
        else if (ui->comboBox->currentText()=="JS5" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,009\n-0,009");
        }
        //KONIEC SPRAWDZANIA JS5
        // SPRAWDZANIE LITERY JS6
        if (ui->comboBox->currentText()=="JS6" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,003\n-0,003");
        }
        else if (ui->comboBox->currentText()=="JS6" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,004\n-0,004");
        }
        else if (ui->comboBox->currentText()=="JS6" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0045\n-0,0045");
        }
        else if (ui->comboBox->currentText()=="JS6" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0055\n-0,0055");
        }
        else if (ui->comboBox->currentText()=="JS6" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0065\n-0,0065");
        }
        else if (ui->comboBox->currentText()=="JS6" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,008\n-0,008");
        }
        else if (ui->comboBox->currentText()=="JS6" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0095\n-0,0095");
        }
        else if (ui->comboBox->currentText()=="JS6" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,011\n-0,011");
        }
        else if (ui->comboBox->currentText()=="JS6" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0125\n-0,0125");
        }
        //KONIEC SPRAWDZANIA JS6
        // SPRAWDZANIE LITERY JS7
        if (ui->comboBox->currentText()=="JS7" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,005\n-0,005");
        }
        else if (ui->comboBox->currentText()=="JS7" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,006\n-0,006");
        }
        else if (ui->comboBox->currentText()=="JS7" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0075\n-0,0075");
        }
        else if (ui->comboBox->currentText()=="JS7" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,009\n-0,009");
        }
        else if (ui->comboBox->currentText()=="JS7" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0105\n-0,0105");
        }
        else if (ui->comboBox->currentText()=="JS7" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0125\n-0,0125");
        }
        else if (ui->comboBox->currentText()=="JS7" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,015\n-0,015");
        }
        else if (ui->comboBox->currentText()=="JS7" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0175\n-0,0175");
        }
        else if (ui->comboBox->currentText()=="JS7" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,02\n-0,02");
        }
        //KONIEC SPRAWDZANIA JS7
        // SPRAWDZANIE LITERY JS9
        if (ui->comboBox->currentText()=="JS9" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0125\n-0,0125");
        }
        else if (ui->comboBox->currentText()=="JS9" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,015\n-0,015");
        }
        else if (ui->comboBox->currentText()=="JS9" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,018\n-0,018");
        }
        else if (ui->comboBox->currentText()=="JS9" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0215\n-0,0215");
        }
        else if (ui->comboBox->currentText()=="JS9" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,026\n-0,026");
        }
        else if (ui->comboBox->currentText()=="JS9" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,031\n-0,031");
        }
        else if (ui->comboBox->currentText()=="JS9" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,037\n-0,037");
        }
        else if (ui->comboBox->currentText()=="JS9" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0435\n-0,0435");
        }
        else if (ui->comboBox->currentText()=="JS9" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,05\n-0,05");
        }
        //KONIEC SPRAWDZANIA JS9

}
void MainWindow::sprawdzanie_otworu_J()
{
        // SPRAWDZANIE LITERY J6
        if (ui->comboBox->currentText()=="J6" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,002\n-0,004");
        }
        else if (ui->comboBox->currentText()=="J6" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,005\n-0,003");
        }
        else if (ui->comboBox->currentText()=="J6" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,005\n-0,004");
        }
        else if (ui->comboBox->currentText()=="J6" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,006\n-0,005");
        }
        else if (ui->comboBox->currentText()=="J6" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,008\n-0,005");
        }
        else if (ui->comboBox->currentText()=="J6" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,01\n-0,006");
        }
        else if (ui->comboBox->currentText()=="J6" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,013\n-0,003");
        }
        else if (ui->comboBox->currentText()=="J6" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,016\n-0,006");
        }
        else if (ui->comboBox->currentText()=="J6" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,018\n-0,007");
        }
        // KONIEC SPRAWDZANIA J6
        // SPRAWDZANIE LITERY J7
        if (ui->comboBox->currentText()=="J7" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,004\n-0,006");
        }
        else if (ui->comboBox->currentText()=="J7" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,006\n-0,006");
        }
        else if (ui->comboBox->currentText()=="J7" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,008\n-0,007");
        }
        else if (ui->comboBox->currentText()=="J7" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,01\n-0,008");
        }
        else if (ui->comboBox->currentText()=="J7" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,012\n-0,009");
        }
        else if (ui->comboBox->currentText()=="J7" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,014\n-0,011");
        }
        else if (ui->comboBox->currentText()=="J7" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,018\n-0,012");
        }
        else if (ui->comboBox->currentText()=="J7" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,022\n-0,013");
        }
        else if (ui->comboBox->currentText()=="J7" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,026\n-0,014");
        }
        // KONIEC SPRAWDZANIA J7
        // SPRAWDZANIE LITERY J8
        if (ui->comboBox->currentText()=="J8" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,006\n-0,008");
        }
        else if (ui->comboBox->currentText()=="J8" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,01\n-0,008");
        }
        else if (ui->comboBox->currentText()=="J8" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,012\n-0,01");
        }
        else if (ui->comboBox->currentText()=="J8" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,015\n-0,012");
        }
        else if (ui->comboBox->currentText()=="J8" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,02\n-0,013");
        }
        else if (ui->comboBox->currentText()=="J8" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,024\n-0,015");
        }
        else if (ui->comboBox->currentText()=="J8" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,028\n-0,018");
        }
        else if (ui->comboBox->currentText()=="J8" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,034\n-0,02");
        }
        else if (ui->comboBox->currentText()=="J8" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,041\n-0,022");
        }
        // KONIEC SPRAWDZANIA J8

}
void MainWindow::sprawdzanie_otworu_K()
{
        // SPRAWDZANIE LITERY K6
        if (ui->comboBox->currentText()=="K6" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0\n-0,006");
        }
        else if (ui->comboBox->currentText()=="K6" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,002\n-0,006");
        }
        else if (ui->comboBox->currentText()=="K6" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,002\n-0,007");
        }
        else if (ui->comboBox->currentText()=="K6" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,002\n-0,009");
        }
        else if (ui->comboBox->currentText()=="K6" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,002\n-0,011");
        }
        else if (ui->comboBox->currentText()=="K6" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,003\n-0,013");
        }
        else if (ui->comboBox->currentText()=="K6" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,004\n-0,015");
        }
        else if (ui->comboBox->currentText()=="K6" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,004\n-0,018");
        }
        else if (ui->comboBox->currentText()=="K6" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,004\n-0,021");
        }
        // KONIEC SPRAWDZANIA K6
        // SPRAWDZANIE LITERY K7
        if (ui->comboBox->currentText()=="K7" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0\n-0,010");
        }
        else if (ui->comboBox->currentText()=="K7" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,003\n-0,009");
        }
        else if (ui->comboBox->currentText()=="K7" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,005\n-0,010");
        }
        else if (ui->comboBox->currentText()=="K7" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,006\n-0,012");
        }
        else if (ui->comboBox->currentText()=="K7" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,006\n-0,015");
        }
        else if (ui->comboBox->currentText()=="K7" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,007\n-0,018");
        }
        else if (ui->comboBox->currentText()=="K7" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,009\n-0,021");
        }
        else if (ui->comboBox->currentText()=="K7" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,010\n-0,025");
        }
        else if (ui->comboBox->currentText()=="K7" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,012\n-0,028");
        }
        // KONIEC SPRAWDZANIA K
}
void MainWindow::sprawdzanie_otworu_M()
{
        // SPRAWDZANIE LITERY M6
        if (ui->comboBox->currentText()=="M6" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,002\n-0,008");
        }
        else if (ui->comboBox->currentText()=="M6" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,001\n-0,009");
        }
        else if (ui->comboBox->currentText()=="M6" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,003\n-0,012");
        }
        else if (ui->comboBox->currentText()=="M6" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,004\n-0,015");
        }
        else if (ui->comboBox->currentText()=="M6" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,004\n-0,017");
        }
        else if (ui->comboBox->currentText()=="M6" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,004\n-0,02");
        }
        else if (ui->comboBox->currentText()=="M6" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,005\n-0,024");
        }
        else if (ui->comboBox->currentText()=="M6" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,006\n-0,028");
        }
        else if (ui->comboBox->currentText()=="M6" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,008\n-0,030");
        }
        // KONIEC SPRAWDZANIA M6
        // SPRAWDZANIE LITERY M7
        if (ui->comboBox->currentText()=="M7" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,002\n-0,012");
        }
        else if (ui->comboBox->currentText()=="M7" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0\n-0,012");
        }
        else if (ui->comboBox->currentText()=="M7" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0\n-0,015");
        }
        else if (ui->comboBox->currentText()=="M7" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0\n-0,018");
        }
        else if (ui->comboBox->currentText()=="M7" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0\n-0,021");
        }
        else if (ui->comboBox->currentText()=="M7" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0\n-0,025");
        }
        else if (ui->comboBox->currentText()=="M7" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0\n-0,03");
        }
        else if (ui->comboBox->currentText()=="M7" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0\n-0,035");
        }
        else if (ui->comboBox->currentText()=="M7" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("+0,0\n-0,04");
        }
        // KONIEC SPRAWDZANIA M
}
void MainWindow::sprawdzanie_otworu_N()
{
        // SPRAWDZANIE LITERY N6
        if (ui->comboBox->currentText()=="N6" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,004\n-0,01");
        }
        else if (ui->comboBox->currentText()=="N6" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,005\n-0,013");
        }
        else if (ui->comboBox->currentText()=="N6" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,007\n-0,016");
        }
        else if (ui->comboBox->currentText()=="N6" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,009\n-0,02");
        }
        else if (ui->comboBox->currentText()=="N6" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,011\n-0,024");
        }
        else if (ui->comboBox->currentText()=="N6" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,012\n-0,028");
        }
        else if (ui->comboBox->currentText()=="N6" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,014\n-0,033");
        }
        else if (ui->comboBox->currentText()=="N6" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,016\n-0,038");
        }
        else if (ui->comboBox->currentText()=="N6" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,02\n-0,045");
        }
        // KONIEC SPRAWDZANIA N6
        // SPRAWDZANIE LITERY N7
        if (ui->comboBox->currentText()=="N7" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,004\n-0,014");
        }
        else if (ui->comboBox->currentText()=="N7" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,004\n-0,016");
        }
        else if (ui->comboBox->currentText()=="N7" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,004\n-0,019");
        }
        else if (ui->comboBox->currentText()=="N7" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,005\n-0,023");
        }
        else if (ui->comboBox->currentText()=="N7" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,007\n-0,028");
        }
        else if (ui->comboBox->currentText()=="N7" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,008\n-0,033");
        }
        else if (ui->comboBox->currentText()=="N7" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,009\n-0,039");
        }
        else if (ui->comboBox->currentText()=="N7" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,01\n-0,045");
        }
        else if (ui->comboBox->currentText()=="N7" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,012\n-0,052");
        }
        // KONIEC SPRAWDZANIA N7
        // SPRAWDZANIE LITERY N8
        if (ui->comboBox->currentText()=="N8" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,004\n-0,018");
        }
        else if (ui->comboBox->currentText()=="N8" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,002\n-0,02");
        }
        else if (ui->comboBox->currentText()=="N8" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,003\n-0,025");
        }
        else if (ui->comboBox->currentText()=="N8" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,003\n-0,03");
        }
        else if (ui->comboBox->currentText()=="N8" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,003\n-0,036");
        }
        else if (ui->comboBox->currentText()=="N8" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,003\n-0,042");
        }
        else if (ui->comboBox->currentText()=="N8" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,004\n-0,050");
        }
        else if (ui->comboBox->currentText()=="N8" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,004\n-0,058");
        }
        else if (ui->comboBox->currentText()=="N8" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,004\n-0,067");
        }
        // KONIEC SPRAWDZANIA N8
        // SPRAWDZANIE LITERY N9
        if (ui->comboBox->currentText()=="N9" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,004\n-0,029");
        }
        else if (ui->comboBox->currentText()=="N9" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("0,0\n-0,03");
        }
        else if (ui->comboBox->currentText()=="N9" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("0,0\n-0,036");
        }
        else if (ui->comboBox->currentText()=="N9" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("0,0\n-0,043");
        }
        else if (ui->comboBox->currentText()=="N9" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("0,0\n-0,052");
        }
        else if (ui->comboBox->currentText()=="N9" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("0,0\n-0,062");
        }
        else if (ui->comboBox->currentText()=="N9" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("0,0\n-0,074");
        }
        else if (ui->comboBox->currentText()=="N9" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("0,0\n-0,087");
        }
        else if (ui->comboBox->currentText()=="N9" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("0,0\n-0,1");
        }
        // KONIEC SPRAWDZANIA N9

}
void MainWindow::sprawdzanie_otworu_P()
{
        // SPRAWDZANIE LITERY P6
        if (ui->comboBox->currentText()=="P6" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,006\n-0,012");
        }
        else if (ui->comboBox->currentText()=="P6" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,009\n-0,017");
        }
        else if (ui->comboBox->currentText()=="P6" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,012\n-0,021");
        }
        else if (ui->comboBox->currentText()=="P6" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,015\n-0,026");
        }
        else if (ui->comboBox->currentText()=="P6" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,018\n-0,031");
        }
        else if (ui->comboBox->currentText()=="P6" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,021\n-0,037");
        }
        else if (ui->comboBox->currentText()=="P6" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,026\n-0,045");
        }
        else if (ui->comboBox->currentText()=="P6" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,03\n-0,052");
        }
        else if (ui->comboBox->currentText()=="P6" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,036\n-0,061");
        }
        // KONIEC SPRAWDZANIA P6
        // SPRAWDZANIE LITERY P7
        if (ui->comboBox->currentText()=="P7" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,006\n-0,016");
        }
        else if (ui->comboBox->currentText()=="P7" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,008\n-0,02");
        }
        else if (ui->comboBox->currentText()=="P7" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,009\n-0,024");
        }
        else if (ui->comboBox->currentText()=="P7" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,011\n-0,029");
        }
        else if (ui->comboBox->currentText()=="P7" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,014\n-0,035");
        }
        else if (ui->comboBox->currentText()=="P7" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,017\n-0,042");
        }
        else if (ui->comboBox->currentText()=="P7" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,021\n-0,051");
        }
        else if (ui->comboBox->currentText()=="P7" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,024\n-0,059");
        }
        else if (ui->comboBox->currentText()=="P7" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,028\n-0,068");
        }
        // KONIEC SPRAWDZANIA P7
        // SPRAWDZANIE LITERY P8
        if (ui->comboBox->currentText()=="P8" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,006\n-0,02");
        }
        else if (ui->comboBox->currentText()=="P8" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,012\n-0,03");
        }
        else if (ui->comboBox->currentText()=="P8" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,015\n-0,037");
        }
        else if (ui->comboBox->currentText()=="P8" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,018\n-0,045");
        }
        else if (ui->comboBox->currentText()=="P8" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,022\n-0,055");
        }
        else if (ui->comboBox->currentText()=="P8" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,026\n-0,065");
        }
        else if (ui->comboBox->currentText()=="P8" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,032\n-0,078");
        }
        else if (ui->comboBox->currentText()=="P8" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,037\n-0,091");
        }
        else if (ui->comboBox->currentText()=="P8" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,043\n-0,106");
        }
        // KONIEC SPRAWDZANIA P8
        // SPRAWDZANIE LITERY P9
        if (ui->comboBox->currentText()=="P9" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,006\n-0,031");
        }
        else if (ui->comboBox->currentText()=="P9" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,012\n-0,042");
        }
        else if (ui->comboBox->currentText()=="P9" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,015\n-0,051");
        }
        else if (ui->comboBox->currentText()=="P9" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,018\n-0,061");
        }
        else if (ui->comboBox->currentText()=="P9" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,022\n-0,074");
        }
        else if (ui->comboBox->currentText()=="P9" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,026\n-0,088");
        }
        else if (ui->comboBox->currentText()=="P9" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,032\n-0,106");
        }
        else if (ui->comboBox->currentText()=="P9" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,037\n-0,124");
        }
        else if (ui->comboBox->currentText()=="P9" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,043\n-0,143");
        }
        // KONIEC SPRAWDZANIA P9

}
void MainWindow::sprawdzanie_otworu_R()
{
        // SPRAWDZANIE LITERY R6
        if (ui->comboBox->currentText()=="R6" && ui->doubleSpinBox->value()<=2)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,010\n-0,016");
        }
        else if (ui->comboBox->currentText()=="R6" && ui->doubleSpinBox->value()<=6)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,012\n-0,02");
        }
        else if (ui->comboBox->currentText()=="R6" && ui->doubleSpinBox->value()<=10)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,016\n-0,025");
        }
        else if (ui->comboBox->currentText()=="R6" && ui->doubleSpinBox->value()<=18)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,020\n-0,031");
        }
        else if (ui->comboBox->currentText()=="R6" && ui->doubleSpinBox->value()<=30)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,024\n-0,037");
        }
        else if (ui->comboBox->currentText()=="R6" && ui->doubleSpinBox->value()<=50)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,029\n-0,045");
        }
        else if (ui->comboBox->currentText()=="R6" && ui->doubleSpinBox->value()<=80)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,035\n-0,054");
        }
        else if (ui->comboBox->currentText()=="R6" && ui->doubleSpinBox->value()<=120)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,037\n-0,056");
        }
        else if (ui->comboBox->currentText()=="R6" && ui->doubleSpinBox->value()<=180)
        {
            ui->label->setText(ui->doubleSpinBox->text());
            ui->label_2->setText("-0,044\n-0,066");
        }
        // KONIEC SPRAWDZANIA R6
}
