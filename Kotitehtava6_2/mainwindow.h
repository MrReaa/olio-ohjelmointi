#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_nappi1_clicked();

    void on_Enter_clicked();

    void on_plussa_clicked();

    void on_nappi2_clicked();

    void on_nappi3_clicked();

    void on_nappi4_clicked();

    void on_nappi5_clicked();

    void on_nappi6_clicked();

    void on_nappi7_clicked();

    void on_nappi8_clicked();

    void on_nappi9_clicked();

    void on_nappi0_clicked();

    void on_Clear_clicked();

    void on_jako_clicked();

    void on_kerto_clicked();

    void on_miinus_clicked();

private:
    Ui::MainWindow *ui;

    int numero;
    int state = 0;
    QString number1,number2;
    float result;
    short operand;

    void numberClickedHandler();

    void addSubMulDivClickHandler();

};
#endif // MAINWINDOW_H
