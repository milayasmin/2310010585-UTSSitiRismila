#ifndef DESA_H
#define DESA_H

#include <QDialog>
#include <QString>

namespace Ui {
class desa;
}

class desa : public QDialog
{
    Q_OBJECT

public:
    explicit desa(QWidget *parent = nullptr);
    ~desa();

    desa(QString nmDesa);

    void setNmDesa(QString nmDesa);
    QString getNmDesa();

private slots:
    void on_pushButton_clicked();

private:
    Ui::desa *ui;

    QString nmDesa;
};

#endif // DESA_H
