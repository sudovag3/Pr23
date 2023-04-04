#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionFile,SIGNAL(triggered()),SLOT(loadFile()));
    connect(ui->pushButton, SIGNAL(clicked()),SLOT(pushButton()));
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::loadFile()
{
    QString FileName = QFileDialog::getOpenFileName();
    FileName.replace(QString('/'), QString("\\"));
    ReadF = new ReadFile(FileName);
    ReadF->ReadF();
}
void MainWindow::pushButton()
{
    bool ok;
    int x = ui->lineEdit->text().toInt(&ok);
    if (ok) {
        ui->liney->setText(QString::number((*ReadF)[x]));
    }
   }
