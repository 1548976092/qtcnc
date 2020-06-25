#include "mainwindow.h"
#include <QApplication>
#include "stdio.h"


int main(int argc, char *argv[])
{
	
	printf("********qtcnc go**********\n");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
