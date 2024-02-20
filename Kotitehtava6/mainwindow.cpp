#include "mainwindow.h"
#include "ui_mainwindow.h"

int i;

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


void MainWindow::on_Count_clicked()
{
    i += 1;
    QString luku = QString::number(i);
    ui->textBrowser->setText(luku);
}


void MainWindow::on_reset_clicked()
{
    i=0;
    ui->textBrowser->clear();
}

