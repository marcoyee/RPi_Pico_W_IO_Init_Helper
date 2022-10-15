#include <QMessageBox>
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

void MainWindow::on_exit_BTN_clicked()
{
    close();
}

void MainWindow::on_GPIO_0_CB_currentIndexChanged()
{
    if(!ui->GPIO_0_CB->isEnabled())
        return;

    switch(ui->GPIO_0_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2:
            ui->GPIO_1_CB->setEnabled(true);
            ui->GPIO_1_CB->setCurrentIndex((ui->GPIO_1_CB->currentIndex() > 2) ? 0 : ui->GPIO_1_CB->currentIndex());
            ui->GPIO_2_CB->setEnabled(true);
            ui->GPIO_2_CB->setCurrentIndex((ui->GPIO_2_CB->currentIndex() > 2) ? 0 : ui->GPIO_2_CB->currentIndex());
            ui->GPIO_3_CB->setEnabled(true);
            ui->GPIO_3_CB->setCurrentIndex((ui->GPIO_3_CB->currentIndex() > 2) ? 0 : ui->GPIO_3_CB->currentIndex());
            break;
        case 3:
            Set_Individual_Tap_SPI0(0);
        /*
            ui->GPIO_1_CB->setEnabled(false);
            ui->GPIO_1_CB->setCurrentIndex(3);
            ui->GPIO_2_CB->setEnabled(false);
            ui->GPIO_2_CB->setCurrentIndex(3);
            ui->GPIO_3_CB->setEnabled(false);
            ui->GPIO_3_CB->setCurrentIndex(3);
        */
            break;
        case 4:
            ui->GPIO_1_CB->setEnabled(false);
            ui->GPIO_1_CB->setCurrentIndex(4);
            ui->GPIO_2_CB->setEnabled(false);
            ui->GPIO_2_CB->setCurrentIndex((ui->GPIO_2_CB->currentIndex() > 2) ? 0 : ui->GPIO_2_CB->currentIndex());
            ui->GPIO_2_CB->setEnabled(true);
            ui->GPIO_3_CB->setEnabled(false);
            ui->GPIO_3_CB->setCurrentIndex((ui->GPIO_3_CB->currentIndex() > 2) ? 0 : ui->GPIO_3_CB->currentIndex());
            ui->GPIO_3_CB->setEnabled(true);
            break;
        case 5:
            ui->GPIO_1_CB->setEnabled(false);
            ui->GPIO_1_CB->setCurrentIndex(5);
            ui->GPIO_2_CB->setEnabled(false);
            ui->GPIO_2_CB->setCurrentIndex((ui->GPIO_2_CB->currentIndex() > 2) ? 0 : ui->GPIO_2_CB->currentIndex());
            ui->GPIO_2_CB->setEnabled(true);
            ui->GPIO_3_CB->setEnabled(false);
            ui->GPIO_3_CB->setCurrentIndex((ui->GPIO_3_CB->currentIndex() > 2) ? 0 : ui->GPIO_3_CB->currentIndex());
            ui->GPIO_3_CB->setEnabled(true);
            break;
    }
}

void MainWindow::on_GPIO_1_CB_currentIndexChanged()
{
    if(!ui->GPIO_1_CB->isEnabled())
        return;

    switch(ui->GPIO_1_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2:
            ui->GPIO_0_CB->setEnabled(true);
            ui->GPIO_0_CB->setCurrentIndex((ui->GPIO_0_CB->currentIndex() > 2) ? 0 : ui->GPIO_0_CB->currentIndex());
            ui->GPIO_2_CB->setEnabled(true);
            ui->GPIO_2_CB->setCurrentIndex((ui->GPIO_2_CB->currentIndex() > 2) ? 0 : ui->GPIO_2_CB->currentIndex());
            ui->GPIO_3_CB->setEnabled(true);
            ui->GPIO_3_CB->setCurrentIndex((ui->GPIO_3_CB->currentIndex() > 2) ? 0 : ui->GPIO_3_CB->currentIndex());
            break;
        case 3:
            Set_Individual_Tap_SPI0(1);
        /*
            ui->GPIO_0_CB->setEnabled(false);
            ui->GPIO_0_CB->setCurrentIndex(3);
            ui->GPIO_0_CB->setEnabled(true);
            ui->GPIO_1_CB->setEnabled(false);
            ui->GPIO_2_CB->setEnabled(false);
            ui->GPIO_2_CB->setCurrentIndex(3);
            ui->GPIO_3_CB->setEnabled(false);
            ui->GPIO_3_CB->setCurrentIndex(3);
        */
            break;
        case 4:
            ui->GPIO_0_CB->setEnabled(false);
            ui->GPIO_0_CB->setCurrentIndex(4);
            ui->GPIO_0_CB->setEnabled(true);
            ui->GPIO_1_CB->setEnabled(false);
            ui->GPIO_2_CB->setEnabled(false);
            ui->GPIO_2_CB->setCurrentIndex((ui->GPIO_2_CB->currentIndex() > 2) ? 0 : ui->GPIO_2_CB->currentIndex());
            ui->GPIO_2_CB->setEnabled(true);
            ui->GPIO_3_CB->setEnabled(false);
            ui->GPIO_3_CB->setCurrentIndex((ui->GPIO_3_CB->currentIndex() > 2) ? 0 : ui->GPIO_3_CB->currentIndex());
            ui->GPIO_3_CB->setEnabled(true);
            break;
        case 5:
            ui->GPIO_0_CB->setEnabled(false);
            ui->GPIO_0_CB->setCurrentIndex(5);
            ui->GPIO_0_CB->setEnabled(true);
            ui->GPIO_1_CB->setEnabled(false);
            ui->GPIO_2_CB->setEnabled(false);
            ui->GPIO_2_CB->setCurrentIndex((ui->GPIO_2_CB->currentIndex() > 2) ? 0 : ui->GPIO_2_CB->currentIndex());
            ui->GPIO_2_CB->setEnabled(true);
            ui->GPIO_3_CB->setEnabled(false);
            ui->GPIO_3_CB->setCurrentIndex((ui->GPIO_3_CB->currentIndex() > 2) ? 0 : ui->GPIO_3_CB->currentIndex());
            ui->GPIO_3_CB->setEnabled(true);
            break;
    }
}

void MainWindow::on_GPIO_2_CB_currentIndexChanged()
{
    if(!ui->GPIO_2_CB->isEnabled())
        return;
}

void MainWindow::on_GPIO_3_CB_currentIndexChanged()
{
    if(!ui->GPIO_3_CB->isEnabled())
        return;
}

void MainWindow::Modify_Individual_Tap_ComboBox(int Combobox_Index, int Selected_Index, bool Enable_After_Modify)
{
    QComboBox *Individual_Tap_ComboBox[] = { ui->GPIO_0_CB,  ui->GPIO_1_CB,  ui->GPIO_2_CB,  ui->GPIO_3_CB,  ui->GPIO_4_CB,
                                             ui->GPIO_5_CB,  ui->GPIO_6_CB,  ui->GPIO_7_CB,  ui->GPIO_8_CB,  ui->GPIO_9_CB,
                                             ui->GPIO_10_CB, ui->GPIO_11_CB, ui->GPIO_12_CB, ui->GPIO_13_CB, ui->GPIO_14_CB,
                                             ui->GPIO_15_CB, ui->GPIO_16_CB, ui->GPIO_17_CB, ui->GPIO_18_CB, ui->GPIO_19_CB,
                                             ui->GPIO_20_CB, ui->GPIO_21_CB, ui->GPIO_22_CB, ui->GPIO_26_CB, ui->GPIO_27_CB,
                                             ui->GPIO_28_CB};

    if(Combobox_Index > 22)
        Combobox_Index -= 3;

    Individual_Tap_ComboBox[Combobox_Index]->setEnabled(false);
    Individual_Tap_ComboBox[Combobox_Index]->setCurrentIndex(Selected_Index);
    Individual_Tap_ComboBox[Combobox_Index]->setEnabled(Enable_After_Modify);

}

void MainWindow::Set_Individual_Tap_SPI0(int GPIO_Index)
{
    switch(GPIO_Index)
    {
        case 0:
        case 1:
        case 2:
        case 3:
            Modify_Individual_Tap_ComboBox(0,3,true);
            Modify_Individual_Tap_ComboBox(1,3,false);
            Modify_Individual_Tap_ComboBox(2,3,false);
            Modify_Individual_Tap_ComboBox(3,3,false);
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            Modify_Individual_Tap_ComboBox(4,3,true);
            Modify_Individual_Tap_ComboBox(5,3,false);
            Modify_Individual_Tap_ComboBox(6,3,false);
            Modify_Individual_Tap_ComboBox(7,3,false);
            break;
        case 16:
        case 17:
        case 18:
        case 19:
            Modify_Individual_Tap_ComboBox(16,3,true);
            Modify_Individual_Tap_ComboBox(17,3,false);
            Modify_Individual_Tap_ComboBox(18,3,false);
            Modify_Individual_Tap_ComboBox(19,3,false);
            break;
        default:
            break;
    }
}

void MainWindow::Set_Individual_Tap_SPI1(int GPIO_Index)
{
    switch(GPIO_Index)
    {
        case 8:
        case 9:
        case 10:
        case 11:
            Modify_Individual_Tap_ComboBox(8,3,true);
            Modify_Individual_Tap_ComboBox(9,3,false);
            Modify_Individual_Tap_ComboBox(10,3,false);
            Modify_Individual_Tap_ComboBox(11,3,false);
            break;
        case 12:
        case 13:
        case 14:
        case 15:
            Modify_Individual_Tap_ComboBox(12,3,true);
            Modify_Individual_Tap_ComboBox(13,3,false);
            Modify_Individual_Tap_ComboBox(14,3,false);
            Modify_Individual_Tap_ComboBox(15,3,false);
            break;
        default:
            break;
    }
}

void MainWindow::Set_Individual_Tap_I2C0(int GPIO_Index)
{
    switch(GPIO_Index)
    {
        case 0:
        case 1:
            Modify_Individual_Tap_ComboBox(0,4,true);
            Modify_Individual_Tap_ComboBox(1,4,false);
            if(ui->GPIO_3_CB->currentIndex() > 3);
            break;
        case 4:
        case 5:
            break;
        case 8:
        case 9:
            break;
        case 16:
        case 17:
            break;
        case 20:
        case 21:
            break;
        default:
            break;
    }
}

void MainWindow::Set_Individual_Tap_I2C1(int)
{

}
