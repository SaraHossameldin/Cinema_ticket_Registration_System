#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_pushButtonLogin_clicked();

    void on_pushButtonRegister_clicked();

    void on_lineEditUsername_cursorPositionChanged(int arg1, int arg2);

    void on_lineEditPassword_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::LoginWindow *ui;
};
#endif // LOGINWINDOW_H
