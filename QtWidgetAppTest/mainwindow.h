#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_windowIconChanged(const QIcon &icon);

    void on_lineEdit_3_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_4_clicked();

    void on_lineEdit_3_returnPressed();

    void on_spinBox_4_valueChanged(int arg1);

    void on_lineEdit_3_textEdited(const QString &arg1);

    void on_spinBox_valueChanged(int arg1);

private:
    void LevelWrite();
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
