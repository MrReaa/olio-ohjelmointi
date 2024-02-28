#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Start_clicked();

    void on_Stop_clicked();

    void on_Vaihto1_clicked();

    void on_Vaihto2_clicked();

    void on_aika1_clicked();

    void on_aika2_clicked();

    void pelikello();
    void show_tulos();

private:
    Ui::MainWindow *ui;
    int pelaaja = 1;
    int pelaajan1_aika;
    int pelaajan2_aika;

    QTimer *timer1;
    QTimer *timer2;
};
#endif // MAINWINDOW_H
