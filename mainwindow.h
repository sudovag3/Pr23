#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "readfile.h"

namespace Ui {
    class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    ReadFile *ReadF;
    Ui::MainWindow *ui;
public slots:
    void loadFile();
    void pushButton();
};

#endif // MAINWINDOW_H
