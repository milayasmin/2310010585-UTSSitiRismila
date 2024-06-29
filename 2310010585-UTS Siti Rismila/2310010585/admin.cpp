#include "admin.h"
#include "ui_admin.h"

admin::admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}

admin::admin(QString username, QString password, int idJabatan)
{
    this->username = username;
    this->password = password;
    this->idJabatan = idJabatan;
}

void admin::setUsername(QString username)
{
    this->username = username;
}

QString admin::getUsername()
{
    return this->username;
}

void admin::setPassword(QString password)
{
    this->password = password;
}

QString admin::getPassword()
{
    return this->password;
}

void admin::setIdJabatan(int idJabatan)
{
    this->idJabatan = idJabatan;
}

int admin::getIdJabatan()
{
    return this->idJabatan;
}

void admin::on_pushButton_clicked()
{
    admin a;

    a.setUsername(ui->usernameLineEdit->text());
    a.setPassword(ui->passwordLineEdit->text());
    a.setIdJabatan(ui->iDJabatanLineEdit->text().toInt());

    qDebug()<<"Username : "<<a.getUsername()<<"\n";
    qDebug()<<"Password : "<<a.getPassword()<<"\n";
    qDebug()<<"ID Jabatan : "<<a.getIdJabatan()<<"\n";
}

