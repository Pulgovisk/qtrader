#include "qtradermainwindow.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QTraderMainWindow w;
    w.show();
    return a.exec();
}
