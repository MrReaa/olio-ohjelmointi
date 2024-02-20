#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_nappi1_clicked()
{
    numero = 1;
    numberClickedHandler();
}

void MainWindow::on_nappi2_clicked()
{
    numero = 2;
    numberClickedHandler();

}

void MainWindow::on_nappi3_clicked()
{
    numero = 3;
    numberClickedHandler();
}


void MainWindow::on_nappi4_clicked()
{
    numero = 4;
    numberClickedHandler();
}


void MainWindow::on_nappi5_clicked()
{
    numero = 5;
    numberClickedHandler();
}


void MainWindow::on_nappi6_clicked()
{
    numero = 6;
    numberClickedHandler();
}


void MainWindow::on_nappi7_clicked()
{
    numero = 7;
    numberClickedHandler();
}

void MainWindow::on_nappi8_clicked()
{
    numero = 8;
    numberClickedHandler();
}


void MainWindow::on_nappi9_clicked()
{
    numero = 9;
    numberClickedHandler();
}


void MainWindow::on_nappi0_clicked()
{
    numero = 0;
    numberClickedHandler();
}


void MainWindow::on_jako_clicked()
{
    operand = 2;
    state = 1;
}


void MainWindow::on_kerto_clicked()
{
    operand = 3;
    state = 1;
}


void MainWindow::on_miinus_clicked()
{
    operand = 1;
    state = 1;
}


void MainWindow::on_plussa_clicked()
{
    operand = 0;
    state = 1;
}





void MainWindow::numberClickedHandler(){

    if(state == 0){
        //Lisää annetun numeron jo olemassa olevaan 1 numeroon
        number1.append(QString::number(numero));


        //Kirjoittaa sen numeron tauluun num1
        ui->num1->setText(number1);

    }

    if(state == 1){
        // Lisää annetun numeron jo olemassa olevaan 2 numeroon

        number2.append(QString::number(numero));
        //Kiroittaa sen numeron tauluun num2
        ui->num2->setText(number2);

    }

}

void MainWindow::addSubMulDivClickHandler(){

    float n1 = number1.toFloat();
    float n2 = number2.toFloat();

    switch(operand) {
    case 0:
        result = n1 + n2;
        break;

    case 1:
        result = n1 - n2;
        break;
    case 2:
        result = n1 / n2;
        break;
    case 3:
        result = n1 * n2;
        break;
    }


}

void MainWindow::on_Enter_clicked()
{
    addSubMulDivClickHandler();
    ui->Result->setText(QString::number(result));
}
void MainWindow::on_Clear_clicked()
{
    state = 0;
    ui->num1->clear();
    ui->num2->clear();
    ui->Result->clear();
    numero = 0;
    number1.clear();
    number2.clear();
}



