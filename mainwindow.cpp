#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    presenter_p = new MainPresenter(this);

    ui->setupUi(this);
    ui->label_value->setText("0");
}

MainWindow::~MainWindow()
{
    delete ui;
    delete presenter_p;
}

void MainWindow::ShowResultMsg(QString msg) {
    ui->label_value->setText(msg);
}

void MainWindow::on_pushButtonIncrease_clicked()
{
    presenter_p->IncreaseValue();
}

void MainWindow::on_pushButtondecress_clicked()
{
    presenter_p->DecreaseValue();
}
