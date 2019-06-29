#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mRd_xls mr;
    mr.readXls();
}

MainWindow::~MainWindow()
{
    delete ui;
}
