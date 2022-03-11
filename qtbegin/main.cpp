#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 QPushButton button;
 button.setText("Hello world !");
 QFont font ("Times");
 button.setFont(font);
 button.setToolTip("Linux VT-22");

 button.show();

 return app.exec();
}
