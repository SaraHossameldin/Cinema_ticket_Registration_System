#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include "Users.h"
#include "registerwindow.h"
#include "welcomewindow.h"
#include<QString>
#include<QStringList>



LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->labelError->setVisible(false);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}



void LoginWindow::on_pushButtonLogin_clicked()
{
    QString username=ui->lineEditUsername->text();
    QString password=ui->lineEditPassword->text();
    bool successfullogin=false;

    for (int i=0;i<usersCount;i++)
    {
        if(username==usernames[i] && password==passwords[i])
        {
            successfullogin=true;
        hide();
     WelcomeWindow* Welcome= new WelcomeWindow(username,ages[i],this);
        Welcome->show();
     this->close();
        }

    }
    if(!successfullogin)
    {
        ui->labelError->setVisible(true);
    }

}


void LoginWindow::on_pushButtonRegister_clicked()
{
    hide();
    RegisterWindow* registerwindow=new RegisterWindow(this);
    registerwindow->show();
    this->close();
}







