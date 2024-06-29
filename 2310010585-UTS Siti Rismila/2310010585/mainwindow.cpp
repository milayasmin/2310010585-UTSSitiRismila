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

void MainWindow::on_pushButton_clicked()
{
    uiAdmin = new admin(this);
    uiAdmin->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    uiDesa = new desa(this);
    uiDesa->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    uiJabatan = new jabatan(this);
    uiJabatan->show();
}

