#include "jabatan.h"
#include "ui_jabatan.h"

jabatan::jabatan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::jabatan)
{
    ui->setupUi(this);
}

jabatan::~jabatan()
{
    delete ui;
}

jabatan::jabatan(QString nmJabatan)
{
    this->nmJabatan = nmJabatan;
}

void jabatan::setNmJabatan(QString nmJabatan)
{
    this->nmJabatan = nmJabatan;
}

QString jabatan::getNmJabatan()
{
    return this->nmJabatan;
}

void jabatan::on_pushButton_clicked()
{
    jabatan j;

    j.setNmJabatan(ui->namaJabatanLineEdit->text());

    qDebug()<<"Nama Jabatan : "<<j.getNmJabatan()<<"\n";
}

