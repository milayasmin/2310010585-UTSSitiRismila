/********************************************************************************
** Form generated from reading UI file 'jabatan.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JABATAN_H
#define UI_JABATAN_H

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

class Ui_jabatan
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *namaJabatanLabel;
    QLineEdit *namaJabatanLineEdit;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QDialog *jabatan)
    {
        if (jabatan->objectName().isEmpty())
            jabatan->setObjectName("jabatan");
        jabatan->resize(300, 261);
        formLayoutWidget = new QWidget(jabatan);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 20, 221, 51));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        namaJabatanLabel = new QLabel(formLayoutWidget);
        namaJabatanLabel->setObjectName("namaJabatanLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, namaJabatanLabel);

        namaJabatanLineEdit = new QLineEdit(formLayoutWidget);
        namaJabatanLineEdit->setObjectName("namaJabatanLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, namaJabatanLineEdit);

        pushButton = new QPushButton(jabatan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 70, 101, 31));
        tableView = new QTableView(jabatan);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 110, 261, 141));

        retranslateUi(jabatan);

        QMetaObject::connectSlotsByName(jabatan);
    } // setupUi

    void retranslateUi(QDialog *jabatan)
    {
        jabatan->setWindowTitle(QCoreApplication::translate("jabatan", "Dialog", nullptr));
        namaJabatanLabel->setText(QCoreApplication::translate("jabatan", "Nama Jabatan", nullptr));
        pushButton->setText(QCoreApplication::translate("jabatan", "Simpan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class jabatan: public Ui_jabatan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JABATAN_H
