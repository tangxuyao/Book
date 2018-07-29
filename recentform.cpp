#include "recentform.h"
#include "ui_recentform.h"

RecentForm::RecentForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RecentForm)
{
    ui->setupUi(this);
}

RecentForm::~RecentForm()
{
    delete ui;
}
