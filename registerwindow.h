#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QDialog>

namespace Ui {
class RegisterWindow;
}

class RegisterWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterWindow(QWidget *parent = nullptr);
    ~RegisterWindow();

private slots:
    void on_labelAlreadyExisting_linkActivated(const QString &link);

    void on_pushButtonRegisterWindow_clicked();

private:
    Ui::RegisterWindow *ui;
};

#endif // REGISTERWINDOW_H
