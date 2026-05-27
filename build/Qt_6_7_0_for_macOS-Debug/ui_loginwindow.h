/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelUsername;
    QLineEdit *lineEditUsername;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonRegister;
    QLabel *labelError;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(800, 600);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        labelUsername = new QLabel(centralwidget);
        labelUsername->setObjectName("labelUsername");
        labelUsername->setGeometry(QRect(60, 60, 71, 16));
        lineEditUsername = new QLineEdit(centralwidget);
        lineEditUsername->setObjectName("lineEditUsername");
        lineEditUsername->setGeometry(QRect(140, 50, 141, 31));
        labelPassword = new QLabel(centralwidget);
        labelPassword->setObjectName("labelPassword");
        labelPassword->setGeometry(QRect(60, 100, 61, 16));
        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(140, 90, 141, 31));
        lineEditPassword->setEchoMode(QLineEdit::Password);
        pushButtonLogin = new QPushButton(centralwidget);
        pushButtonLogin->setObjectName("pushButtonLogin");
        pushButtonLogin->setGeometry(QRect(60, 170, 100, 31));
        pushButtonRegister = new QPushButton(centralwidget);
        pushButtonRegister->setObjectName("pushButtonRegister");
        pushButtonRegister->setGeometry(QRect(200, 170, 100, 31));
        labelError = new QLabel(centralwidget);
        labelError->setObjectName("labelError");
        labelError->setGeometry(QRect(60, 140, 221, 16));
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 37));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        labelUsername->setText(QCoreApplication::translate("LoginWindow", "Username", nullptr));
        labelPassword->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        pushButtonRegister->setText(QCoreApplication::translate("LoginWindow", "Register", nullptr));
        labelError->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" color:#e94025;\">Error: wrong username or password</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
