#include "ui_mainwindow.h"
#include "mainwindow.h"
#include"util.h"


MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    move((QApplication::desktop()->width() - this->width())/2, (QApplication::desktop()->height() - this->height())/2);
    ui->setupUi(this);
    connect(ui->btn_envAutoConfig, SIGNAL(clicked()), this,SLOT(slot_clicked_btn_dmdManage()));
    connect(ui->btn_dmdManage, SIGNAL(clicked()),this, SLOT(slot_clicked_btn_envAutoConfig()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

    int i=10;
void MainWindow::slot_clicked_btn_dmdManage()
{
   if(m_venvConfigDlg!=nullptr) delete m_venvConfigDlg ;
    m_venvConfigDlg=new EnvAutoConfigDialog();
    m_venvConfigDlg->show();

}

void MainWindow::slot_clicked_btn_envAutoConfig(){


}
