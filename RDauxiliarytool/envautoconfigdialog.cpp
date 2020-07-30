#include "envautoconfigdialog.h"
#include "ui_envautoconfigdialog.h"
#include "util.h"

EnvAutoConfigDialog::EnvAutoConfigDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnvAutoConfigDialog)
{
    move((QApplication::desktop()->width() - this->width())/2, (QApplication::desktop()->height() - this->height())/2);
    ui->setupUi(this);
    connect(ui->btn_OKButton, SIGNAL(clicked()), this,SLOT(close()));
    connect(ui->btn_concelButton, SIGNAL(clicked()), this,SLOT(close()));
}

EnvAutoConfigDialog::~EnvAutoConfigDialog()
{
    delete ui;
}
