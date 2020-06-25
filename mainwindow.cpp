#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "rcs.hh"
#include "emc.hh"
#include "emcglb.c"		/* these decls */

#include "shcom.hh"  


void MainWindow::estop()
{
    static int p=0;
    if(p == 0)
    {
        sendEstopReset();
        p=1;
    }
    else
    {
        sendEstop();
        p=0;
    }
}
void MainWindow::power()
{
    static int p=0;
    if(p == 0)
    {
        sendMachineOn();
		sendManual();
        p=1;
    }
    else
    {
        sendMachineOff();
        p=0;
    }
}
void MainWindow::add()
{
	//sendJogCont(0,0,100);

	sendJogIncr(0,1,10,1);
}
void MainWindow::neg()
{
	//sendJogCont(0,0,-100);
	sendJogIncr(0,1,-10,1);
	checkStatus();
}



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    printf("********go**********");
	

    tryNml();
	sendDebug(0xfffffff);
    QObject::connect(ui->estop,SIGNAL(clicked(bool)),this,SLOT(estop()));
    QObject::connect(ui->power,SIGNAL(clicked(bool)),this,SLOT(power()));
    QObject::connect(ui->add,SIGNAL(clicked(bool)),this,SLOT(add()));
	QObject::connect(ui->neg,SIGNAL(clicked(bool)),this,SLOT(neg()));
	
	printf("******************");
}

MainWindow::~MainWindow()
{
    delete ui;
}
