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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *estop;
    QPushButton *power;
    QPushButton *open;
    QPushButton *reopen;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *x;
    QRadioButton *y;
    QRadioButton *z;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *neg;
    QPushButton *add;
    QMenuBar *menuBar;
    QMenu *menuOpen;
    QMenu *menuMachine;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(932, 660);
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
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 311, 25));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        estop = new QPushButton(horizontalLayoutWidget);
        estop->setObjectName(QStringLiteral("estop"));
        estop->setAutoDefault(false);

        horizontalLayout_2->addWidget(estop);

        power = new QPushButton(horizontalLayoutWidget);
        power->setObjectName(QStringLiteral("power"));

        horizontalLayout_2->addWidget(power);

        open = new QPushButton(horizontalLayoutWidget);
        open->setObjectName(QStringLiteral("open"));

        horizontalLayout_2->addWidget(open);

        reopen = new QPushButton(horizontalLayoutWidget);
        reopen->setObjectName(QStringLiteral("reopen"));

        horizontalLayout_2->addWidget(reopen);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(310, 0, 311, 25));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 20, 91, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        x = new QRadioButton(horizontalLayoutWidget_3);
        x->setObjectName(QStringLiteral("x"));

        horizontalLayout_3->addWidget(x);

        y = new QRadioButton(horizontalLayoutWidget_3);
        y->setObjectName(QStringLiteral("y"));

        horizontalLayout_3->addWidget(y);

        z = new QRadioButton(horizontalLayoutWidget_3);
        z->setObjectName(QStringLiteral("z"));

        horizontalLayout_3->addWidget(z);

        horizontalLayoutWidget_4 = new QWidget(centralWidget);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(0, 59, 91, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        neg = new QPushButton(horizontalLayoutWidget_4);
        neg->setObjectName(QStringLiteral("neg"));

        horizontalLayout_4->addWidget(neg);

        add = new QPushButton(horizontalLayoutWidget_4);
        add->setObjectName(QStringLiteral("add"));

        horizontalLayout_4->addWidget(add);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 932, 23));
        menuOpen = new QMenu(menuBar);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        menuMachine = new QMenu(menuBar);
        menuMachine->setObjectName(QStringLiteral("menuMachine"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
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
        open->setText(QApplication::translate("MainWindow", "open", 0));
        reopen->setText(QApplication::translate("MainWindow", "reopen", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "begin", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "execute", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "pause", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "stop", 0));
        x->setText(QString());
        y->setText(QString());
        z->setText(QString());
        neg->setText(QApplication::translate("MainWindow", "-", 0));
        add->setText(QApplication::translate("MainWindow", "+", 0));
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
