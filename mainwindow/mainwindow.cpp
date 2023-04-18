#include "mainwindow.h"
#include "./ui_mainwindow.h"

double mainVal;
bool addTrig;
bool subTrig;
bool mulTrig;
bool divTrig;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->display->setText(QString::number(mainVal));

    QPushButton *numButtons[10];
    for (int i = 0; i<10; ++i){
        QString butName = "button_" + QString::number(i);
        numButtons[i] = MainWindow::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butval = button->text();
    QString displayVal = ui->display->text();
    if()
}
