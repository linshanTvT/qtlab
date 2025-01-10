/********************************************************************************
** Form generated from reading UI file 'treatrecordeditview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREATRECORDEDITVIEW_H
#define UI_TREATRECORDEDITVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TreatRecordEditView
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *PatientName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *DoctorName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QDateEdit *TreatDate;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QTextEdit *PrescribeDrug;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QTextEdit *TreatResult;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btSaveTreatRecordMessage;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btCancelTreatRecordMessage;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *TreatRecordEditView)
    {
        if (TreatRecordEditView->objectName().isEmpty())
            TreatRecordEditView->setObjectName("TreatRecordEditView");
        TreatRecordEditView->resize(663, 580);
        gridLayout = new QGridLayout(TreatRecordEditView);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 52, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        label = new QLabel(TreatRecordEditView);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 51, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(36, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(TreatRecordEditView);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        PatientName = new QLineEdit(TreatRecordEditView);
        PatientName->setObjectName("PatientName");

        horizontalLayout->addWidget(PatientName);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(TreatRecordEditView);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        DoctorName = new QLineEdit(TreatRecordEditView);
        DoctorName->setObjectName("DoctorName");

        horizontalLayout_2->addWidget(DoctorName);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(TreatRecordEditView);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_4);

        TreatDate = new QDateEdit(TreatRecordEditView);
        TreatDate->setObjectName("TreatDate");
        TreatDate->setCalendarPopup(true);

        horizontalLayout_3->addWidget(TreatDate);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_9 = new QLabel(TreatRecordEditView);
        label_9->setObjectName("label_9");

        verticalLayout_2->addWidget(label_9);

        PrescribeDrug = new QTextEdit(TreatRecordEditView);
        PrescribeDrug->setObjectName("PrescribeDrug");

        verticalLayout_2->addWidget(PrescribeDrug);


        horizontalLayout_7->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_8 = new QLabel(TreatRecordEditView);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        TreatResult = new QTextEdit(TreatRecordEditView);
        TreatResult->setObjectName("TreatResult");

        verticalLayout->addWidget(TreatResult);


        horizontalLayout_7->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        btSaveTreatRecordMessage = new QPushButton(TreatRecordEditView);
        btSaveTreatRecordMessage->setObjectName("btSaveTreatRecordMessage");

        horizontalLayout_5->addWidget(btSaveTreatRecordMessage);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        btCancelTreatRecordMessage = new QPushButton(TreatRecordEditView);
        btCancelTreatRecordMessage->setObjectName("btCancelTreatRecordMessage");

        horizontalLayout_5->addWidget(btCancelTreatRecordMessage);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_3, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(36, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 52, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);


        retranslateUi(TreatRecordEditView);

        QMetaObject::connectSlotsByName(TreatRecordEditView);
    } // setupUi

    void retranslateUi(QDialog *TreatRecordEditView)
    {
        TreatRecordEditView->setWindowTitle(QCoreApplication::translate("TreatRecordEditView", "\347\244\276\345\214\272\345\214\273\347\226\227\347\263\273\347\273\237\347\256\241\347\220\206", nullptr));
        label->setText(QCoreApplication::translate("TreatRecordEditView", "\347\274\226\350\276\221\345\260\261\350\257\212\350\256\260\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("TreatRecordEditView", "\347\227\205\344\272\272\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("TreatRecordEditView", "\345\214\273\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("TreatRecordEditView", "\345\260\261\350\257\212\346\227\245\346\234\237\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("TreatRecordEditView", "\345\274\200\345\205\267\350\215\257\345\223\201\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("TreatRecordEditView", "\350\257\212\346\226\255\347\273\223\346\236\234\357\274\232", nullptr));
        btSaveTreatRecordMessage->setText(QCoreApplication::translate("TreatRecordEditView", "\344\277\235\345\255\230", nullptr));
        btCancelTreatRecordMessage->setText(QCoreApplication::translate("TreatRecordEditView", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TreatRecordEditView: public Ui_TreatRecordEditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREATRECORDEDITVIEW_H
