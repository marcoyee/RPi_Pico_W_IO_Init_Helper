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

void MainWindow::on_GPIO_8_CB_currentIndexChanged()
{
    if(!ui->GPIO_8_CB->isEnabled())
        return;

    switch(ui->GPIO_8_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(8);
            break;
        case 3: //SPI1
            Set_Individual_Tap_SPI1(8);
            break;
        case 4: //I2C0
            Set_Individual_Tap_I2C0(8);
            break;
        case 5: //UART1
            Set_Individual_Tap_UART1(8);
        default:
            break;
    }
}

void MainWindow::on_GPIO_9_CB_currentIndexChanged()
{
    if(!ui->GPIO_9_CB->isEnabled())
        return;

    switch(ui->GPIO_9_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(9);
            break;
        case 3: //SPI1
            Set_Individual_Tap_SPI1(9);
            break;
        case 4: //I2C0
            Set_Individual_Tap_I2C0(9);
            break;
        case 5: //UART1
            Set_Individual_Tap_UART1(9);
        default:
            break;
    }
}

void MainWindow::on_GPIO_10_CB_currentIndexChanged()
{
    if(!ui->GPIO_10_CB->isEnabled())
        return;

    switch(ui->GPIO_10_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(10);
            break;
        case 3: //SPI1
            Set_Individual_Tap_SPI1(10);
            break;
        case 4: //I2C1
            Set_Individual_Tap_I2C1(10);
            break;
        default:
            break;
    }
}

void MainWindow::on_GPIO_11_CB_currentIndexChanged()
{
    if(!ui->GPIO_11_CB->isEnabled())
        return;

    switch(ui->GPIO_11_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(11);
            break;
        case 3: //SPI1
            Set_Individual_Tap_SPI1(11);
            break;
        case 4: //I2C1
            Set_Individual_Tap_I2C1(11);
            break;
        default:
            break;
    }
}

void MainWindow::on_GPIO_12_CB_currentIndexChanged()
{
    if(!ui->GPIO_12_CB->isEnabled())
        return;

    switch(ui->GPIO_12_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(12);
            break;
        case 3: //SPI1
            Set_Individual_Tap_SPI1(12);
            break;
        case 4: //I2C0
            Set_Individual_Tap_I2C0(12);
            break;
        case 5: //UART0
            Set_Individual_Tap_UART0(12);
        default:
            break;
    }
}

void MainWindow::on_GPIO_13_CB_currentIndexChanged()
{
    if(!ui->GPIO_13_CB->isEnabled())
        return;

    switch(ui->GPIO_13_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(13);
            break;
        case 3: //SPI1
            Set_Individual_Tap_SPI1(13);
            break;
        case 4: //I2C0
            Set_Individual_Tap_I2C0(13);
            break;
        case 5: //UART0
            Set_Individual_Tap_UART0(13);
        default:
            break;
    }
}

void MainWindow::on_GPIO_14_CB_currentIndexChanged()
{
    if(!ui->GPIO_14_CB->isEnabled())
        return;

    switch(ui->GPIO_14_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(14);
            break;
        case 3: //SPI1
            Set_Individual_Tap_SPI1(14);
            break;
        case 4: //I2C1
            Set_Individual_Tap_I2C1(14);
            break;
        default:
            break;
    }
}

void MainWindow::on_GPIO_15_CB_currentIndexChanged()
{
    if(!ui->GPIO_15_CB->isEnabled())
        return;

    switch(ui->GPIO_15_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(15);
            break;
        case 3: //SPI1
            Set_Individual_Tap_SPI1(15);
            break;
        case 4: //I2C1
            Set_Individual_Tap_I2C1(15);
            break;
        default:
            break;
    }
}

void MainWindow::on_GPIO_16_CB_currentIndexChanged()
{
    if(!ui->GPIO_16_CB->isEnabled())
        return;

    switch(ui->GPIO_16_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(16);
            break;
        case 3: //SPI0
            Set_Individual_Tap_SPI0(16);
            break;
        case 4: //I2C0
            Set_Individual_Tap_I2C0(16);
            break;
        case 5: //UART0
            Set_Individual_Tap_UART0(16);
        default:
            break;
    }
}

void MainWindow::on_GPIO_17_CB_currentIndexChanged()
{
    if(!ui->GPIO_17_CB->isEnabled())
        return;

    switch(ui->GPIO_17_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(17);
            break;
        case 3: //SPI0
            Set_Individual_Tap_SPI0(17);
            break;
        case 4: //I2C0
            Set_Individual_Tap_I2C0(17);
            break;
        case 5: //UART0
            Set_Individual_Tap_UART0(17);
        default:
            break;
    }
}

void MainWindow::on_GPIO_18_CB_currentIndexChanged()
{
    if(!ui->GPIO_18_CB->isEnabled())
        return;

    switch(ui->GPIO_18_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(18);
            break;
        case 3: //SPI0
            Set_Individual_Tap_SPI0(18);
            break;
        case 4: //I2C1
            Set_Individual_Tap_I2C1(18);
            break;
        default:
            break;
    }
}

void MainWindow::on_GPIO_19_CB_currentIndexChanged()
{
    if(!ui->GPIO_19_CB->isEnabled())
        return;

    switch(ui->GPIO_19_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(19);
            break;
        case 3: //SPI0
            Set_Individual_Tap_SPI0(19);
            break;
        case 4: //I2C1
            Set_Individual_Tap_I2C1(19);
            break;
        default:
            break;
    }
}

void MainWindow::on_GPIO_20_CB_currentIndexChanged()
{
    if(!ui->GPIO_20_CB->isEnabled())
        return;

    switch(ui->GPIO_20_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(20);
            break;
        case 3: //I2C0
            Set_Individual_Tap_I2C0(20);
            break;
        default:
            break;
    }
}

void MainWindow::on_GPIO_21_CB_currentIndexChanged()
{
    if(!ui->GPIO_21_CB->isEnabled())
        return;

    switch(ui->GPIO_21_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(21);
            break;
        case 3: //I2C0
            Set_Individual_Tap_I2C0(21);
            break;
        default:
            break;
    }
}

void MainWindow::on_GPIO_22_CB_currentIndexChanged()
{
    if(!ui->GPIO_22_CB->isEnabled())
        return;

    switch(ui->GPIO_22_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(22);
            break;
        default:
            break;
    }
}

void MainWindow::on_GPIO_26_CB_currentIndexChanged()
{
    if(!ui->GPIO_26_CB->isEnabled())
        return;

    switch(ui->GPIO_26_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(26);
            break;
        case 3: //ADC
            //Set_Individual_Tap_ADC(26);
            break;
        case 4: //I2C1
            Set_Individual_Tap_I2C1(26);
            break;
        default:
            break;
    }
}

void MainWindow::on_GPIO_27_CB_currentIndexChanged()
{
    if(!ui->GPIO_27_CB->isEnabled())
        return;

    switch(ui->GPIO_27_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(27);
            break;
        case 3: //ADC
            //Set_Individual_Tap_ADC(27);
            break;
        case 4: //I2C1
            Set_Individual_Tap_I2C1(27);
            break;
        default:
            break;
    }
}

void MainWindow::on_GPIO_28_CB_currentIndexChanged()
{
    if(!ui->GPIO_28_CB->isEnabled())
        return;

    switch(ui->GPIO_28_CB->currentIndex())
    {
        case 0:
        case 1:
        case 2: //GPIO
            Set_Individual_Tap_GPIO(28);
            break;
        case 3: //ADC
            //Set_Individual_Tap_ADC(28);
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
                                   ui->GPIO_16_CB, ui->GPIO_17_CB, ui->GPIO_18_CB, ui->GPIO_19_CB};
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
    int ret = 0xFF;
    bool SPI1_Conflict = false;
    QComboBox *SPI1_ComboBox[] = { ui->GPIO_8_CB,  ui->GPIO_9_CB,  ui->GPIO_10_CB,  ui->GPIO_11_CB,
                                   ui->GPIO_12_CB, ui->GPIO_13_CB, ui->GPIO_14_CB, ui->GPIO_15_CB};

    //Check Conflict
    if(GPIO_Index > 11)
    {
        if(ui->GPIO_8_CB->currentIndex() == 3)
            SPI1_Conflict = true;
    }
    else
    {
        if(ui->GPIO_12_CB->currentIndex() == 3)
            SPI1_Conflict = true;
    }

    if(SPI1_Conflict)
    {
        ret = QMessageBox::warning(this, tr("Setting Conflict!"),
                                         tr("SPI1 Setting Conflict!\n"
                                            "Do you want to change your SPI1 setting?"),
                                         QMessageBox::Yes | QMessageBox::No);
    }

    if(ret == QMessageBox::No)
    {
        Modify_Individual_Tap_ComboBox(GPIO_Index,0,true);
        return;
    }
    else if(ret == QMessageBox::Yes)
    {
        for(int i = 0; i < (int)(sizeof(SPI1_ComboBox)/sizeof(SPI1_ComboBox[0])); i++)
        {
            if(SPI1_ComboBox[i]->currentIndex() == 3)
                Modify_Individual_Tap_ComboBox(i+8,0,true); //Offset 8 unit of combobox
        }
    }

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
    int ret = 0xFF;
    bool I2C0_Conflict = false;
    QComboBox *I2C0_ComboBox[] = { ui->GPIO_0_CB, ui->GPIO_1_CB, NULL, NULL,
                                   ui->GPIO_4_CB, ui->GPIO_5_CB, NULL, NULL,
                                   ui->GPIO_8_CB, ui->GPIO_9_CB, NULL, NULL,
                                   ui->GPIO_12_CB, ui->GPIO_13_CB, NULL, NULL,
                                   ui->GPIO_16_CB, ui->GPIO_17_CB, NULL, NULL,
                                   ui->GPIO_20_CB, ui->GPIO_21_CB};
    if(GPIO_Index > 19)
    {
        if( (ui->GPIO_0_CB->currentIndex() == 4) || (ui->GPIO_4_CB->currentIndex() == 4) || (ui->GPIO_8_CB->currentIndex() == 4) || (ui->GPIO_12_CB->currentIndex() == 4) || (ui->GPIO_16_CB->currentIndex() == 4) )
            I2C0_Conflict = true;
    }
    else if(GPIO_Index > 15)
    {
        if( (ui->GPIO_0_CB->currentIndex() == 4) || (ui->GPIO_4_CB->currentIndex() == 4) || (ui->GPIO_8_CB->currentIndex() == 4) || (ui->GPIO_12_CB->currentIndex() == 4) || (ui->GPIO_20_CB->currentIndex() == 3) )
            I2C0_Conflict = true;
    }
    else if(GPIO_Index > 11)
    {
        if( (ui->GPIO_0_CB->currentIndex() == 4) || (ui->GPIO_4_CB->currentIndex() == 4) || (ui->GPIO_8_CB->currentIndex() == 4) || (ui->GPIO_16_CB->currentIndex() == 4) || (ui->GPIO_20_CB->currentIndex() == 3) )
            I2C0_Conflict = true;
    }
    else if(GPIO_Index > 7)
    {
        if( (ui->GPIO_0_CB->currentIndex() == 4) || (ui->GPIO_4_CB->currentIndex() == 4) || (ui->GPIO_12_CB->currentIndex() == 4) || (ui->GPIO_16_CB->currentIndex() == 4) || (ui->GPIO_20_CB->currentIndex() == 3) )
            I2C0_Conflict = true;
    }
    else if(GPIO_Index > 3)
    {
        if( (ui->GPIO_0_CB->currentIndex() == 4) || (ui->GPIO_8_CB->currentIndex() == 4) || (ui->GPIO_12_CB->currentIndex() == 4) || (ui->GPIO_16_CB->currentIndex() == 4) || (ui->GPIO_20_CB->currentIndex() == 3) )
            I2C0_Conflict = true;
    }
    else
    {
        if( (ui->GPIO_4_CB->currentIndex() == 4) || (ui->GPIO_8_CB->currentIndex() == 4) || (ui->GPIO_12_CB->currentIndex() == 4) || (ui->GPIO_16_CB->currentIndex() == 4) || (ui->GPIO_20_CB->currentIndex() == 3) )
            I2C0_Conflict = true;
    }

    if(I2C0_Conflict)
    {
        ret = QMessageBox::warning(this, tr("Setting Conflict!"),
                                         tr("I2C0 Setting Conflict!\n"
                                            "Do you want to change your I2C0 setting?"),
                                         QMessageBox::Yes | QMessageBox::No);
    }

    if(ret == QMessageBox::No)
    {
        Modify_Individual_Tap_ComboBox(GPIO_Index,0,true);
        return;
    }
    else if(ret == QMessageBox::Yes)
    {
        for(int i = 0; i < (int)(sizeof(I2C0_ComboBox)/sizeof(I2C0_ComboBox[0])); i++)
        {
            if(I2C0_ComboBox[i] == NULL)
                continue;

            if(i > 19)
            {
                if(I2C0_ComboBox[i]->currentIndex() == 3)
                    Modify_Individual_Tap_ComboBox(i,0,true);
            }
            else
            {
                if(I2C0_ComboBox[i]->currentIndex() == 4)
                    Modify_Individual_Tap_ComboBox(i,0,true);
            }
        }
    }

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
        case 12:
        case 13:
            Modify_Individual_Tap_ComboBox(12,4,true);
            Modify_Individual_Tap_ComboBox(13,4,false);
            ui->GPIO_14_CB->setCurrentIndex(ui->GPIO_14_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(14,0,true): ui->GPIO_14_CB->currentIndex());
            ui->GPIO_15_CB->setCurrentIndex(ui->GPIO_15_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(15,0,true): ui->GPIO_15_CB->currentIndex());
            break;
        case 16:
        case 17:
            Modify_Individual_Tap_ComboBox(16,4,true);
            Modify_Individual_Tap_ComboBox(17,4,false);
            ui->GPIO_18_CB->setCurrentIndex(ui->GPIO_18_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(18,0,true): ui->GPIO_18_CB->currentIndex());
            ui->GPIO_19_CB->setCurrentIndex(ui->GPIO_19_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(19,0,true): ui->GPIO_19_CB->currentIndex());
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

void MainWindow::Set_Individual_Tap_I2C1(int GPIO_Index)
{
    int ret = 0xFF;
    bool I2C1_Conflict = false;
    QComboBox *I2C1_ComboBox[] = { ui->GPIO_2_CB, ui->GPIO_3_CB, NULL, NULL,
                                   ui->GPIO_6_CB, ui->GPIO_7_CB, NULL, NULL,
                                   ui->GPIO_10_CB, ui->GPIO_11_CB, NULL, NULL,
                                   ui->GPIO_14_CB, ui->GPIO_15_CB, NULL, NULL,
                                   ui->GPIO_18_CB, ui->GPIO_19_CB, NULL, NULL,
                                   NULL, NULL, NULL, NULL,
                                   ui->GPIO_26_CB, ui->GPIO_27_CB};
    if(GPIO_Index > 25)
    {
        if( (ui->GPIO_2_CB->currentIndex() == 4) || (ui->GPIO_6_CB->currentIndex() == 4) || (ui->GPIO_10_CB->currentIndex() == 4) || (ui->GPIO_14_CB->currentIndex() == 4) || (ui->GPIO_18_CB->currentIndex() == 4) )
            I2C1_Conflict = true;
    }
    else if(GPIO_Index > 17)
    {
        if( (ui->GPIO_2_CB->currentIndex() == 4) || (ui->GPIO_6_CB->currentIndex() == 4) || (ui->GPIO_10_CB->currentIndex() == 4) || (ui->GPIO_14_CB->currentIndex() == 4) || (ui->GPIO_26_CB->currentIndex() == 4) )
            I2C1_Conflict = true;
    }
    else if(GPIO_Index > 13)
    {
        if( (ui->GPIO_2_CB->currentIndex() == 4) || (ui->GPIO_6_CB->currentIndex() == 4) || (ui->GPIO_10_CB->currentIndex() == 4) || (ui->GPIO_18_CB->currentIndex() == 4) || (ui->GPIO_26_CB->currentIndex() == 4) )
            I2C1_Conflict = true;
    }
    else if(GPIO_Index > 9)
    {
        if( (ui->GPIO_2_CB->currentIndex() == 4) || (ui->GPIO_6_CB->currentIndex() == 4) || (ui->GPIO_14_CB->currentIndex() == 4) || (ui->GPIO_18_CB->currentIndex() == 4) || (ui->GPIO_26_CB->currentIndex() == 4) )
            I2C1_Conflict = true;
    }
    else if(GPIO_Index > 5)
    {
        if( (ui->GPIO_2_CB->currentIndex() == 4) || (ui->GPIO_10_CB->currentIndex() == 4) || (ui->GPIO_14_CB->currentIndex() == 4) || (ui->GPIO_18_CB->currentIndex() == 4) || (ui->GPIO_26_CB->currentIndex() == 4) )
            I2C1_Conflict = true;
    }
    else
    {
        if( (ui->GPIO_6_CB->currentIndex() == 4) || (ui->GPIO_10_CB->currentIndex() == 4) || (ui->GPIO_10_CB->currentIndex() == 4) || (ui->GPIO_18_CB->currentIndex() == 4) || (ui->GPIO_26_CB->currentIndex() == 4) )
            I2C1_Conflict = true;
    }

    if(I2C1_Conflict)
    {
        ret = QMessageBox::warning(this, tr("Setting Conflict!"),
                                         tr("I2C1 Setting Conflict!\n"
                                            "Do you want to change your I2C1 setting?"),
                                         QMessageBox::Yes | QMessageBox::No);
    }

    if(ret == QMessageBox::No)
    {
        Modify_Individual_Tap_ComboBox(GPIO_Index,0,true);
        return;
    }
    else if(ret == QMessageBox::Yes)
    {
        for(int i = 0; i < (int)(sizeof(I2C1_ComboBox)/sizeof(I2C1_ComboBox[0])); i++)
        {
            if(I2C1_ComboBox[i] == NULL)
                continue;

            if(I2C1_ComboBox[i]->currentIndex() == 4)
                Modify_Individual_Tap_ComboBox(i+2,0,true);
        }
    }

    switch(GPIO_Index)
    {
        case 2:
        case 3:
            Modify_Individual_Tap_ComboBox(2,4,true);
            Modify_Individual_Tap_ComboBox(3,4,false);
            break;
        case 6:
        case 7:
            Modify_Individual_Tap_ComboBox(6,4,true);
            Modify_Individual_Tap_ComboBox(7,4,false);
            break;
        case 10:
        case 11:
            Modify_Individual_Tap_ComboBox(10,4,true);
            Modify_Individual_Tap_ComboBox(11,4,false);
            break;
        case 14:
        case 15:
            Modify_Individual_Tap_ComboBox(14,4,true);
            Modify_Individual_Tap_ComboBox(15,4,false);
            break;
        case 18:
        case 19:
            Modify_Individual_Tap_ComboBox(18,4,true);
            Modify_Individual_Tap_ComboBox(19,4,false);
            break;
        case 26:
        case 27:
            Modify_Individual_Tap_ComboBox(26,4,true);
            Modify_Individual_Tap_ComboBox(27,4,false);
            break;
        default:
            break;
    }
}

void MainWindow::Set_Individual_Tap_UART0(int GPIO_Index)
{
    int ret = 0xFF;
    int UART0_GPIO_Pin[] = {0, 1, 12, 13, 16, 17};
    bool UART0_Conflict = false;
    QComboBox *Individual_Tap_ComboBox[] = { ui->GPIO_0_CB,  ui->GPIO_1_CB,  ui->GPIO_2_CB,  ui->GPIO_3_CB,  ui->GPIO_4_CB,
                                             ui->GPIO_5_CB,  ui->GPIO_6_CB,  ui->GPIO_7_CB,  ui->GPIO_8_CB,  ui->GPIO_9_CB,
                                             ui->GPIO_10_CB, ui->GPIO_11_CB, ui->GPIO_12_CB, ui->GPIO_13_CB, ui->GPIO_14_CB,
                                             ui->GPIO_15_CB, ui->GPIO_16_CB, ui->GPIO_17_CB};

    if(GPIO_Index > 15)
    {
        if( (Individual_Tap_ComboBox[0]->currentIndex() == 5) || ((Individual_Tap_ComboBox[12]->currentIndex() == 5)) )
            UART0_Conflict = true;
    }
    else if(GPIO_Index > 11)
    {
        if( (Individual_Tap_ComboBox[0]->currentIndex() == 5) || ((Individual_Tap_ComboBox[16]->currentIndex() == 5)) )
            UART0_Conflict = true;
    }
    else
    {
        if( (Individual_Tap_ComboBox[12]->currentIndex() == 5) || ((Individual_Tap_ComboBox[16]->currentIndex() == 5)) )
            UART0_Conflict = true;
    }

    if(UART0_Conflict)
    {
        ret = QMessageBox::warning(this, tr("Setting Conflict!"),
                                         tr("UART0 Setting Conflict!\n"
                                            "Do you want to change your UART0 setting?"),
                                         QMessageBox::Yes | QMessageBox::No);
    }

    if(ret == QMessageBox::No)
    {
        Modify_Individual_Tap_ComboBox(GPIO_Index,0,true);
        return;
    }
    else if(ret == QMessageBox::Yes)
    {
        for(int i = 0; i < (int)(sizeof(UART0_GPIO_Pin)/sizeof(UART0_GPIO_Pin[0])); i++)
        {
            if(Individual_Tap_ComboBox[UART0_GPIO_Pin[i]]->currentIndex() == 5)
                Modify_Individual_Tap_ComboBox(UART0_GPIO_Pin[i],0,true);
        }
    }

    switch(GPIO_Index)
    {
        case 0:
        case 1:
            Modify_Individual_Tap_ComboBox(0,5,true);
            Modify_Individual_Tap_ComboBox(1,5,false);
            ui->GPIO_2_CB->setCurrentIndex(ui->GPIO_2_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(2,0,true): ui->GPIO_2_CB->currentIndex());
            ui->GPIO_3_CB->setCurrentIndex(ui->GPIO_3_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(3,0,true): ui->GPIO_3_CB->currentIndex());
            break;
        case 12:
        case 13:
            Modify_Individual_Tap_ComboBox(12,5,true);
            Modify_Individual_Tap_ComboBox(13,5,false);
            ui->GPIO_14_CB->setCurrentIndex(ui->GPIO_14_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(14,0,true): ui->GPIO_14_CB->currentIndex());
            ui->GPIO_15_CB->setCurrentIndex(ui->GPIO_15_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(15,0,true): ui->GPIO_15_CB->currentIndex());
            break;
        case 16:
        case 17:
            Modify_Individual_Tap_ComboBox(16,5,true);
            Modify_Individual_Tap_ComboBox(17,5,false);
            ui->GPIO_18_CB->setCurrentIndex(ui->GPIO_18_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(18,0,true): ui->GPIO_18_CB->currentIndex());
            ui->GPIO_19_CB->setCurrentIndex(ui->GPIO_19_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(19,0,true): ui->GPIO_19_CB->currentIndex());
            break;
        default:
            break;
    }
}

void MainWindow::Set_Individual_Tap_UART1(int GPIO_Index)
{
    int ret = 0xFF;
    int UART1_GPIO_Pin[] = {4, 5, 8, 9};
    bool UART1_Conflict = false;
    QComboBox *Individual_Tap_ComboBox[] = { ui->GPIO_0_CB,  ui->GPIO_1_CB,  ui->GPIO_2_CB,  ui->GPIO_3_CB,  ui->GPIO_4_CB,
                                             ui->GPIO_5_CB,  ui->GPIO_6_CB,  ui->GPIO_7_CB,  ui->GPIO_8_CB,  ui->GPIO_9_CB};

    if(GPIO_Index > 7)
    {
        if(Individual_Tap_ComboBox[4]->currentIndex() == 5)
            UART1_Conflict = true;
    }
    else
    {
        if(Individual_Tap_ComboBox[8]->currentIndex() == 5)
            UART1_Conflict = true;
    }

    if(UART1_Conflict)
    {
        ret = QMessageBox::warning(this, tr("Setting Conflict!"),
                                         tr("UART1 Setting Conflict!\n"
                                            "Do you want to change your UART1 setting?"),
                                         QMessageBox::Yes | QMessageBox::No);
    }

    if(ret == QMessageBox::No)
    {
        Modify_Individual_Tap_ComboBox(GPIO_Index,0,true);
        return;
    }
    else if(ret == QMessageBox::Yes)
    {
        for(int i = 0; i < (int)(sizeof(UART1_GPIO_Pin)/sizeof(UART1_GPIO_Pin[0])); i++)
        {
            if(Individual_Tap_ComboBox[UART1_GPIO_Pin[i]]->currentIndex() == 5)
                Modify_Individual_Tap_ComboBox(UART1_GPIO_Pin[i],0,true);
        }
    }

    switch(GPIO_Index)
    {
        case 4:
        case 5:
            Modify_Individual_Tap_ComboBox(4,5,true);
            Modify_Individual_Tap_ComboBox(5,5,false);
            ui->GPIO_6_CB->setCurrentIndex(ui->GPIO_6_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(6,0,true): ui->GPIO_6_CB->currentIndex());
            ui->GPIO_7_CB->setCurrentIndex(ui->GPIO_7_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(7,0,true): ui->GPIO_7_CB->currentIndex());
            break;
        case 8:
        case 9:
            Modify_Individual_Tap_ComboBox(8,5,true);
            Modify_Individual_Tap_ComboBox(9,5,false);
            ui->GPIO_10_CB->setCurrentIndex(ui->GPIO_10_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(10,0,true): ui->GPIO_10_CB->currentIndex());
            ui->GPIO_11_CB->setCurrentIndex(ui->GPIO_11_CB->currentIndex() > 2 ? Modify_Individual_Tap_ComboBox(11,0,true): ui->GPIO_11_CB->currentIndex());
            break;
        default:
            break;
    }
}

void MainWindow::Set_Individual_Tap_ADC(int GPIO_Index)
{
    switch(GPIO_Index)
    {
        case 26:
            break;
        case 27:
            break;
        case 28:
            break;
        default:
            break;
    }
}
