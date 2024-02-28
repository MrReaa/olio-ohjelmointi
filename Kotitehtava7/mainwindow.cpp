#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer1 = new QTimer();
    timer2 = new QTimer();




    connect(timer1, &QTimer::timeout, this, &MainWindow::pelikello);
    connect(timer2, &QTimer::timeout, this, &MainWindow::pelikello);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete timer1;
    delete timer2;
    timer1=nullptr;
    timer2=nullptr;

}


void MainWindow::on_Start_clicked()
{

    //Pelilähtee käyntiin eli pelaajien aika lähtee valumaan alaspäin
    //Ajan pitää olla valittuna että peli voi käynnistyä

    if(pelaajan1_aika != 0 && pelaajan2_aika != 0){

        ui->Esittelyteksti->setText("Game ongoing");
        ui->Pelaaja1->setRange(0, pelaajan1_aika);
        ui->Pelaaja2->setRange(0, pelaajan2_aika);

        ui->Pelaaja1->setValue(pelaajan1_aika);
        ui->Pelaaja2->setValue(pelaajan2_aika);
        timer1->start(1000);
        timer2->start(1000);

    }

    else{
        ui->Esittelyteksti->setText("You need to choose a time before you press Start.");
    }
}


void MainWindow::on_Stop_clicked()
{
    pelaaja = 1;
    ui->Pelaaja1->setValue(0);
    ui->Pelaaja2->setValue(0);
    pelaajan1_aika = 0;
    pelaajan2_aika = 0;

    ui->aika1->setChecked(false);
    ui->aika2->setChecked(false);



    ui->Esittelyteksti->setText("Select playtime and press start game!");


}

void MainWindow::pelikello()
{
    //Muuttaa niitten ajastimien aikaa sen perusteella kumpi pelaaja menos
    //Peliaikaa tulee olla jälkellä että ajastinta voidaan päivittää
    if(pelaaja == 1){
        if(pelaajan1_aika >0){
            pelaajan1_aika -=1;
            ui->Pelaaja1->setValue(pelaajan1_aika);
        }
        else if(pelaajan1_aika == 0){
            ui->Esittelyteksti->setText("Player 1 win!");
            timer1->stop();
            timer2->stop();


        }
    }
    else if(pelaaja == 2){
        if(pelaajan2_aika >0){
            pelaajan2_aika -=1;
            ui->Pelaaja2->setValue(pelaajan2_aika);
        }
        else if(pelaajan2_aika == 0){
            ui->Esittelyteksti->setText("Player 2 win!");
            timer2->stop();
            timer1->stop();

        }
    }
}


void MainWindow::show_tulos(){
    ui->Pelaaja1->setValue(pelaajan1_aika);
    ui->Pelaaja2->setValue(pelaajan2_aika);

}

void MainWindow::on_Vaihto1_clicked()
{
    // vaihtaa pelaajaksi 1
    pelaaja = 1;

}


void MainWindow::on_Vaihto2_clicked()
{
    //vaihtaa pelaajaksi 2
    pelaaja = 2;

}

void MainWindow::on_aika1_clicked()
{
    pelaajan1_aika = 10; // 2min
    pelaajan2_aika = 10;
    ui->Esittelyteksti->setText("Ready to play!");

}


void MainWindow::on_aika2_clicked()
{
    pelaajan1_aika = 300;
    pelaajan2_aika = 300; // 5min
    ui->Esittelyteksti->setText("Ready to play!");
}

