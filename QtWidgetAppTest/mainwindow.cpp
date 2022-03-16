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
   qApp->exit();
}

void MainWindow::on_lineEdit_3_textEdited(const QString &arg1)
{
    int integer_value = ui->lineEdit->text().toInt();

    ui->spinBox->setSingleStep(integer_value);
    //ui->spinBox_1->setSingleStep(integer_value);
    //ui->spinBox_2->setSingleStep(integer_value);
    //ui->spinBox_3->setSingleStep(integer_value);
}
