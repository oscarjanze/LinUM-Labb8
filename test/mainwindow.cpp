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


void MainWindow::on_spinBox_valueChanged(int arg1)
{
    //connect(QSpinBox, SIGNAL(from(linedit)), this, SLOT());
}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    int integer_value = ui->lineEdit->text().toInt();

    ui->spinBox->setSingleStep(integer_value);
}
