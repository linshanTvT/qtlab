/********************************************************************************
** Form generated from reading UI file 'doctoreditview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTOREDITVIEW_H
#define UI_DOCTOREDITVIEW_H

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

class Ui_DoctorEditView
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_32;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLineEdit *DoctorName;
    QLabel *label_2;
    QComboBox *Sex;
    QLabel *label_25;
    QComboBox *Ration;
    QLabel *label_17;
    QDateEdit *EntryTime;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QDateEdit *Born;
    QLabel *label_3;
    QSpinBox *Age;
    QLabel *label_4;
    QSpinBox *Height;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_22;
    QComboBox *EducationBackground;
    QLabel *label_23;
    QComboBox *MaritalStatus;
    QLabel *label_5;
    QDoubleSpinBox *Weight;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QLineEdit *JobId;
    QLabel *label_24;
    QComboBox *Department;
    QLabel *label_21;
    QComboBox *JobIdentity;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_14;
    QComboBox *CertificateType;
    QHBoxLayout *horizontalLayout;
    QLabel *label_15;
    QLineEdit *CertificateNumber;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_20;
    QLineEdit *NativePlace;
    QLabel *label_11;
    QLineEdit *Place;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLineEdit *Phone;
    QLabel *label_16;
    QLineEdit *Email;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *PractiseCertificate;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *btSaveDoctorMessage;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btCancelDoctorMessage;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *DoctorEditView)
    {
        if (DoctorEditView->objectName().isEmpty())
            DoctorEditView->setObjectName("DoctorEditView");
        DoctorEditView->resize(816, 538);
        gridLayout = new QGridLayout(DoctorEditView);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 21, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        label_32 = new QLabel(DoctorEditView);
        label_32->setObjectName("label_32");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy);
        label_32->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_32->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_32, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 21, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(32, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 3, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label = new QLabel(DoctorEditView);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(label);

        DoctorName = new QLineEdit(DoctorEditView);
        DoctorName->setObjectName("DoctorName");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(DoctorName->sizePolicy().hasHeightForWidth());
        DoctorName->setSizePolicy(sizePolicy2);
        DoctorName->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_8->addWidget(DoctorName);

        label_2 = new QLabel(DoctorEditView);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(label_2);

        Sex = new QComboBox(DoctorEditView);
        Sex->addItem(QString());
        Sex->addItem(QString());
        Sex->setObjectName("Sex");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Sex->sizePolicy().hasHeightForWidth());
        Sex->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(Sex);

        label_25 = new QLabel(DoctorEditView);
        label_25->setObjectName("label_25");
        sizePolicy1.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(label_25);

        Ration = new QComboBox(DoctorEditView);
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
        sizePolicy3.setHeightForWidth(Ration->sizePolicy().hasHeightForWidth());
        Ration->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(Ration);

        label_17 = new QLabel(DoctorEditView);
        label_17->setObjectName("label_17");
        sizePolicy1.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(label_17);

        EntryTime = new QDateEdit(DoctorEditView);
        EntryTime->setObjectName("EntryTime");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(EntryTime->sizePolicy().hasHeightForWidth());
        EntryTime->setSizePolicy(sizePolicy4);
        EntryTime->setMaximumSize(QSize(16777215, 16777215));
        EntryTime->setCalendarPopup(true);

        horizontalLayout_8->addWidget(EntryTime);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_6 = new QLabel(DoctorEditView);
        label_6->setObjectName("label_6");
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(label_6);

        Born = new QDateEdit(DoctorEditView);
        Born->setObjectName("Born");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(Born->sizePolicy().hasHeightForWidth());
        Born->setSizePolicy(sizePolicy5);
        Born->setCalendarPopup(true);

        horizontalLayout_9->addWidget(Born);

        label_3 = new QLabel(DoctorEditView);
        label_3->setObjectName("label_3");
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(label_3);

        Age = new QSpinBox(DoctorEditView);
        Age->setObjectName("Age");
        sizePolicy3.setHeightForWidth(Age->sizePolicy().hasHeightForWidth());
        Age->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(Age);

        label_4 = new QLabel(DoctorEditView);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(label_4);

        Height = new QSpinBox(DoctorEditView);
        Height->setObjectName("Height");
        sizePolicy5.setHeightForWidth(Height->sizePolicy().hasHeightForWidth());
        Height->setSizePolicy(sizePolicy5);

        horizontalLayout_9->addWidget(Height);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_22 = new QLabel(DoctorEditView);
        label_22->setObjectName("label_22");
        sizePolicy1.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_22);

        EducationBackground = new QComboBox(DoctorEditView);
        EducationBackground->addItem(QString());
        EducationBackground->addItem(QString());
        EducationBackground->addItem(QString());
        EducationBackground->setObjectName("EducationBackground");

        horizontalLayout_7->addWidget(EducationBackground);

        label_23 = new QLabel(DoctorEditView);
        label_23->setObjectName("label_23");
        sizePolicy1.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_23);

        MaritalStatus = new QComboBox(DoctorEditView);
        MaritalStatus->addItem(QString());
        MaritalStatus->addItem(QString());
        MaritalStatus->addItem(QString());
        MaritalStatus->addItem(QString());
        MaritalStatus->setObjectName("MaritalStatus");

        horizontalLayout_7->addWidget(MaritalStatus);

        label_5 = new QLabel(DoctorEditView);
        label_5->setObjectName("label_5");
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_5);

        Weight = new QDoubleSpinBox(DoctorEditView);
        Weight->setObjectName("Weight");

        horizontalLayout_7->addWidget(Weight);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_13 = new QLabel(DoctorEditView);
        label_13->setObjectName("label_13");
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_13);

        JobId = new QLineEdit(DoctorEditView);
        JobId->setObjectName("JobId");
        sizePolicy2.setHeightForWidth(JobId->sizePolicy().hasHeightForWidth());
        JobId->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(JobId);

        label_24 = new QLabel(DoctorEditView);
        label_24->setObjectName("label_24");
        sizePolicy1.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_24);

        Department = new QComboBox(DoctorEditView);
        Department->addItem(QString());
        Department->addItem(QString());
        Department->addItem(QString());
        Department->addItem(QString());
        Department->addItem(QString());
        Department->setObjectName("Department");

        horizontalLayout_4->addWidget(Department);

        label_21 = new QLabel(DoctorEditView);
        label_21->setObjectName("label_21");
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_21);

        JobIdentity = new QComboBox(DoctorEditView);
        JobIdentity->addItem(QString());
        JobIdentity->addItem(QString());
        JobIdentity->addItem(QString());
        JobIdentity->addItem(QString());
        JobIdentity->addItem(QString());
        JobIdentity->setObjectName("JobIdentity");

        horizontalLayout_4->addWidget(JobIdentity);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_14 = new QLabel(DoctorEditView);
        label_14->setObjectName("label_14");

        horizontalLayout_2->addWidget(label_14);

        CertificateType = new QComboBox(DoctorEditView);
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

        horizontalLayout_2->addWidget(CertificateType);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_15 = new QLabel(DoctorEditView);
        label_15->setObjectName("label_15");

        horizontalLayout->addWidget(label_15);

        CertificateNumber = new QLineEdit(DoctorEditView);
        CertificateNumber->setObjectName("CertificateNumber");

        horizontalLayout->addWidget(CertificateNumber);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_20 = new QLabel(DoctorEditView);
        label_20->setObjectName("label_20");

        horizontalLayout_5->addWidget(label_20);

        NativePlace = new QLineEdit(DoctorEditView);
        NativePlace->setObjectName("NativePlace");

        horizontalLayout_5->addWidget(NativePlace);

        label_11 = new QLabel(DoctorEditView);
        label_11->setObjectName("label_11");

        horizontalLayout_5->addWidget(label_11);

        Place = new QLineEdit(DoctorEditView);
        Place->setObjectName("Place");

        horizontalLayout_5->addWidget(Place);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_10 = new QLabel(DoctorEditView);
        label_10->setObjectName("label_10");

        horizontalLayout_6->addWidget(label_10);

        Phone = new QLineEdit(DoctorEditView);
        Phone->setObjectName("Phone");

        horizontalLayout_6->addWidget(Phone);

        label_16 = new QLabel(DoctorEditView);
        label_16->setObjectName("label_16");

        horizontalLayout_6->addWidget(label_16);

        Email = new QLineEdit(DoctorEditView);
        Email->setObjectName("Email");

        horizontalLayout_6->addWidget(Email);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_12 = new QLabel(DoctorEditView);
        label_12->setObjectName("label_12");

        horizontalLayout_10->addWidget(label_12);

        PractiseCertificate = new QLineEdit(DoctorEditView);
        PractiseCertificate->setObjectName("PractiseCertificate");

        horizontalLayout_10->addWidget(PractiseCertificate);


        verticalLayout->addLayout(horizontalLayout_10);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        btSaveDoctorMessage = new QPushButton(DoctorEditView);
        btSaveDoctorMessage->setObjectName("btSaveDoctorMessage");

        horizontalLayout_11->addWidget(btSaveDoctorMessage);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);

        btCancelDoctorMessage = new QPushButton(DoctorEditView);
        btCancelDoctorMessage->setObjectName("btCancelDoctorMessage");

        horizontalLayout_11->addWidget(btCancelDoctorMessage);


        verticalLayout_2->addLayout(horizontalLayout_11);


        gridLayout->addLayout(verticalLayout_2, 3, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(31, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 21, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);


        retranslateUi(DoctorEditView);

        QMetaObject::connectSlotsByName(DoctorEditView);
    } // setupUi

    void retranslateUi(QDialog *DoctorEditView)
    {
        DoctorEditView->setWindowTitle(QCoreApplication::translate("DoctorEditView", "\345\214\273\347\226\227\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_32->setText(QCoreApplication::translate("DoctorEditView", "\347\274\226\350\276\221\345\214\273\347\224\237\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("DoctorEditView", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("DoctorEditView", "\346\200\247\345\210\253\357\274\232", nullptr));
        Sex->setItemText(0, QCoreApplication::translate("DoctorEditView", "\347\224\267", nullptr));
        Sex->setItemText(1, QCoreApplication::translate("DoctorEditView", "\345\245\263", nullptr));

        label_25->setText(QCoreApplication::translate("DoctorEditView", "\346\260\221\346\227\217\357\274\232", nullptr));
        Ration->setItemText(0, QCoreApplication::translate("DoctorEditView", "\346\261\211", nullptr));
        Ration->setItemText(1, QCoreApplication::translate("DoctorEditView", "\345\243\256", nullptr));
        Ration->setItemText(2, QCoreApplication::translate("DoctorEditView", "\347\273\264\345\220\276\345\260\224", nullptr));
        Ration->setItemText(3, QCoreApplication::translate("DoctorEditView", "\345\233\236", nullptr));
        Ration->setItemText(4, QCoreApplication::translate("DoctorEditView", "\350\213\227", nullptr));
        Ration->setItemText(5, QCoreApplication::translate("DoctorEditView", "\346\273\241", nullptr));
        Ration->setItemText(6, QCoreApplication::translate("DoctorEditView", "\345\275\235", nullptr));
        Ration->setItemText(7, QCoreApplication::translate("DoctorEditView", "\345\234\237\345\256\266\346\227\217", nullptr));
        Ration->setItemText(8, QCoreApplication::translate("DoctorEditView", "\350\227\217\346\227\217", nullptr));
        Ration->setItemText(9, QCoreApplication::translate("DoctorEditView", "\350\222\231\345\217\244\346\227\217", nullptr));

        label_17->setText(QCoreApplication::translate("DoctorEditView", "\345\205\245\350\201\214\346\227\266\351\227\264\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("DoctorEditView", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("DoctorEditView", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("DoctorEditView", "\350\272\253\351\253\230\357\274\232", nullptr));
        label_22->setText(QCoreApplication::translate("DoctorEditView", "\345\255\246\345\216\206\357\274\232", nullptr));
        EducationBackground->setItemText(0, QCoreApplication::translate("DoctorEditView", "\346\234\254\347\247\221", nullptr));
        EducationBackground->setItemText(1, QCoreApplication::translate("DoctorEditView", "\347\241\225\345\243\253", nullptr));
        EducationBackground->setItemText(2, QCoreApplication::translate("DoctorEditView", "\345\215\232\345\243\253", nullptr));

        label_23->setText(QCoreApplication::translate("DoctorEditView", "\345\251\232\345\247\273\347\212\266\345\206\265\357\274\232", nullptr));
        MaritalStatus->setItemText(0, QCoreApplication::translate("DoctorEditView", "\346\234\252\345\251\232", nullptr));
        MaritalStatus->setItemText(1, QCoreApplication::translate("DoctorEditView", "\345\267\262\345\251\232", nullptr));
        MaritalStatus->setItemText(2, QCoreApplication::translate("DoctorEditView", "\347\246\273\345\251\232", nullptr));
        MaritalStatus->setItemText(3, QCoreApplication::translate("DoctorEditView", "\344\270\247\345\201\266", nullptr));

        label_5->setText(QCoreApplication::translate("DoctorEditView", "\344\275\223\351\207\215\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("DoctorEditView", "\345\267\245\345\217\267\357\274\232", nullptr));
        label_24->setText(QCoreApplication::translate("DoctorEditView", "\346\211\200\345\234\250\351\203\250\351\227\250\357\274\232", nullptr));
        Department->setItemText(0, QCoreApplication::translate("DoctorEditView", "\345\205\250\347\247\221\350\257\212\345\256\244", nullptr));
        Department->setItemText(1, QCoreApplication::translate("DoctorEditView", "\346\262\273\347\226\227\345\256\244", nullptr));
        Department->setItemText(2, QCoreApplication::translate("DoctorEditView", "\345\244\204\347\275\256\345\256\244", nullptr));
        Department->setItemText(3, QCoreApplication::translate("DoctorEditView", "\351\242\204\351\230\262\344\277\235\345\201\245\345\256\244", nullptr));
        Department->setItemText(4, QCoreApplication::translate("DoctorEditView", "\345\201\245\345\272\267\344\277\241\346\201\257\347\256\241\347\220\206\345\256\244", nullptr));

        label_21->setText(QCoreApplication::translate("DoctorEditView", "\350\201\214\345\212\241\357\274\232", nullptr));
        JobIdentity->setItemText(0, QCoreApplication::translate("DoctorEditView", "\345\214\273\345\243\253", nullptr));
        JobIdentity->setItemText(1, QCoreApplication::translate("DoctorEditView", "\344\275\217\351\231\242\345\214\273\345\270\210", nullptr));
        JobIdentity->setItemText(2, QCoreApplication::translate("DoctorEditView", "\344\270\273\346\262\273\345\214\273\345\270\210", nullptr));
        JobIdentity->setItemText(3, QCoreApplication::translate("DoctorEditView", "\345\211\257\344\270\273\344\273\273\345\214\273\345\270\210", nullptr));
        JobIdentity->setItemText(4, QCoreApplication::translate("DoctorEditView", "\344\270\273\344\273\273\345\214\273\345\270\210", nullptr));

        label_14->setText(QCoreApplication::translate("DoctorEditView", "\350\257\201\344\273\266\347\261\273\345\236\213\357\274\232", nullptr));
        CertificateType->setItemText(0, QCoreApplication::translate("DoctorEditView", "\344\270\255\345\215\216\344\272\272\346\260\221\345\205\261\345\222\214\345\233\275\345\261\205\346\260\221\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType->setItemText(1, QCoreApplication::translate("DoctorEditView", "\345\217\260\346\271\276\345\261\205\346\260\221\346\235\245\345\276\200\345\244\247\351\231\206\351\200\232\350\241\214\350\257\201", nullptr));
        CertificateType->setItemText(2, QCoreApplication::translate("DoctorEditView", "\346\270\257\346\276\263\345\261\205\346\260\221\346\235\245\345\276\200\345\206\205\345\234\260\351\200\232\350\241\214\350\257\201", nullptr));
        CertificateType->setItemText(3, QCoreApplication::translate("DoctorEditView", "\346\212\244\347\205\247", nullptr));
        CertificateType->setItemText(4, QCoreApplication::translate("DoctorEditView", "\351\246\231\346\270\257\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType->setItemText(5, QCoreApplication::translate("DoctorEditView", "\346\276\263\351\227\250\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType->setItemText(6, QCoreApplication::translate("DoctorEditView", "\344\270\255\345\215\216\344\272\272\346\260\221\345\205\261\345\222\214\345\233\275\345\244\226\345\233\275\344\272\272\346\260\270\344\271\205\345\261\205\347\225\231\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType->setItemText(7, QCoreApplication::translate("DoctorEditView", "\346\270\257\346\276\263\345\261\205\346\260\221\345\261\205\344\275\217\350\257\201", nullptr));
        CertificateType->setItemText(8, QCoreApplication::translate("DoctorEditView", "\345\217\260\346\271\276\345\261\205\346\260\221\345\261\205\344\275\217\350\257\201", nullptr));

        label_15->setText(QCoreApplication::translate("DoctorEditView", "\350\257\201\344\273\266\345\217\267\347\240\201\357\274\232", nullptr));
        label_20->setText(QCoreApplication::translate("DoctorEditView", "\347\261\215\350\264\257\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("DoctorEditView", "\345\256\266\345\272\255\344\275\217\345\235\200\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("DoctorEditView", "\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("DoctorEditView", "\347\224\265\345\255\220\351\202\256\347\256\261\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("DoctorEditView", "\346\211\247\344\270\232\350\257\201\344\271\246\345\217\267\357\274\232", nullptr));
        btSaveDoctorMessage->setText(QCoreApplication::translate("DoctorEditView", "\344\277\235\345\255\230", nullptr));
        btCancelDoctorMessage->setText(QCoreApplication::translate("DoctorEditView", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoctorEditView: public Ui_DoctorEditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTOREDITVIEW_H
