#include "otworek.h"
#include "mainwindow.h"
void MyClass::H()
{
    ui->label->setText(ui->spinBox->text());
        if (ui->comboBox->currentText()=="H7" && ui->spinBox->value()<=20)
        {
            ui->label->setText(ui->spinBox->text());
            ui->label_2->setText("+0,021\n+0");
        }

}
