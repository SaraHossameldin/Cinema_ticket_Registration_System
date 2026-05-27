#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include <QString>
#include <QLabel>
#include <QPixmap>
#include <QApplication>
#include "loginwindow.h"
WelcomeWindow::WelcomeWindow(QString username, int age, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);

   QLabel* helloLabel = new QLabel(this);
    helloLabel->setText("Hello " + username + "  " + QString::number(age)+" ");

   QPixmap pix("C:\\Users\\sarah\\Desktop\\Git_ cloned_Assignment1\\download.jpeg");
    int w= ui->label_2_Image->width();
   int h=ui->label_2_Image->height();
    ui->label_2_Image->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}


void WelcomeWindow::on_pushButton_windows_sgnout_clicked()
{
    hide();
    LoginWindow* Login= new LoginWindow(this);
    Login->show();

}

