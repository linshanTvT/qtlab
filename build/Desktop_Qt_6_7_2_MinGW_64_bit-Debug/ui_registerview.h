/********************************************************************************
** Form generated from reading UI file 'registerview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERVIEW_H
#define UI_REGISTERVIEW_H

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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterView
{
public:
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_39;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *UserName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Password;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *DoctorOrPatient;
    QSpacerItem *horizontalSpacer_3;
    QStackedWidget *stackedWidget;
    QWidget *DoctorWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_10;
    QLineEdit *Phone;
    QLabel *label_16;
    QLineEdit *Email;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QDateEdit *Born;
    QLabel *label_7;
    QSpinBox *Age;
    QLabel *label_8;
    QDoubleSpinBox *Height;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QLineEdit *DoctorName;
    QLabel *label_5;
    QComboBox *Sex;
    QLabel *label_25;
    QComboBox *Ration;
    QLabel *label_17;
    QDateEdit *EntryTime;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_14;
    QComboBox *CertificateType;
    QLabel *label_15;
    QLineEdit *CertificateNumber;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12;
    QLineEdit *PractiseCertificate;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_22;
    QComboBox *EducationBackground;
    QLabel *label_23;
    QComboBox *MaritalStatus;
    QLabel *label_9;
    QDoubleSpinBox *Weight;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_20;
    QLineEdit *NativePlace;
    QLabel *label_11;
    QLineEdit *Place;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_13;
    QLineEdit *JobId;
    QLabel *label_24;
    QComboBox *Department;
    QLabel *label_21;
    QComboBox *JobIdentity;
    QWidget *PatientWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_18;
    QLineEdit *PatientName;
    QLabel *label_19;
    QComboBox *Sex_2;
    QLabel *label_26;
    QComboBox *Ration_2;
    QLabel *label_27;
    QDoubleSpinBox *Height_2;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_31;
    QComboBox *CertificateType_2;
    QLabel *label_32;
    QLineEdit *CertificateNumber_2;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_35;
    QLineEdit *Phone_2;
    QLabel *label_36;
    QLineEdit *Email_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_28;
    QDateEdit *Born_2;
    QLabel *label_29;
    QSpinBox *Age_2;
    QLabel *label_30;
    QDoubleSpinBox *Weight_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_33;
    QLineEdit *NativePlace_2;
    QLabel *label_34;
    QLineEdit *Place_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btRegister;
    QSpacerItem *horizontalSpacer;
    QPushButton *btCancel;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *RegisterView)
    {
        if (RegisterView->objectName().isEmpty())
            RegisterView->setObjectName("RegisterView");
        RegisterView->resize(920, 617);
        gridLayout_4 = new QGridLayout(RegisterView);
        gridLayout_4->setObjectName("gridLayout_4");
        verticalSpacer_2 = new QSpacerItem(20, 36, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 0, 1, 1, 1);

        label_39 = new QLabel(RegisterView);
        label_39->setObjectName("label_39");
        label_39->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_39, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 35, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(101, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 3, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(RegisterView);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        UserName = new QLineEdit(RegisterView);
        UserName->setObjectName("UserName");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(UserName->sizePolicy().hasHeightForWidth());
        UserName->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(UserName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(RegisterView);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        Password = new QLineEdit(RegisterView);
        Password->setObjectName("Password");
        sizePolicy1.setHeightForWidth(Password->sizePolicy().hasHeightForWidth());
        Password->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(Password);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(RegisterView);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_3);

        DoctorOrPatient = new QComboBox(RegisterView);
        DoctorOrPatient->addItem(QString());
        DoctorOrPatient->addItem(QString());
        DoctorOrPatient->setObjectName("DoctorOrPatient");

        horizontalLayout_3->addWidget(DoctorOrPatient);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_13->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);


        gridLayout_3->addLayout(horizontalLayout_13, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(RegisterView);
        stackedWidget->setObjectName("stackedWidget");
        DoctorWidget = new QWidget();
        DoctorWidget->setObjectName("DoctorWidget");
        gridLayout = new QGridLayout(DoctorWidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_10 = new QLabel(DoctorWidget);
        label_10->setObjectName("label_10");

        horizontalLayout_14->addWidget(label_10);

        Phone = new QLineEdit(DoctorWidget);
        Phone->setObjectName("Phone");

        horizontalLayout_14->addWidget(Phone);

        label_16 = new QLabel(DoctorWidget);
        label_16->setObjectName("label_16");

        horizontalLayout_14->addWidget(label_16);

        Email = new QLineEdit(DoctorWidget);
        Email->setObjectName("Email");

        horizontalLayout_14->addWidget(Email);


        gridLayout->addLayout(horizontalLayout_14, 6, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_6 = new QLabel(DoctorWidget);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(label_6);

        Born = new QDateEdit(DoctorWidget);
        Born->setObjectName("Born");
        sizePolicy1.setHeightForWidth(Born->sizePolicy().hasHeightForWidth());
        Born->setSizePolicy(sizePolicy1);
        Born->setCalendarPopup(true);

        horizontalLayout_9->addWidget(Born);

        label_7 = new QLabel(DoctorWidget);
        label_7->setObjectName("label_7");
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(label_7);

        Age = new QSpinBox(DoctorWidget);
        Age->setObjectName("Age");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Age->sizePolicy().hasHeightForWidth());
        Age->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(Age);

        label_8 = new QLabel(DoctorWidget);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(label_8);

        Height = new QDoubleSpinBox(DoctorWidget);
        Height->setObjectName("Height");

        horizontalLayout_9->addWidget(Height);


        gridLayout->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_4 = new QLabel(DoctorWidget);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(label_4);

        DoctorName = new QLineEdit(DoctorWidget);
        DoctorName->setObjectName("DoctorName");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(DoctorName->sizePolicy().hasHeightForWidth());
        DoctorName->setSizePolicy(sizePolicy3);
        DoctorName->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_8->addWidget(DoctorName);

        label_5 = new QLabel(DoctorWidget);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(label_5);

        Sex = new QComboBox(DoctorWidget);
        Sex->addItem(QString());
        Sex->addItem(QString());
        Sex->setObjectName("Sex");
        sizePolicy2.setHeightForWidth(Sex->sizePolicy().hasHeightForWidth());
        Sex->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(Sex);

        label_25 = new QLabel(DoctorWidget);
        label_25->setObjectName("label_25");
        sizePolicy.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(label_25);

        Ration = new QComboBox(DoctorWidget);
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

        horizontalLayout_8->addWidget(Ration);

        label_17 = new QLabel(DoctorWidget);
        label_17->setObjectName("label_17");
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(label_17);

        EntryTime = new QDateEdit(DoctorWidget);
        EntryTime->setObjectName("EntryTime");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(EntryTime->sizePolicy().hasHeightForWidth());
        EntryTime->setSizePolicy(sizePolicy4);
        EntryTime->setMaximumSize(QSize(16777215, 16777215));
        EntryTime->setCalendarPopup(true);

        horizontalLayout_8->addWidget(EntryTime);


        gridLayout->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_14 = new QLabel(DoctorWidget);
        label_14->setObjectName("label_14");

        horizontalLayout_6->addWidget(label_14);

        CertificateType = new QComboBox(DoctorWidget);
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

        horizontalLayout_6->addWidget(CertificateType);

        label_15 = new QLabel(DoctorWidget);
        label_15->setObjectName("label_15");

        horizontalLayout_6->addWidget(label_15);

        CertificateNumber = new QLineEdit(DoctorWidget);
        CertificateNumber->setObjectName("CertificateNumber");

        horizontalLayout_6->addWidget(CertificateNumber);


        gridLayout->addLayout(horizontalLayout_6, 4, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_12 = new QLabel(DoctorWidget);
        label_12->setObjectName("label_12");

        horizontalLayout_15->addWidget(label_12);

        PractiseCertificate = new QLineEdit(DoctorWidget);
        PractiseCertificate->setObjectName("PractiseCertificate");

        horizontalLayout_15->addWidget(PractiseCertificate);


        gridLayout->addLayout(horizontalLayout_15, 7, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_22 = new QLabel(DoctorWidget);
        label_22->setObjectName("label_22");
        sizePolicy.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(label_22);

        EducationBackground = new QComboBox(DoctorWidget);
        EducationBackground->addItem(QString());
        EducationBackground->addItem(QString());
        EducationBackground->addItem(QString());
        EducationBackground->setObjectName("EducationBackground");

        horizontalLayout_7->addWidget(EducationBackground);

        label_23 = new QLabel(DoctorWidget);
        label_23->setObjectName("label_23");
        sizePolicy.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(label_23);

        MaritalStatus = new QComboBox(DoctorWidget);
        MaritalStatus->addItem(QString());
        MaritalStatus->addItem(QString());
        MaritalStatus->addItem(QString());
        MaritalStatus->addItem(QString());
        MaritalStatus->setObjectName("MaritalStatus");

        horizontalLayout_7->addWidget(MaritalStatus);

        label_9 = new QLabel(DoctorWidget);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(label_9);

        Weight = new QDoubleSpinBox(DoctorWidget);
        Weight->setObjectName("Weight");

        horizontalLayout_7->addWidget(Weight);


        gridLayout->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_20 = new QLabel(DoctorWidget);
        label_20->setObjectName("label_20");

        horizontalLayout_12->addWidget(label_20);

        NativePlace = new QLineEdit(DoctorWidget);
        NativePlace->setObjectName("NativePlace");

        horizontalLayout_12->addWidget(NativePlace);

        label_11 = new QLabel(DoctorWidget);
        label_11->setObjectName("label_11");

        horizontalLayout_12->addWidget(label_11);

        Place = new QLineEdit(DoctorWidget);
        Place->setObjectName("Place");

        horizontalLayout_12->addWidget(Place);


        gridLayout->addLayout(horizontalLayout_12, 5, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_13 = new QLabel(DoctorWidget);
        label_13->setObjectName("label_13");
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_13);

        JobId = new QLineEdit(DoctorWidget);
        JobId->setObjectName("JobId");
        sizePolicy3.setHeightForWidth(JobId->sizePolicy().hasHeightForWidth());
        JobId->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(JobId);

        label_24 = new QLabel(DoctorWidget);
        label_24->setObjectName("label_24");
        sizePolicy.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_24);

        Department = new QComboBox(DoctorWidget);
        Department->addItem(QString());
        Department->addItem(QString());
        Department->addItem(QString());
        Department->addItem(QString());
        Department->addItem(QString());
        Department->setObjectName("Department");

        horizontalLayout_5->addWidget(Department);

        label_21 = new QLabel(DoctorWidget);
        label_21->setObjectName("label_21");
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_21);

        JobIdentity = new QComboBox(DoctorWidget);
        JobIdentity->addItem(QString());
        JobIdentity->addItem(QString());
        JobIdentity->addItem(QString());
        JobIdentity->addItem(QString());
        JobIdentity->addItem(QString());
        JobIdentity->setObjectName("JobIdentity");

        horizontalLayout_5->addWidget(JobIdentity);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        stackedWidget->addWidget(DoctorWidget);
        PatientWidget = new QWidget();
        PatientWidget->setObjectName("PatientWidget");
        gridLayout_2 = new QGridLayout(PatientWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_18 = new QLabel(PatientWidget);
        label_18->setObjectName("label_18");
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(label_18);

        PatientName = new QLineEdit(PatientWidget);
        PatientName->setObjectName("PatientName");
        sizePolicy2.setHeightForWidth(PatientName->sizePolicy().hasHeightForWidth());
        PatientName->setSizePolicy(sizePolicy2);

        horizontalLayout_10->addWidget(PatientName);

        label_19 = new QLabel(PatientWidget);
        label_19->setObjectName("label_19");
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(label_19);

        Sex_2 = new QComboBox(PatientWidget);
        Sex_2->addItem(QString());
        Sex_2->addItem(QString());
        Sex_2->setObjectName("Sex_2");

        horizontalLayout_10->addWidget(Sex_2);

        label_26 = new QLabel(PatientWidget);
        label_26->setObjectName("label_26");
        sizePolicy.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(label_26);

        Ration_2 = new QComboBox(PatientWidget);
        Ration_2->addItem(QString());
        Ration_2->addItem(QString());
        Ration_2->addItem(QString());
        Ration_2->addItem(QString());
        Ration_2->addItem(QString());
        Ration_2->addItem(QString());
        Ration_2->addItem(QString());
        Ration_2->addItem(QString());
        Ration_2->addItem(QString());
        Ration_2->addItem(QString());
        Ration_2->setObjectName("Ration_2");
        sizePolicy2.setHeightForWidth(Ration_2->sizePolicy().hasHeightForWidth());
        Ration_2->setSizePolicy(sizePolicy2);

        horizontalLayout_10->addWidget(Ration_2);

        label_27 = new QLabel(PatientWidget);
        label_27->setObjectName("label_27");
        sizePolicy.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(label_27);

        Height_2 = new QDoubleSpinBox(PatientWidget);
        Height_2->setObjectName("Height_2");
        sizePolicy4.setHeightForWidth(Height_2->sizePolicy().hasHeightForWidth());
        Height_2->setSizePolicy(sizePolicy4);

        horizontalLayout_10->addWidget(Height_2);


        gridLayout_2->addLayout(horizontalLayout_10, 0, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_31 = new QLabel(PatientWidget);
        label_31->setObjectName("label_31");
        sizePolicy.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy);

        horizontalLayout_16->addWidget(label_31);

        CertificateType_2 = new QComboBox(PatientWidget);
        CertificateType_2->addItem(QString());
        CertificateType_2->addItem(QString());
        CertificateType_2->addItem(QString());
        CertificateType_2->addItem(QString());
        CertificateType_2->addItem(QString());
        CertificateType_2->addItem(QString());
        CertificateType_2->addItem(QString());
        CertificateType_2->addItem(QString());
        CertificateType_2->addItem(QString());
        CertificateType_2->setObjectName("CertificateType_2");
        sizePolicy3.setHeightForWidth(CertificateType_2->sizePolicy().hasHeightForWidth());
        CertificateType_2->setSizePolicy(sizePolicy3);

        horizontalLayout_16->addWidget(CertificateType_2);

        label_32 = new QLabel(PatientWidget);
        label_32->setObjectName("label_32");
        sizePolicy.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy);

        horizontalLayout_16->addWidget(label_32);

        CertificateNumber_2 = new QLineEdit(PatientWidget);
        CertificateNumber_2->setObjectName("CertificateNumber_2");

        horizontalLayout_16->addWidget(CertificateNumber_2);


        gridLayout_2->addLayout(horizontalLayout_16, 2, 0, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_35 = new QLabel(PatientWidget);
        label_35->setObjectName("label_35");

        horizontalLayout_18->addWidget(label_35);

        Phone_2 = new QLineEdit(PatientWidget);
        Phone_2->setObjectName("Phone_2");

        horizontalLayout_18->addWidget(Phone_2);

        label_36 = new QLabel(PatientWidget);
        label_36->setObjectName("label_36");

        horizontalLayout_18->addWidget(label_36);

        Email_2 = new QLineEdit(PatientWidget);
        Email_2->setObjectName("Email_2");

        horizontalLayout_18->addWidget(Email_2);


        gridLayout_2->addLayout(horizontalLayout_18, 4, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_28 = new QLabel(PatientWidget);
        label_28->setObjectName("label_28");
        sizePolicy.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(label_28);

        Born_2 = new QDateEdit(PatientWidget);
        Born_2->setObjectName("Born_2");
        sizePolicy1.setHeightForWidth(Born_2->sizePolicy().hasHeightForWidth());
        Born_2->setSizePolicy(sizePolicy1);
        Born_2->setCalendarPopup(true);

        horizontalLayout_11->addWidget(Born_2);

        label_29 = new QLabel(PatientWidget);
        label_29->setObjectName("label_29");
        sizePolicy.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(label_29);

        Age_2 = new QSpinBox(PatientWidget);
        Age_2->setObjectName("Age_2");
        sizePolicy1.setHeightForWidth(Age_2->sizePolicy().hasHeightForWidth());
        Age_2->setSizePolicy(sizePolicy1);

        horizontalLayout_11->addWidget(Age_2);

        label_30 = new QLabel(PatientWidget);
        label_30->setObjectName("label_30");
        sizePolicy.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(label_30);

        Weight_2 = new QDoubleSpinBox(PatientWidget);
        Weight_2->setObjectName("Weight_2");

        horizontalLayout_11->addWidget(Weight_2);


        gridLayout_2->addLayout(horizontalLayout_11, 1, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_33 = new QLabel(PatientWidget);
        label_33->setObjectName("label_33");

        horizontalLayout_17->addWidget(label_33);

        NativePlace_2 = new QLineEdit(PatientWidget);
        NativePlace_2->setObjectName("NativePlace_2");

        horizontalLayout_17->addWidget(NativePlace_2);

        label_34 = new QLabel(PatientWidget);
        label_34->setObjectName("label_34");

        horizontalLayout_17->addWidget(label_34);

        Place_2 = new QLineEdit(PatientWidget);
        Place_2->setObjectName("Place_2");

        horizontalLayout_17->addWidget(Place_2);


        gridLayout_2->addLayout(horizontalLayout_17, 3, 0, 1, 1);

        stackedWidget->addWidget(PatientWidget);

        gridLayout_3->addWidget(stackedWidget, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        btRegister = new QPushButton(RegisterView);
        btRegister->setObjectName("btRegister");

        horizontalLayout_4->addWidget(btRegister);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btCancel = new QPushButton(RegisterView);
        btCancel->setObjectName("btCancel");

        horizontalLayout_4->addWidget(btCancel);


        gridLayout_3->addLayout(horizontalLayout_4, 2, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 3, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(100, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 3, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 36, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 4, 1, 1, 1);


        retranslateUi(RegisterView);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(RegisterView);
    } // setupUi

    void retranslateUi(QDialog *RegisterView)
    {
        RegisterView->setWindowTitle(QCoreApplication::translate("RegisterView", "\347\244\276\345\214\272\345\214\273\347\226\227\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_39->setText(QCoreApplication::translate("RegisterView", "\346\263\250\345\206\214\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("RegisterView", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterView", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterView", "\350\272\253\344\273\275\357\274\232", nullptr));
        DoctorOrPatient->setItemText(0, QCoreApplication::translate("RegisterView", "\345\214\273\347\224\237", nullptr));
        DoctorOrPatient->setItemText(1, QCoreApplication::translate("RegisterView", "\346\202\243\350\200\205", nullptr));

        label_10->setText(QCoreApplication::translate("RegisterView", "\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("RegisterView", "\347\224\265\345\255\220\351\202\256\347\256\261\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterView", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterView", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("RegisterView", "\350\272\253\351\253\230\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterView", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterView", "\346\200\247\345\210\253\357\274\232", nullptr));
        Sex->setItemText(0, QCoreApplication::translate("RegisterView", "\347\224\267", nullptr));
        Sex->setItemText(1, QCoreApplication::translate("RegisterView", "\345\245\263", nullptr));

        label_25->setText(QCoreApplication::translate("RegisterView", "\346\260\221\346\227\217\357\274\232", nullptr));
        Ration->setItemText(0, QCoreApplication::translate("RegisterView", "\346\261\211", nullptr));
        Ration->setItemText(1, QCoreApplication::translate("RegisterView", "\345\243\256", nullptr));
        Ration->setItemText(2, QCoreApplication::translate("RegisterView", "\347\273\264\345\220\276\345\260\224", nullptr));
        Ration->setItemText(3, QCoreApplication::translate("RegisterView", "\345\233\236", nullptr));
        Ration->setItemText(4, QCoreApplication::translate("RegisterView", "\350\213\227", nullptr));
        Ration->setItemText(5, QCoreApplication::translate("RegisterView", "\346\273\241", nullptr));
        Ration->setItemText(6, QCoreApplication::translate("RegisterView", "\345\275\235", nullptr));
        Ration->setItemText(7, QCoreApplication::translate("RegisterView", "\345\234\237\345\256\266\346\227\217", nullptr));
        Ration->setItemText(8, QCoreApplication::translate("RegisterView", "\350\227\217\346\227\217", nullptr));
        Ration->setItemText(9, QCoreApplication::translate("RegisterView", "\350\222\231\345\217\244\346\227\217", nullptr));

        label_17->setText(QCoreApplication::translate("RegisterView", "\345\205\245\350\201\214\346\227\266\351\227\264\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("RegisterView", "\350\257\201\344\273\266\347\261\273\345\236\213\357\274\232", nullptr));
        CertificateType->setItemText(0, QCoreApplication::translate("RegisterView", "\344\270\255\345\215\216\344\272\272\346\260\221\345\205\261\345\222\214\345\233\275\345\261\205\346\260\221\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType->setItemText(1, QCoreApplication::translate("RegisterView", "\345\217\260\346\271\276\345\261\205\346\260\221\346\235\245\345\276\200\345\244\247\351\231\206\351\200\232\350\241\214\350\257\201", nullptr));
        CertificateType->setItemText(2, QCoreApplication::translate("RegisterView", "\346\270\257\346\276\263\345\261\205\346\260\221\346\235\245\345\276\200\345\206\205\345\234\260\351\200\232\350\241\214\350\257\201", nullptr));
        CertificateType->setItemText(3, QCoreApplication::translate("RegisterView", "\346\212\244\347\205\247", nullptr));
        CertificateType->setItemText(4, QCoreApplication::translate("RegisterView", "\351\246\231\346\270\257\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType->setItemText(5, QCoreApplication::translate("RegisterView", "\346\276\263\351\227\250\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType->setItemText(6, QCoreApplication::translate("RegisterView", "\344\270\255\345\215\216\344\272\272\346\260\221\345\205\261\345\222\214\345\233\275\345\244\226\345\233\275\344\272\272\346\260\270\344\271\205\345\261\205\347\225\231\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType->setItemText(7, QCoreApplication::translate("RegisterView", "\346\270\257\346\276\263\345\261\205\346\260\221\345\261\205\344\275\217\350\257\201", nullptr));
        CertificateType->setItemText(8, QCoreApplication::translate("RegisterView", "\345\217\260\346\271\276\345\261\205\346\260\221\345\261\205\344\275\217\350\257\201", nullptr));

        label_15->setText(QCoreApplication::translate("RegisterView", "\350\257\201\344\273\266\345\217\267\347\240\201\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("RegisterView", "\346\211\247\344\270\232\350\257\201\344\271\246\345\217\267\357\274\232", nullptr));
        label_22->setText(QCoreApplication::translate("RegisterView", "\345\255\246\345\216\206\357\274\232", nullptr));
        EducationBackground->setItemText(0, QCoreApplication::translate("RegisterView", "\346\234\254\347\247\221", nullptr));
        EducationBackground->setItemText(1, QCoreApplication::translate("RegisterView", "\347\241\225\345\243\253", nullptr));
        EducationBackground->setItemText(2, QCoreApplication::translate("RegisterView", "\345\215\232\345\243\253", nullptr));

        label_23->setText(QCoreApplication::translate("RegisterView", "\345\251\232\345\247\273\347\212\266\345\206\265\357\274\232", nullptr));
        MaritalStatus->setItemText(0, QCoreApplication::translate("RegisterView", "\346\234\252\345\251\232", nullptr));
        MaritalStatus->setItemText(1, QCoreApplication::translate("RegisterView", "\345\267\262\345\251\232", nullptr));
        MaritalStatus->setItemText(2, QCoreApplication::translate("RegisterView", "\347\246\273\345\251\232", nullptr));
        MaritalStatus->setItemText(3, QCoreApplication::translate("RegisterView", "\344\270\247\345\201\266", nullptr));

        label_9->setText(QCoreApplication::translate("RegisterView", "\344\275\223\351\207\215\357\274\232", nullptr));
        label_20->setText(QCoreApplication::translate("RegisterView", "\347\261\215\350\264\257\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("RegisterView", "\345\256\266\345\272\255\344\275\217\345\235\200\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("RegisterView", "\345\267\245\345\217\267\357\274\232", nullptr));
        label_24->setText(QCoreApplication::translate("RegisterView", "\346\211\200\345\234\250\351\203\250\351\227\250\357\274\232", nullptr));
        Department->setItemText(0, QCoreApplication::translate("RegisterView", "\345\205\250\347\247\221\350\257\212\345\256\244", nullptr));
        Department->setItemText(1, QCoreApplication::translate("RegisterView", "\346\262\273\347\226\227\345\256\244", nullptr));
        Department->setItemText(2, QCoreApplication::translate("RegisterView", "\345\244\204\347\275\256\345\256\244", nullptr));
        Department->setItemText(3, QCoreApplication::translate("RegisterView", "\351\242\204\351\230\262\344\277\235\345\201\245\345\256\244", nullptr));
        Department->setItemText(4, QCoreApplication::translate("RegisterView", "\345\201\245\345\272\267\344\277\241\346\201\257\347\256\241\347\220\206\345\256\244", nullptr));

        label_21->setText(QCoreApplication::translate("RegisterView", "\350\201\214\345\212\241\357\274\232", nullptr));
        JobIdentity->setItemText(0, QCoreApplication::translate("RegisterView", "\345\214\273\345\243\253", nullptr));
        JobIdentity->setItemText(1, QCoreApplication::translate("RegisterView", "\344\275\217\351\231\242\345\214\273\345\270\210", nullptr));
        JobIdentity->setItemText(2, QCoreApplication::translate("RegisterView", "\344\270\273\346\262\273\345\214\273\345\270\210", nullptr));
        JobIdentity->setItemText(3, QCoreApplication::translate("RegisterView", "\345\211\257\344\270\273\344\273\273\345\214\273\345\270\210", nullptr));
        JobIdentity->setItemText(4, QCoreApplication::translate("RegisterView", "\344\270\273\344\273\273\345\214\273\345\270\210", nullptr));

        label_18->setText(QCoreApplication::translate("RegisterView", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_19->setText(QCoreApplication::translate("RegisterView", "\346\200\247\345\210\253\357\274\232", nullptr));
        Sex_2->setItemText(0, QCoreApplication::translate("RegisterView", "\347\224\267", nullptr));
        Sex_2->setItemText(1, QCoreApplication::translate("RegisterView", "\345\245\263", nullptr));

        label_26->setText(QCoreApplication::translate("RegisterView", "\346\260\221\346\227\217\357\274\232", nullptr));
        Ration_2->setItemText(0, QCoreApplication::translate("RegisterView", "\346\261\211", nullptr));
        Ration_2->setItemText(1, QCoreApplication::translate("RegisterView", "\345\243\256", nullptr));
        Ration_2->setItemText(2, QCoreApplication::translate("RegisterView", "\347\273\264\345\220\276\345\260\224", nullptr));
        Ration_2->setItemText(3, QCoreApplication::translate("RegisterView", "\345\233\236", nullptr));
        Ration_2->setItemText(4, QCoreApplication::translate("RegisterView", "\350\213\227", nullptr));
        Ration_2->setItemText(5, QCoreApplication::translate("RegisterView", "\346\273\241", nullptr));
        Ration_2->setItemText(6, QCoreApplication::translate("RegisterView", "\345\275\235", nullptr));
        Ration_2->setItemText(7, QCoreApplication::translate("RegisterView", "\345\234\237\345\256\266", nullptr));
        Ration_2->setItemText(8, QCoreApplication::translate("RegisterView", "\350\227\217", nullptr));
        Ration_2->setItemText(9, QCoreApplication::translate("RegisterView", "\350\222\231\345\217\244", nullptr));

        label_27->setText(QCoreApplication::translate("RegisterView", "\350\272\253\351\253\230\357\274\232", nullptr));
        label_31->setText(QCoreApplication::translate("RegisterView", "\350\257\201\344\273\266\347\261\273\345\236\213\357\274\232", nullptr));
        CertificateType_2->setItemText(0, QCoreApplication::translate("RegisterView", "\344\270\255\345\215\216\344\272\272\346\260\221\345\205\261\345\222\214\345\233\275\345\261\205\346\260\221\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType_2->setItemText(1, QCoreApplication::translate("RegisterView", "\345\217\260\346\271\276\345\261\205\346\260\221\346\235\245\345\276\200\345\244\247\351\231\206\351\200\232\350\241\214\350\257\201", nullptr));
        CertificateType_2->setItemText(2, QCoreApplication::translate("RegisterView", "\346\270\257\346\276\263\345\261\205\346\260\221\346\235\245\345\276\200\345\206\205\345\234\260\351\200\232\350\241\214\350\257\201", nullptr));
        CertificateType_2->setItemText(3, QCoreApplication::translate("RegisterView", "\346\212\244\347\205\247", nullptr));
        CertificateType_2->setItemText(4, QCoreApplication::translate("RegisterView", "\351\246\231\346\270\257\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType_2->setItemText(5, QCoreApplication::translate("RegisterView", "\346\276\263\351\227\250\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType_2->setItemText(6, QCoreApplication::translate("RegisterView", "\344\270\255\345\215\216\344\272\272\346\260\221\345\205\261\345\222\214\345\233\275\345\244\226\345\233\275\344\272\272\346\260\270\344\271\205\345\261\205\347\225\231\350\272\253\344\273\275\350\257\201", nullptr));
        CertificateType_2->setItemText(7, QCoreApplication::translate("RegisterView", "\346\270\257\346\276\263\345\261\205\346\260\221\345\261\205\344\275\217\350\257\201", nullptr));
        CertificateType_2->setItemText(8, QCoreApplication::translate("RegisterView", "\345\217\260\346\271\276\345\261\205\346\260\221\345\261\205\344\275\217\350\257\201", nullptr));

        label_32->setText(QCoreApplication::translate("RegisterView", "\350\257\201\344\273\266\345\217\267\347\240\201\357\274\232", nullptr));
        label_35->setText(QCoreApplication::translate("RegisterView", "\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", nullptr));
        label_36->setText(QCoreApplication::translate("RegisterView", "\347\224\265\345\255\220\351\202\256\347\256\261\357\274\232", nullptr));
        label_28->setText(QCoreApplication::translate("RegisterView", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        label_29->setText(QCoreApplication::translate("RegisterView", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_30->setText(QCoreApplication::translate("RegisterView", "\344\275\223\351\207\215\357\274\232", nullptr));
        label_33->setText(QCoreApplication::translate("RegisterView", "\347\261\215\350\264\257\357\274\232", nullptr));
        label_34->setText(QCoreApplication::translate("RegisterView", "\345\256\266\345\272\255\344\275\217\345\235\200\357\274\232", nullptr));
        btRegister->setText(QCoreApplication::translate("RegisterView", "\346\263\250\345\206\214", nullptr));
        btCancel->setText(QCoreApplication::translate("RegisterView", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterView: public Ui_RegisterView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERVIEW_H
