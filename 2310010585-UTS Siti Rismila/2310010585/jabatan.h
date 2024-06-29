#ifndef JABATAN_H
#define JABATAN_H

#include <QDialog>
#include <QString>

namespace Ui {
class jabatan;
}

class jabatan : public QDialog
{
    Q_OBJECT

public:
    explicit jabatan(QWidget *parent = nullptr);
    ~jabatan();

    jabatan(QString nmJabatan);

    void setNmJabatan(QString nmJabatan);
    QString getNmJabatan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::jabatan *ui;

    QString nmJabatan;
};

#endif // JABATAN_H
