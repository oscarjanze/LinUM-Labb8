#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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


void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    int integer_value = ui->lineEdit->text().toInt();

    ui->spinBox->setSingleStep(integer_value);
    ui->spinBox_2->setSingleStep(integer_value);
    ui->spinBox_3->setSingleStep(integer_value);
}

void MainWindow::on_pushButton_3_clicked()
{
    qApp->exit();
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->spinBox->value() == 255)
    {
        QMessageBox msgBox;
        msgBox.setText("Maximum value reached!!");
        msgBox.setInformativeText("Do you understand?");
        msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
        int ret = msgBox.exec();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if (ui->spinBox->value() < 1)
    {
        QMessageBox msgBox;
        msgBox.setText("Minimum value reached!!");
        msgBox.setInformativeText("Do you understand?");
        msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
        int ret = msgBox.exec();
    }
}
