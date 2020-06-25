#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots://信号槽
    void estop(void);
    void power(void);
    void add(void);
	void neg(void);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
