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
    void on_exit_BTN_clicked();

    void on_GPIO_0_CB_currentIndexChanged();
    void on_GPIO_1_CB_currentIndexChanged();
    void on_GPIO_2_CB_currentIndexChanged();
    void on_GPIO_3_CB_currentIndexChanged();
    void on_GPIO_4_CB_currentIndexChanged();
    void on_GPIO_5_CB_currentIndexChanged();
    void on_GPIO_6_CB_currentIndexChanged();
    void on_GPIO_7_CB_currentIndexChanged();
    void on_GPIO_8_CB_currentIndexChanged();
    void on_GPIO_9_CB_currentIndexChanged();
    void on_GPIO_10_CB_currentIndexChanged();
    void on_GPIO_11_CB_currentIndexChanged();
    void on_GPIO_12_CB_currentIndexChanged();
    void on_GPIO_13_CB_currentIndexChanged();
    void on_GPIO_14_CB_currentIndexChanged();
    void on_GPIO_15_CB_currentIndexChanged();
    void on_GPIO_16_CB_currentIndexChanged();
    void on_GPIO_17_CB_currentIndexChanged();
    void on_GPIO_18_CB_currentIndexChanged();
    void on_GPIO_19_CB_currentIndexChanged();
    void on_GPIO_20_CB_currentIndexChanged();
    void on_GPIO_21_CB_currentIndexChanged();
    void on_GPIO_22_CB_currentIndexChanged();
    void on_GPIO_26_CB_currentIndexChanged();
    void on_GPIO_27_CB_currentIndexChanged();
    void on_GPIO_28_CB_currentIndexChanged();

    int Modify_Individual_Tap_ComboBox(int , int, bool);

    void Set_Individual_Tap_GPIO(int);
    void Set_Individual_Tap_SPI0(int);
    void Set_Individual_Tap_SPI1(int);
    void Set_Individual_Tap_I2C0(int);
    void Set_Individual_Tap_I2C1(int);
    void Set_Individual_Tap_UART0(int);
    void Set_Individual_Tap_UART1(int);
    void Set_Individual_Tap_ADC(int);



private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
