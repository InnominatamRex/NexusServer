#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    SslServer *server = new SslServer(this);

    SslServer *server;
    server = new SslServer(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}
