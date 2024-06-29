/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

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

class Ui_admin
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QLabel *iDJabatanLabel;
    QLineEdit *iDJabatanLineEdit;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(300, 300);
        formLayoutWidget = new QWidget(admin);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 20, 221, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        usernameLabel = new QLabel(formLayoutWidget);
        usernameLabel->setObjectName("usernameLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, usernameLabel);

        usernameLineEdit = new QLineEdit(formLayoutWidget);
        usernameLineEdit->setObjectName("usernameLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, usernameLineEdit);

        passwordLabel = new QLabel(formLayoutWidget);
        passwordLabel->setObjectName("passwordLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(formLayoutWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEdit);

        iDJabatanLabel = new QLabel(formLayoutWidget);
        iDJabatanLabel->setObjectName("iDJabatanLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, iDJabatanLabel);

        iDJabatanLineEdit = new QLineEdit(formLayoutWidget);
        iDJabatanLineEdit->setObjectName("iDJabatanLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, iDJabatanLineEdit);

        pushButton = new QPushButton(admin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 110, 101, 31));
        tableView = new QTableView(admin);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 150, 261, 141));

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        usernameLabel->setText(QCoreApplication::translate("admin", "Username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("admin", "Password", nullptr));
        iDJabatanLabel->setText(QCoreApplication::translate("admin", "ID Jabatan", nullptr));
        pushButton->setText(QCoreApplication::translate("admin", "Simpan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
