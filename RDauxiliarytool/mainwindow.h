#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "envautoconfigdialog.h"
QT_BEGIN_NAMESPACE

namespace Ui {
    class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    EnvAutoConfigDialog *m_venvConfigDlg=nullptr;
private slots:
    void slot_clicked_btn_envAutoConfig();
    void slot_clicked_btn_dmdManage();
};
#endif // MAINWINDOW_H
