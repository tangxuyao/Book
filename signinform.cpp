#include "signinform.h"
#include "ui_signinform.h"

SignInForm::SignInForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignInForm)
{
    ui->setupUi(this);
}

SignInForm::~SignInForm()
{
    delete ui;
}
