/********************************************************************************
** Form generated from reading UI file 'patienteditview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTEDITVIEW_H
#define UI_PATIENTEDITVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PatientEditView
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_32;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *PatientName;
    QLabel *label_2;
    QComboBox *Sex;
    QLabel *label_25;
    QComboBox *Ration;
    QLabel *label_4;
    QDoubleSpinBox *Height;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QDateEdit *Born;
    QLabel *label_3;
    QSpinBox *Age;
    QLabel *label_5;
    QDoubleSpinBox *Weight;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_14;
    QComboBox *CertificateType;
    QLabel *label_15;
    QLineEdit *CertificateNumber;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_20;
    QLineEdit *NativePlace;
    QLabel *label_11;
    QLineEdit *Place;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QLineEdit *Phone;
    QLabel *label_16;
    QLineEdit *Email;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btSavePatientMessage;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btCancelPatientMessage;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *PatientEditView)
    {
        if (PatientEditView->objectName().isEmpty())
            PatientEditView->setObjectName("PatientEditView");
        PatientEditView->resize(742, 449);
        gridLayout = new QGridLayout(PatientEditView);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 56, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        label_32 = new QLabel(PatientEditView);
        label_32->setObjectName("label_32");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy);
        label_32->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_32->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_32, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 57, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(24, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(PatientEditView);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        PatientName = new QLineEdit(PatientEditView);
        PatientName->setObjectName("PatientName");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(PatientName->sizePolicy().hasHeightForWidth());
        PatientName->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(PatientName);

        label_2 = new QLabel(PatientEditView);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_2);

        Sex = new QComboBox(PatientEditView);
        Sex->addItem(QString());
        Sex->addItem(QString());
        Sex->setObjectName("Sex");

        horizontalLayout->addWidget(Sex);

        label_25 = new QLabel(PatientEditView);
        label_25->setObjectName("label_25");
        sizePolicy1.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_25);

        Ration = new QComboBox(PatientEditView);
        Ration->addItem(QString());
        Ration->addItem(QString());
        Ration->addItem(QString());
        Ration->addItem(QString());
        Ration->addItem(QString());
        Ration->addItem(QString());
        Ration->addItem(QString());
        Ration->addItem(QString());
        Ration->addItem(QString());
        Ration->addItem(QString());
        Ration->setObjectName("Ration");
        sizePolicy2.setHeightForWidth(Ration->sizePolicy().hasHeightForWidth());
        Ration->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(Ration);

        label_4 = new QLabel(PatientEditView);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_4);

        Height = new QDoubleSpinBox(PatientEditView);
        Height->setObjectName("Height");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Height->sizePolicy().hasHeightForWidth());
        Height->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(Height);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(PatientEditView);
        label_6->setObjectName("label_6");
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_6);

        Born = new QDateEdit(PatientEditView);
        Born->setObjectName("Born");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Born->sizePolicy().hasHeightForWidth());
        Born->setSizePolicy(sizePolicy4);
        Born->setCalendarPopup(true);

        horizontalLayout_2->addWidget(Born);

        label_3 = new QLabel(PatientEditView);
        label_3->setObjectName("label_3");
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_3);

        Age = new QSpinBox(PatientEditView);
        Age->setObjectName("Age");
        sizePolicy4.setHeightForWidth(Age->sizePolicy().hasHeightForWidth());
        Age->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(Age);

        label_5 = new QLabel(PatientEditView);
        label_5->setObjectName("label_5");
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_5);

        Weight = new QDoubleSpinBox(PatientEditView);
        Weight->setObjectName("Weight");

        horizontalLayout_2->addWidget(Weight);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_14 = new QLabel(PatientEditView);
        label_14->setObjectName("label_14");
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_14);

        CertificateType = new QComboBox(PatientEditView);
        CertificateType->addItem(QString());
        CertificateType->addItem(QString());
        CertificateType->addItem(QString());
        CertificateType->addItem(QString());
        CertificateType->addItem(QString());
        CertificateType->addItem(QString());
        CertificateType->addItem(QString());
        CertificateType->addItem(QString());
        CertificateType->addItem(QString());
        CertificateType->setObjectName("CertificateType");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(CertificateType->sizePolicy().hasHeightForWidth());
        CertificateType->setSizePolicy(sizePolicy5);

        horizontalLayout_3->addWidget(CertificateType);

        label_15 = new QLabel(PatientEditView);
        label_15->setObjectName("label_15");
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_15);

        CertificateNumber = new QLineEdit(PatientEditView);
        CertificateNumber->setObjectName("CertificateNumber");

        horizontalLayout_3->addWidget(CertificateNumber);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_20 = new QLabel(PatientEditView);
        label_20->setObjectName("label_20");

        horizontalLayout_4->addWidget(label_20);

        NativePlace = new QLineEdit(PatientEditView);
        NativePlace->setObjectName("NativePlace");

        horizontalLayout_4->addWidget(NativePlace);

        label_11 = new QLabel(PatientEditView);
        label_11->setObjectName("label_11");

        horizontalLayout_4->addWidget(label_11);

        Place = new QLineEdit(PatientEditView);
        Place->setObjectName("Place");

        horizontalLayout_4->addWidget(Place);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_10 = new QLabel(PatientEditView);
        label_10->setObjectName("label_10");

        horizontalLayout_5->addWidget(label_10);

        Phone = new QLineEdit(PatientEditView);
        Phone->setObjectName("Phone");

        horizontalLayout_5->addWidget(Phone);

        label_16 = new QLabel(PatientEditView);
        label_16->setObjectName("label_16");

        horizontalLayout_5->addWidget(label_16);

        Email = new QLineEdit(PatientEditView);
        Email->setObjectName("Email");

        horizontalLayout_5->addWidget(Email);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        btSavePatientMessage = new QPushButton(PatientEditView);
        btSavePatientMessage->setObjectName("btSavePatientMessage");

        horizontalLayout_6->addWidget(btSavePatientMessage);

        horizontalSpacer_2 = new QSpacerItem(13, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        btCancelPatientMessage = new QPushButton(PatientEditView);
        btCancelPatientMessage->setObjectName("btCancelPatientMessage");

        horizontalLayout_6->addWidget(btCancelPatientMessage);


        verticalLayout->addLayout(horizontalLayout_6);


        gridLayout->addLayout(verticalLayout, 3, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(24, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 56, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);


        retranslateUi(PatientEditView);

        QMetaObject::connectSlotsByName(PatientEditView);
    } // setupUi

    void retranslateUi(QDialog *PatientEditView)
    {
        PatientEditView->setWindowTitle(QCoreApplication::translate("PatientEditView", "\345\214\273\347\226\227\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_32->setText(QCoreApplication::translate("PatientEditView", "\347\274\226\350\276\221\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("PatientEditView", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("PatientEditView", "\346\200\247\345\210\253\357\274\232", nullptr));
        Sex->setItemText(0, QCoreApplication::translate("PatientEditView", "\347\224\267", nullptr));
        Sex->setItemText(1, QCoreApplication::translate("PatientEditView", "\345\245\263", nullptr));

        label_25->setText(QCoreApplication::translate("PatientEditView", "\346\260\221\346\227\217\357\274\232", nullptr));
        Ration->setItemText(0, QCoreApplication::translate("PatientEditView", "\346\261\211", nullptr));
        Ration->setItemText(1, QCoreApplication::translate("PatientEditView", "\345\243\256", nullptr));
        Ration->setItemText(2, QCoreApplication::translate("PatientEditView", "\347\273\264\345\220\276\345\260\224", nullptr));
        Ration->setItemText(3, QCoreApplication::translate("PatientEditView", "\345\233\236", nullptr));
        Ration->setItemText(4, QCoreApplication::translate("PatientEditView", "\350\213\227", nullptr));
        Ration->setItemText(5, QCoreApplication::translate("PatientEditView", "\346\273\241", nullptr));
        Ration->setItemText(6, QCoreApplication::translate("PatientEditView", "\345\275\235", nullptr));
        Ration->setItemText(7, QCoreApplication::translate("PatientEditView", "\345\234\237\345\256\266", nullptr));
        Ration->setItemText(8, QCoreApplication::translate("PatientEditView", "\350\227\217", nullptr));
        Ration->setItemText(9, QCoreApplication::translate("PatientEditView", "\350\222\231\345\217\244", nullptr));

        label_4->setText(QCoreApplication::translate("PatientEditView", "\350\272\253\351\253\230\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("PatientEditView", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("PatientEditView", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("PatientEditView", "\344\275\223\351\207\215\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("PatientEditView", "\350\257\201\344\273\266\347\261\273\345\236\213\357\274\232", nullptr));
        CertificateType->setItemText(0, QCoreApplication::translate("PatientEditView", "\344\270\255\345\215\216\344\272\272\346\260\221\345\205\261\345\222\214\345\233\275\345\261\205\346\260\221\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType->setItemText(1, QCoreApplication::translate("PatientEditView", "\345\217\260\346\271\276\345\261\205\346\260\221\346\235\245\345\276\200\345\244\247\351\231\206\351\200\232\350\241\214\350\257\201", nullptr));
        CertificateType->setItemText(2, QCoreApplication::translate("PatientEditView", "\346\270\257\346\276\263\345\261\205\346\260\221\346\235\245\345\276\200\345\206\205\345\234\260\351\200\232\350\241\214\350\257\201", nullptr));
        CertificateType->setItemText(3, QCoreApplication::translate("PatientEditView", "\346\212\244\347\205\247", nullptr));
        CertificateType->setItemText(4, QCoreApplication::translate("PatientEditView", "\351\246\231\346\270\257\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType->setItemText(5, QCoreApplication::translate("PatientEditView", "\346\276\263\351\227\250\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType->setItemText(6, QCoreApplication::translate("PatientEditView", "\344\270\255\345\215\216\344\272\272\346\260\221\345\205\261\345\222\214\345\233\275\345\244\226\345\233\275\344\272\272\346\260\270\344\271\205\345\261\205\347\225\231\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType->setItemText(7, QCoreApplication::translate("PatientEditView", "\346\270\257\346\276\263\345\261\205\346\260\221\345\261\205\344\275\217\350\257\201", nullptr));
        CertificateType->setItemText(8, QCoreApplication::translate("PatientEditView", "\345\217\260\346\271\276\345\261\205\346\260\221\345\261\205\344\275\217\350\257\201", nullptr));

        label_15->setText(QCoreApplication::translate("PatientEditView", "\350\257\201\344\273\266\345\217\267\347\240\201\357\274\232", nullptr));
        label_20->setText(QCoreApplication::translate("PatientEditView", "\347\261\215\350\264\257\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("PatientEditView", "\345\256\266\345\272\255\344\275\217\345\235\200\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("PatientEditView", "\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("PatientEditView", "\347\224\265\345\255\220\351\202\256\347\256\261\357\274\232", nullptr));
        btSavePatientMessage->setText(QCoreApplication::translate("PatientEditView", "\344\277\235\345\255\230", nullptr));
        btCancelPatientMessage->setText(QCoreApplication::translate("PatientEditView", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientEditView: public Ui_PatientEditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTEDITVIEW_H
