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
        case 2: //GPIO
            Set_Individual_Tap_GPIO(0);
            break;
        case 3: //SPI0
            Set_Individual_Tap_SPI0(0);
            break;
        case 4: //I2C0
            Set_Individual_Tap_I2C0(0);
            break;
        case 5: //UART0
            Set_Individual_Tap_UART0(0);
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
        case 2: //GPIO
            Set_Individual_Tap_GPIO(1);
            break;
        case 3: //SPI0
            Set_Individual_Tap_SPI0(1);
            break;
        case 4: //I2C0
            Set_Individual_Tap_I2C0(1);
            break;
        case 5: //UART0
            Set_Individual_Tap_UART0(1);
            break;
    }
}

void MainWindow::on_GPIO_2_CB_currentIndexChanged()
{
    if(!ui->GPIO_2_CB->isEnabled())
        return;

    switch(ui->GPIO_2_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(2);
            break;
        case 3: //SPI0
            Set_Individual_Tap_SPI0(2);
            break;
        case 4: //I2C1
            Set_Individual_Tap_I2C1(2);
            break;
        default:
            break;
    }
}

void MainWindow::on_GPIO_3_CB_currentIndexChanged()
{
    if(!ui->GPIO_3_CB->isEnabled())
        return;

    switch(ui->GPIO_3_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(3);
            break;
        case 3: //SPI0
            Set_Individual_Tap_SPI0(3);
            break;
        case 4: //I2C1
            Set_Individual_Tap_I2C1(3);
            break;
        default:
            break;
    }
}

void MainWindow::on_GPIO_4_CB_currentIndexChanged()
{
    if(!ui->GPIO_4_CB->isEnabled())
        return;

    switch(ui->GPIO_4_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(4);
            break;
        case 3: //SPI0
            Set_Individual_Tap_SPI0(4);
            break;
        case 4: //I2C0
            Set_Individual_Tap_I2C0(4);
            break;
        case 5: //UART1
            Set_Individual_Tap_UART1(4);
            break;
    }
}

void MainWindow::on_GPIO_5_CB_currentIndexChanged()
{
    if(!ui->GPIO_5_CB->isEnabled())
        return;

    switch(ui->GPIO_5_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(5);
            break;
        case 3: //SPI0
            Set_Individual_Tap_SPI0(5);
            break;
        case 4: //I2C0
            Set_Individual_Tap_I2C0(5);
            break;
        case 5: //UART1
            Set_Individual_Tap_UART1(5);
            break;
    }
}

void MainWindow::on_GPIO_6_CB_currentIndexChanged()
{
    if(!ui->GPIO_6_CB->isEnabled())
        return;

    switch(ui->GPIO_6_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(6);
            break;
        case 3: //SPI0
            Set_Individual_Tap_SPI0(6);
            break;
        case 4: //I2C1
            Set_Individual_Tap_I2C1(6);
            break;
        default:
            break;
    }
}

void MainWindow::on_GPIO_7_CB_currentIndexChanged()
{
    if(!ui->GPIO_7_CB->isEnabled())
        return;

    switch(ui->GPIO_7_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(7);
            break;
        case 3: //SPI0
            Set_Individual_Tap_SPI0(7);
            break;
        case 4: //I2C1
            Set_Individual_Tap_I2C1(7);
            break;
        default:
            break;
    }
}

int MainWindow::Modify_Individual_Tap_ComboBox(int Combobox_Index, int Selected_Index, bool Enable_After_Modify)
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

    return 0;
}

void MainWindow::Set_Individual_Tap_GPIO(int GPIO_Index)
{
    switch(GPIO_Index)
    {
        case 0:
            break;
        default:
            break;
    }
}

void MainWindow::Set_Individual_Tap_SPI0(int GPIO_Index)
{
    int ret = 0xFF;
    bool SPI0_Conflict = false;
    QComboBox *SPI0_ComboBox[] = { ui->GPIO_0_CB,  ui->GPIO_1_CB,  ui->GPIO_2_CB,  ui->GPIO_3_CB,
                                   ui->GPIO_4_CB,  ui->GPIO_5_CB,  ui->GPIO_6_CB,  ui->GPIO_7_CB,
                                   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
                                   ui->GPIO_16_CB, ui->GPIO_17_CB, ui->GPIO_18_CB, ui->GPIO_19_CB,};
    //Check Conflict
    if(GPIO_Index > 15)
    {
        if( (ui->GPIO_0_CB->currentIndex() == 3) || (ui->GPIO_4_CB->currentIndex() == 3) )
            SPI0_Conflict = true;
    }
    else if(GPIO_Index > 3)
    {
        if( (ui->GPIO_0_CB->currentIndex() == 3) || (ui->GPIO_16_CB->currentIndex() == 3) )
            SPI0_Conflict = true;
    }
    else
    {
        if( (ui->GPIO_4_CB->currentIndex() == 3) || (ui->GPIO_16_CB->currentIndex() == 3) )
            SPI0_Conflict = true;
    }

    if(SPI0_Conflict)
    {
        ret = QMessageBox::warning(this, tr("Setting Conflict!"),
                                         tr("SPI0 Setting Conflict!\n"
                                            "Do you want to change your SPI0 setting?"),
                                         QMessageBox::Yes | QMessageBox::No);
    }

    if(ret == QMessageBox::No)
    {
        Modify_Individual_Tap_ComboBox(GPIO_Index,0,true);
        return;
    }
    else if(ret == QMessageBox::Yes)
    {
        for(int i = 0; i < (int)(sizeof(SPI0_ComboBox)/sizeof(SPI0_ComboBox[0])); i++)
        {
            if(SPI0_ComboBox[i] == NULL)
                continue;

            if(SPI0_ComboBox[i]->currentIndex() == 3)
                Modify_Individual_Tap_ComboBox(i,0,true);
        }
    }

    //Set GPIO Combo Box
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
            ui->GPIO_2_CB->setCurrentIndex(ui->GPIO_2_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(2,0,true): ui->GPIO_2_CB->currentIndex());
            ui->GPIO_3_CB->setCurrentIndex(ui->GPIO_3_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(3,0,true): ui->GPIO_3_CB->currentIndex());
            break;
        case 4:
        case 5:
            Modify_Individual_Tap_ComboBox(4,4,true);
            Modify_Individual_Tap_ComboBox(5,4,false);
            ui->GPIO_6_CB->setCurrentIndex(ui->GPIO_6_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(6,0,true): ui->GPIO_6_CB->currentIndex());
            ui->GPIO_7_CB->setCurrentIndex(ui->GPIO_7_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(7,0,true): ui->GPIO_7_CB->currentIndex());
            break;
        case 8:
        case 9:
            Modify_Individual_Tap_ComboBox(8,4,true);
            Modify_Individual_Tap_ComboBox(9,4,false);
            ui->GPIO_10_CB->setCurrentIndex(ui->GPIO_10_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(10,0,true): ui->GPIO_10_CB->currentIndex());
            ui->GPIO_11_CB->setCurrentIndex(ui->GPIO_11_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(11,0,true): ui->GPIO_11_CB->currentIndex());
            break;
        case 16:
        case 17:
            Modify_Individual_Tap_ComboBox(16,4,true);
            Modify_Individual_Tap_ComboBox(17,4,false);
            ui->GPIO_18_CB->setCurrentIndex(ui->GPIO_18_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(2,0,true): ui->GPIO_18_CB->currentIndex());
            ui->GPIO_19_CB->setCurrentIndex(ui->GPIO_19_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(3,0,true): ui->GPIO_19_CB->currentIndex());
            break;
        case 20:
        case 21:
            Modify_Individual_Tap_ComboBox(20,3,true);
            Modify_Individual_Tap_ComboBox(21,3,false);
            break;
        default:
            break;
    }
}

void MainWindow::Set_Individual_Tap_I2C1(int)
{

}

void MainWindow::Set_Individual_Tap_UART0(int)
{

}

void MainWindow::Set_Individual_Tap_UART1(int)
{

}

void MainWindow::Set_Individual_Tap_ADC(int)
{

}
