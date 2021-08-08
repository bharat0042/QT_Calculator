#include "mainwindow.h"

#include <QApplication>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    app.setWindowIcon(QIcon("calc.png"));
    MainWindow window;
    window.show();
    return app.exec();
}
