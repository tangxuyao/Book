#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "recentform.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void resizeEvent(QResizeEvent *event) override;

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    RecentForm* recentForm;
};

#endif // MAINWINDOW_H
