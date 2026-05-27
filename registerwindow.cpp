#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "Users.h"
#include "welcomewindow.h"


RegisterWindow::RegisterWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);


    ui->labelAlreadyExisting->setVisible(false);
    ui->labelNotMatching->setVisible(false);
    ui->labelAgeError->setVisible(false);
    ui->labelFilledError->setVisible(false);
}


RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_pushButtonRegisterWindow_clicked()
{
    bool errors = false;

    QString username= ui->lineEditUsernameRegister->text();
    QString password = ui->lineEditPasswordRegister->text();
    QString retype = ui->lineEditRetypePassword->text();
    QString day = ui->lineEditDayNum->text();
    QString year = ui->lineEditYear->text();


    QString month = ui->comboBoxMonth->currentText();


    bool actionGenre = ui->checkBoxAction->isChecked();
    bool comedyGenre = ui->checkBoxComedy->isChecked();
    bool romanceGenre = ui->checkBoxRomance->isChecked();
    bool dramaGenre = ui->checkBoxDrama->isChecked();
    bool horrorGenre = ui->checkBoxHorror->isChecked();
    bool otherGenre = ui->checkBoxOther->isChecked();

    bool male = ui->radioButtonMale->isChecked();
    bool female = ui->radioButtonFemale->isChecked();
    bool userAccount = ui->radioButtonUser->isChecked();
    bool adminAccount = ui->radioButtonAdmin->isChecked();

    for(int i = 0; i < usersCount; i++)
    {
        if (username == usernames[i])
        {
            ui->labelAlreadyExisting->setVisible(true);
            errors = true;
        }
    }

    if (password != retype)
    {
        ui->labelNotMatching->setVisible(true);
        errors = true;
    }
    int x=year.toInt();

    int age = 2024 - x;
    if (age < 12)
    {
        ui->labelAgeError->setVisible(true);
        errors = true;
    }

    if (username == "" || password == "" || retype == ""
        || month == "" || day == "" || year == ""
        || (!male && !female) || (!userAccount && !adminAccount)
        || (!actionGenre && !comedyGenre && !romanceGenre && !dramaGenre && !horrorGenre && !otherGenre))
    {
        ui->labelFilledError->setVisible(true);
        errors = true;
    }
    if (!errors)
    {
        usernames[usersCount] = username;
        passwords[usersCount] = password;
        ages[usersCount] = age;
        usersCount++;

        WelcomeWindow* welcomeWindow = new WelcomeWindow(username, age,this);
        welcomeWindow->show();
        this->close();

    }
}






