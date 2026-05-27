/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *labelUsernameRegister;
    QLineEdit *lineEditUsernameRegister;
    QLabel *labelPasswordRegister;
    QLineEdit *lineEditPasswordRegister;
    QLabel *labelRetypePassword;
    QLineEdit *lineEditRetypePassword;
    QLabel *labelAlreadyExisting;
    QLabel *labelNotMatching;
    QGroupBox *groupBoxBirth;
    QLabel *labelMonth;
    QComboBox *comboBoxMonth;
    QLabel *labelYear;
    QLineEdit *lineEditDayNum;
    QLineEdit *lineEditYear;
    QLabel *labelDay;
    QLabel *labelAgeError;
    QGroupBox *groupBoxGender;
    QRadioButton *radioButtonMale;
    QRadioButton *radioButtonFemale;
    QGroupBox *groupBoxAccountType;
    QRadioButton *radioButtonUser;
    QRadioButton *radioButtonAdmin;
    QGroupBox *groupBoxFavouriteGenre;
    QCheckBox *checkBoxAction;
    QCheckBox *checkBoxComedy;
    QCheckBox *checkBoxRomance;
    QCheckBox *checkBoxDrama;
    QCheckBox *checkBoxHorror;
    QCheckBox *checkBoxOther;
    QPushButton *pushButtonRegisterWindow;
    QLabel *labelFilledError;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(789, 574);
        labelUsernameRegister = new QLabel(RegisterWindow);
        labelUsernameRegister->setObjectName("labelUsernameRegister");
        labelUsernameRegister->setGeometry(QRect(50, 20, 71, 16));
        lineEditUsernameRegister = new QLineEdit(RegisterWindow);
        lineEditUsernameRegister->setObjectName("lineEditUsernameRegister");
        lineEditUsernameRegister->setGeometry(QRect(180, 10, 181, 31));
        labelPasswordRegister = new QLabel(RegisterWindow);
        labelPasswordRegister->setObjectName("labelPasswordRegister");
        labelPasswordRegister->setGeometry(QRect(50, 60, 71, 16));
        lineEditPasswordRegister = new QLineEdit(RegisterWindow);
        lineEditPasswordRegister->setObjectName("lineEditPasswordRegister");
        lineEditPasswordRegister->setGeometry(QRect(180, 50, 181, 31));
        lineEditPasswordRegister->setEchoMode(QLineEdit::Password);
        labelRetypePassword = new QLabel(RegisterWindow);
        labelRetypePassword->setObjectName("labelRetypePassword");
        labelRetypePassword->setGeometry(QRect(50, 100, 111, 16));
        lineEditRetypePassword = new QLineEdit(RegisterWindow);
        lineEditRetypePassword->setObjectName("lineEditRetypePassword");
        lineEditRetypePassword->setGeometry(QRect(180, 90, 181, 31));
        lineEditRetypePassword->setEchoMode(QLineEdit::Password);
        labelAlreadyExisting = new QLabel(RegisterWindow);
        labelAlreadyExisting->setObjectName("labelAlreadyExisting");
        labelAlreadyExisting->setGeometry(QRect(380, 20, 121, 16));
        labelNotMatching = new QLabel(RegisterWindow);
        labelNotMatching->setObjectName("labelNotMatching");
        labelNotMatching->setGeometry(QRect(380, 100, 111, 16));
        groupBoxBirth = new QGroupBox(RegisterWindow);
        groupBoxBirth->setObjectName("groupBoxBirth");
        groupBoxBirth->setGeometry(QRect(40, 150, 321, 101));
        labelMonth = new QLabel(groupBoxBirth);
        labelMonth->setObjectName("labelMonth");
        labelMonth->setGeometry(QRect(10, 30, 58, 16));
        comboBoxMonth = new QComboBox(groupBoxBirth);
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->setObjectName("comboBoxMonth");
        comboBoxMonth->setGeometry(QRect(10, 50, 91, 32));
        labelYear = new QLabel(groupBoxBirth);
        labelYear->setObjectName("labelYear");
        labelYear->setGeometry(QRect(230, 30, 58, 16));
        lineEditDayNum = new QLineEdit(groupBoxBirth);
        lineEditDayNum->setObjectName("lineEditDayNum");
        lineEditDayNum->setGeometry(QRect(120, 50, 81, 31));
        lineEditYear = new QLineEdit(groupBoxBirth);
        lineEditYear->setObjectName("lineEditYear");
        lineEditYear->setGeometry(QRect(230, 50, 81, 31));
        labelDay = new QLabel(groupBoxBirth);
        labelDay->setObjectName("labelDay");
        labelDay->setGeometry(QRect(120, 30, 58, 16));
        labelAgeError = new QLabel(RegisterWindow);
        labelAgeError->setObjectName("labelAgeError");
        labelAgeError->setGeometry(QRect(370, 210, 131, 16));
        groupBoxGender = new QGroupBox(RegisterWindow);
        groupBoxGender->setObjectName("groupBoxGender");
        groupBoxGender->setGeometry(QRect(40, 280, 201, 91));
        radioButtonMale = new QRadioButton(groupBoxGender);
        radioButtonMale->setObjectName("radioButtonMale");
        radioButtonMale->setGeometry(QRect(10, 30, 101, 21));
        radioButtonFemale = new QRadioButton(groupBoxGender);
        radioButtonFemale->setObjectName("radioButtonFemale");
        radioButtonFemale->setGeometry(QRect(10, 50, 101, 21));
        groupBoxAccountType = new QGroupBox(RegisterWindow);
        groupBoxAccountType->setObjectName("groupBoxAccountType");
        groupBoxAccountType->setGeometry(QRect(300, 280, 201, 91));
        radioButtonUser = new QRadioButton(groupBoxAccountType);
        radioButtonUser->setObjectName("radioButtonUser");
        radioButtonUser->setGeometry(QRect(10, 30, 101, 21));
        radioButtonAdmin = new QRadioButton(groupBoxAccountType);
        radioButtonAdmin->setObjectName("radioButtonAdmin");
        radioButtonAdmin->setGeometry(QRect(10, 50, 101, 21));
        groupBoxFavouriteGenre = new QGroupBox(RegisterWindow);
        groupBoxFavouriteGenre->setObjectName("groupBoxFavouriteGenre");
        groupBoxFavouriteGenre->setGeometry(QRect(40, 390, 321, 131));
        checkBoxAction = new QCheckBox(groupBoxFavouriteGenre);
        checkBoxAction->setObjectName("checkBoxAction");
        checkBoxAction->setGeometry(QRect(10, 30, 85, 20));
        checkBoxComedy = new QCheckBox(groupBoxFavouriteGenre);
        checkBoxComedy->setObjectName("checkBoxComedy");
        checkBoxComedy->setGeometry(QRect(10, 60, 85, 20));
        checkBoxRomance = new QCheckBox(groupBoxFavouriteGenre);
        checkBoxRomance->setObjectName("checkBoxRomance");
        checkBoxRomance->setGeometry(QRect(10, 90, 85, 20));
        checkBoxDrama = new QCheckBox(groupBoxFavouriteGenre);
        checkBoxDrama->setObjectName("checkBoxDrama");
        checkBoxDrama->setGeometry(QRect(160, 30, 85, 20));
        checkBoxHorror = new QCheckBox(groupBoxFavouriteGenre);
        checkBoxHorror->setObjectName("checkBoxHorror");
        checkBoxHorror->setGeometry(QRect(160, 60, 85, 20));
        checkBoxOther = new QCheckBox(groupBoxFavouriteGenre);
        checkBoxOther->setObjectName("checkBoxOther");
        checkBoxOther->setGeometry(QRect(160, 90, 85, 20));
        pushButtonRegisterWindow = new QPushButton(RegisterWindow);
        pushButtonRegisterWindow->setObjectName("pushButtonRegisterWindow");
        pushButtonRegisterWindow->setGeometry(QRect(40, 531, 100, 31));
        labelFilledError = new QLabel(RegisterWindow);
        labelFilledError->setObjectName("labelFilledError");
        labelFilledError->setGeometry(QRect(150, 540, 151, 16));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        labelUsernameRegister->setText(QCoreApplication::translate("RegisterWindow", "Username", nullptr));
        labelPasswordRegister->setText(QCoreApplication::translate("RegisterWindow", "Password", nullptr));
        labelRetypePassword->setText(QCoreApplication::translate("RegisterWindow", "Retype Password", nullptr));
        labelAlreadyExisting->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ea5529;\">* Already Existing</span></p></body></html>", nullptr));
        labelNotMatching->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#eb5f2a;\">* Not matching</span></p></body></html>", nullptr));
        groupBoxBirth->setTitle(QCoreApplication::translate("RegisterWindow", "Date of Birth", nullptr));
        labelMonth->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        comboBoxMonth->setItemText(0, QCoreApplication::translate("RegisterWindow", "Jan", nullptr));
        comboBoxMonth->setItemText(1, QCoreApplication::translate("RegisterWindow", "Feb", nullptr));
        comboBoxMonth->setItemText(2, QCoreApplication::translate("RegisterWindow", "Mar", nullptr));
        comboBoxMonth->setItemText(3, QCoreApplication::translate("RegisterWindow", "Apr", nullptr));
        comboBoxMonth->setItemText(4, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        comboBoxMonth->setItemText(5, QCoreApplication::translate("RegisterWindow", "Jun", nullptr));
        comboBoxMonth->setItemText(6, QCoreApplication::translate("RegisterWindow", "Jul", nullptr));
        comboBoxMonth->setItemText(7, QCoreApplication::translate("RegisterWindow", "Aug", nullptr));
        comboBoxMonth->setItemText(8, QCoreApplication::translate("RegisterWindow", "Sep", nullptr));
        comboBoxMonth->setItemText(9, QCoreApplication::translate("RegisterWindow", "Oct", nullptr));
        comboBoxMonth->setItemText(10, QCoreApplication::translate("RegisterWindow", "Nov", nullptr));
        comboBoxMonth->setItemText(11, QCoreApplication::translate("RegisterWindow", "Dec", nullptr));

        labelYear->setText(QCoreApplication::translate("RegisterWindow", "Year", nullptr));
        labelDay->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        labelAgeError->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#eb632b;\">* Age is less than 12</span></p></body></html>", nullptr));
        groupBoxGender->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        radioButtonMale->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        radioButtonFemale->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        groupBoxAccountType->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type", nullptr));
        radioButtonUser->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        radioButtonAdmin->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        groupBoxFavouriteGenre->setTitle(QCoreApplication::translate("RegisterWindow", "Favourite Genre(s)", nullptr));
        checkBoxAction->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        checkBoxComedy->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        checkBoxRomance->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        checkBoxDrama->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        checkBoxHorror->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        checkBoxOther->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        pushButtonRegisterWindow->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        labelFilledError->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#eb632b;\">* All fields must be filled</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
