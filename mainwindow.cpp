#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signindialog.h"
#include "recentform.h"

#include <QMessageBox>
#include <QResizeEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    recentForm(new RecentForm)
{
    ui->setupUi(this);

    QPalette debugP = palette();
    debugP.setColor(QPalette::Background, QColor(255, 0, 0));

    recentForm->setPalette(debugP);
    ui->container->addWidget(recentForm);
    ui->container->setCurrentIndex(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    QSize size = event->size();
    int w = size.width();
    int h = size.height();

    ui->container->resize(w, h);
    printf("resizeEvent: %d, %d\n", w, h);
}


