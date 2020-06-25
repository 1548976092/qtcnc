/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionRecent_files;
    QAction *actionEdit;
    QAction *actionReload;
    QAction *actionSave_gcode_as;
    QAction *actionProperties;
    QAction *actionEdit_tool_table;
    QAction *actionLadder_edit;
    QWidget *centralWidget;
    QPushButton *estop;
    QPushButton *power;
    QRadioButton *x;
    QRadioButton *y;
    QRadioButton *z;
    QPushButton *add;
    QPushButton *neg;
    QMenuBar *menuBar;
    QMenu *menuOpen;
    QMenu *menuMachine;
    QMenu *menuView;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 400);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionRecent_files = new QAction(MainWindow);
        actionRecent_files->setObjectName(QStringLiteral("actionRecent_files"));
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QStringLiteral("actionEdit"));
        actionReload = new QAction(MainWindow);
        actionReload->setObjectName(QStringLiteral("actionReload"));
        actionSave_gcode_as = new QAction(MainWindow);
        actionSave_gcode_as->setObjectName(QStringLiteral("actionSave_gcode_as"));
        actionProperties = new QAction(MainWindow);
        actionProperties->setObjectName(QStringLiteral("actionProperties"));
        actionEdit_tool_table = new QAction(MainWindow);
        actionEdit_tool_table->setObjectName(QStringLiteral("actionEdit_tool_table"));
        actionLadder_edit = new QAction(MainWindow);
        actionLadder_edit->setObjectName(QStringLiteral("actionLadder_edit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        estop = new QPushButton(centralWidget);
        estop->setObjectName(QStringLiteral("estop"));
        estop->setGeometry(QRect(10, 0, 51, 27));
        estop->setAutoDefault(false);
        power = new QPushButton(centralWidget);
        power->setObjectName(QStringLiteral("power"));
        power->setGeometry(QRect(60, 0, 61, 27));
        x = new QRadioButton(centralWidget);
        x->setObjectName(QStringLiteral("x"));
        x->setGeometry(QRect(40, 60, 21, 22));
        y = new QRadioButton(centralWidget);
        y->setObjectName(QStringLiteral("y"));
        y->setGeometry(QRect(70, 60, 21, 22));
        z = new QRadioButton(centralWidget);
        z->setObjectName(QStringLiteral("z"));
        z->setGeometry(QRect(100, 60, 21, 22));
        add = new QPushButton(centralWidget);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(80, 80, 31, 27));
        neg = new QPushButton(centralWidget);
        neg->setObjectName(QStringLiteral("neg"));
        neg->setGeometry(QRect(40, 80, 31, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        menuOpen = new QMenu(menuBar);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        menuMachine = new QMenu(menuBar);
        menuMachine->setObjectName(QStringLiteral("menuMachine"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuOpen->menuAction());
        menuBar->addAction(menuMachine->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuOpen->addAction(actionOpen);
        menuOpen->addAction(actionRecent_files);
        menuOpen->addAction(actionEdit);
        menuOpen->addAction(actionReload);
        menuOpen->addAction(actionSave_gcode_as);
        menuOpen->addAction(actionProperties);
        menuOpen->addAction(actionEdit_tool_table);
        menuOpen->addAction(actionLadder_edit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "open", 0));
        actionRecent_files->setText(QApplication::translate("MainWindow", "recent files", 0));
        actionEdit->setText(QApplication::translate("MainWindow", "edit", 0));
        actionReload->setText(QApplication::translate("MainWindow", "reload", 0));
        actionSave_gcode_as->setText(QApplication::translate("MainWindow", "save gcode as", 0));
        actionProperties->setText(QApplication::translate("MainWindow", "properties", 0));
        actionEdit_tool_table->setText(QApplication::translate("MainWindow", "edit tool table", 0));
        actionLadder_edit->setText(QApplication::translate("MainWindow", "ladder edit", 0));
#ifndef QT_NO_WHATSTHIS
        estop->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>estop</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        estop->setText(QApplication::translate("MainWindow", "estop", 0));
        power->setText(QApplication::translate("MainWindow", "power", 0));
        x->setText(QString());
        y->setText(QString());
        z->setText(QString());
        add->setText(QApplication::translate("MainWindow", "+", 0));
        neg->setText(QApplication::translate("MainWindow", "-", 0));
        menuOpen->setTitle(QApplication::translate("MainWindow", "file", 0));
        menuMachine->setTitle(QApplication::translate("MainWindow", "machine", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "view", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
