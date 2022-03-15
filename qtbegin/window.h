#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;
class Window : public QWidget
{
    Q_OBJECT

public: 
    explicit Window(QWidget *parent = 0);

signals:
    void counterReached();

private slots:
    void slotButtonClicked(bool checked);

private:
    int m_counter;
    QPushButton *m_button;
};

class QtSignalSlot : public QObject
{
    Q_OBJECT

signals:
    //void QApplication::aboutQt();

private:
    QPushButton *p_button;
};



#endif
