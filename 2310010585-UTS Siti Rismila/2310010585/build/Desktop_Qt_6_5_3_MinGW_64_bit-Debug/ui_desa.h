/********************************************************************************
** Form generated from reading UI file 'desa.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESA_H
#define UI_DESA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_desa
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *namaDesaLabel;
    QLineEdit *namaDesaLineEdit;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QDialog *desa)
    {
        if (desa->objectName().isEmpty())
            desa->setObjectName("desa");
        desa->resize(300, 261);
        formLayoutWidget = new QWidget(desa);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 20, 221, 51));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        namaDesaLabel = new QLabel(formLayoutWidget);
        namaDesaLabel->setObjectName("namaDesaLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, namaDesaLabel);

        namaDesaLineEdit = new QLineEdit(formLayoutWidget);
        namaDesaLineEdit->setObjectName("namaDesaLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, namaDesaLineEdit);

        tableView = new QTableView(desa);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 110, 261, 141));
        pushButton = new QPushButton(desa);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 70, 101, 31));

        retranslateUi(desa);

        QMetaObject::connectSlotsByName(desa);
    } // setupUi

    void retranslateUi(QDialog *desa)
    {
        desa->setWindowTitle(QCoreApplication::translate("desa", "Dialog", nullptr));
        namaDesaLabel->setText(QCoreApplication::translate("desa", "Nama Desa", nullptr));
        pushButton->setText(QCoreApplication::translate("desa", "Simpan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class desa: public Ui_desa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESA_H
