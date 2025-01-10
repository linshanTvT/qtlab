/********************************************************************************
** Form generated from reading UI file 'loginview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINVIEW_H
#define UI_LOGINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginview
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *inputUserPassword;
    QLineEdit *inputUserName;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btSignUp;
    QPushButton *btSignin;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *loginview)
    {
        if (loginview->objectName().isEmpty())
            loginview->setObjectName("loginview");
        loginview->resize(496, 349);
        centralwidget = new QWidget(loginview);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_3 = new QSpacerItem(20, 57, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 57, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        inputUserPassword = new QLineEdit(centralwidget);
        inputUserPassword->setObjectName("inputUserPassword");
        inputUserPassword->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, inputUserPassword);

        inputUserName = new QLineEdit(centralwidget);
        inputUserName->setObjectName("inputUserName");

        formLayout->setWidget(0, QFormLayout::FieldRole, inputUserName);


        horizontalLayout_3->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(118, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btSignUp = new QPushButton(centralwidget);
        btSignUp->setObjectName("btSignUp");

        horizontalLayout->addWidget(btSignUp);

        btSignin = new QPushButton(centralwidget);
        btSignin->setObjectName("btSignin");

        horizontalLayout->addWidget(btSignin);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 57, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 1);

        loginview->setCentralWidget(centralwidget);

        retranslateUi(loginview);

        QMetaObject::connectSlotsByName(loginview);
    } // setupUi

    void retranslateUi(QMainWindow *loginview)
    {
        loginview->setWindowTitle(QCoreApplication::translate("loginview", "\347\244\276\345\214\272\345\214\273\347\226\227\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("loginview", "\345\214\273\347\224\237\347\231\273\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("loginview", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("loginview", "\345\257\206\347\240\201\357\274\232", nullptr));
        inputUserPassword->setText(QCoreApplication::translate("loginview", "123456", nullptr));
        inputUserName->setText(QCoreApplication::translate("loginview", "root", nullptr));
        btSignUp->setText(QCoreApplication::translate("loginview", "\346\263\250\345\206\214", nullptr));
        btSignin->setText(QCoreApplication::translate("loginview", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginview: public Ui_loginview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINVIEW_H
