#ifndef ENVAUTOCONFIGDIALOG_H
#define ENVAUTOCONFIGDIALOG_H

#include <QDialog>

namespace Ui {
class EnvAutoConfigDialog;
}

class EnvAutoConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EnvAutoConfigDialog(QWidget *parent = nullptr);
    ~EnvAutoConfigDialog();

private:
    Ui::EnvAutoConfigDialog *ui;
};

#endif // ENVAUTOCONFIGDIALOG_H
