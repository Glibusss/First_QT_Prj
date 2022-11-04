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


void MainWindow::on_pushButton_2_clicked()
{
    QApplication::quit();
}


void MainWindow::on_pushButton_clicked()
{
    double first,second;
   QString x=ui->lineEdit_2->text();
   QString y = ui->lineEdit->text();
   bool ok;
   first =x.toDouble(&ok);
   second = y.toDouble(&ok);

   ui->result->setText(QString::number((first/100)*second));

}

