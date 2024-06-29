#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include <QString>

namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

    admin(QString username, QString password, int idJabatan);

    void setUsername(QString username);
    QString getUsername();

    void setPassword(QString password);
    QString getPassword();

    void setIdJabatan(int idJabatan);
    int getIdJabatan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::admin *ui;

    QString username, password;
    int idJabatan;
};

#endif // ADMIN_H
