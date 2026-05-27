/********************************************************************************
** Form generated from reading UI file 'WelcomeWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *labelHello;
    QLabel *labelImage;
    QLabel *labelWelcome;
    QPushButton *pushButtonLogout;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(799, 581);
        labelHello = new QLabel(Dialog);
        labelHello->setObjectName("labelHello");
        labelHello->setGeometry(QRect(50, 30, 58, 16));
        labelImage = new QLabel(Dialog);
        labelImage->setObjectName("labelImage");
        labelImage->setGeometry(QRect(50, 60, 471, 301));
        labelWelcome = new QLabel(Dialog);
        labelWelcome->setObjectName("labelWelcome");
        labelWelcome->setGeometry(QRect(230, 80, 131, 41));
        pushButtonLogout = new QPushButton(Dialog);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(50, 380, 100, 31));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        labelHello->setText(QCoreApplication::translate("Dialog", "Hello", nullptr));
        labelImage->setText(QCoreApplication::translate("Dialog", "image", nullptr));
        labelWelcome->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:24pt; font-style:italic;\">Welcome</span></p></body></html>", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("Dialog", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
