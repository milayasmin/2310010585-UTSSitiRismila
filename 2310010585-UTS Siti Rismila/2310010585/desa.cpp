#include "desa.h"
#include "ui_desa.h"

desa::desa(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::desa)
{
    ui->setupUi(this);
}

desa::~desa()
{
    delete ui;
}

desa::desa(QString nmDesa)
{
    this->nmDesa = nmDesa;
}

void desa::setNmDesa(QString nmDesa)
{
    this->nmDesa = nmDesa;
}

QString desa::getNmDesa()
{
    return this->nmDesa;
}

void desa::on_pushButton_clicked()
{
    desa d;

    d.setNmDesa(ui->namaDesaLineEdit->text());

    qDebug()<<"Nama Desa : "<<d.getNmDesa()<<"\n";
}

