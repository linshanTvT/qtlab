/********************************************************************************
** Form generated from reading UI file 'drugeditview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUGEDITVIEW_H
#define UI_DRUGEDITVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_DrugEditView
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *DrugName;
    QLabel *label_3;
    QDoubleSpinBox *Dosage;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpinBox *InventoryNumber;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_20;
    QSpinBox *DeliveryNumber;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDateEdit *ManufactureDate;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *ExpirationDate;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QDateEdit *EntryTime;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_16;
    QDateEdit *DeliveryTime;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *btSaveDrugMessage;
    QSpacerItem *horizontalSpacer;
    QPushButton *btCancelDrugMessage;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *DrugEditView)
    {
        if (DrugEditView->objectName().isEmpty())
            DrugEditView->setObjectName("DrugEditView");
        DrugEditView->resize(624, 508);
        gridLayout = new QGridLayout(DrugEditView);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(20, 70, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        label = new QLabel(DrugEditView);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 71, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(131, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(DrugEditView);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_2);

        DrugName = new QLineEdit(DrugEditView);
        DrugName->setObjectName("DrugName");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DrugName->sizePolicy().hasHeightForWidth());
        DrugName->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(DrugName);

        label_3 = new QLabel(DrugEditView);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_3);

        Dosage = new QDoubleSpinBox(DrugEditView);
        Dosage->setObjectName("Dosage");
        sizePolicy1.setHeightForWidth(Dosage->sizePolicy().hasHeightForWidth());
        Dosage->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(Dosage);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(DrugEditView);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_5);

        InventoryNumber = new QSpinBox(DrugEditView);
        InventoryNumber->setObjectName("InventoryNumber");

        horizontalLayout_3->addWidget(InventoryNumber);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_20 = new QLabel(DrugEditView);
        label_20->setObjectName("label_20");
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(label_20);

        DeliveryNumber = new QSpinBox(DrugEditView);
        DeliveryNumber->setObjectName("DeliveryNumber");

        horizontalLayout_8->addWidget(DeliveryNumber);


        horizontalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(DrugEditView);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_4);

        ManufactureDate = new QDateEdit(DrugEditView);
        ManufactureDate->setObjectName("ManufactureDate");
        ManufactureDate->setCalendarPopup(true);

        horizontalLayout_4->addWidget(ManufactureDate);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(DrugEditView);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_9);

        ExpirationDate = new QLineEdit(DrugEditView);
        ExpirationDate->setObjectName("ExpirationDate");

        horizontalLayout_5->addWidget(ExpirationDate);

        label_6 = new QLabel(DrugEditView);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_12 = new QLabel(DrugEditView);
        label_12->setObjectName("label_12");
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_12);

        EntryTime = new QDateEdit(DrugEditView);
        EntryTime->setObjectName("EntryTime");
        EntryTime->setCalendarPopup(true);

        horizontalLayout_6->addWidget(EntryTime);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_16 = new QLabel(DrugEditView);
        label_16->setObjectName("label_16");
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(label_16);

        DeliveryTime = new QDateEdit(DrugEditView);
        DeliveryTime->setObjectName("DeliveryTime");
        DeliveryTime->setCalendarPopup(true);

        horizontalLayout_7->addWidget(DeliveryTime);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        btSaveDrugMessage = new QPushButton(DrugEditView);
        btSaveDrugMessage->setObjectName("btSaveDrugMessage");

        horizontalLayout_9->addWidget(btSaveDrugMessage);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        btCancelDrugMessage = new QPushButton(DrugEditView);
        btCancelDrugMessage->setObjectName("btCancelDrugMessage");

        horizontalLayout_9->addWidget(btCancelDrugMessage);


        verticalLayout->addLayout(horizontalLayout_9);


        gridLayout->addLayout(verticalLayout, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(130, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 70, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);


        retranslateUi(DrugEditView);

        QMetaObject::connectSlotsByName(DrugEditView);
    } // setupUi

    void retranslateUi(QDialog *DrugEditView)
    {
        DrugEditView->setWindowTitle(QCoreApplication::translate("DrugEditView", "\347\244\276\345\214\272\345\214\273\347\226\227\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("DrugEditView", "\347\274\226\350\276\221\350\215\257\345\223\201\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("DrugEditView", "\350\215\257\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("DrugEditView", "\345\211\202\351\207\217\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("DrugEditView", "\345\272\223\345\255\230\346\225\260\351\207\217\357\274\232", nullptr));
        label_20->setText(QCoreApplication::translate("DrugEditView", "\345\207\272\345\272\223\346\225\260\351\207\217\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("DrugEditView", "\347\224\237\344\272\247\346\227\245\346\234\237\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("DrugEditView", "\344\277\235\350\264\250\346\234\237\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("DrugEditView", "\346\234\210", nullptr));
        label_12->setText(QCoreApplication::translate("DrugEditView", "\345\205\245\345\272\223\346\227\266\351\227\264\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("DrugEditView", "\345\207\272\345\272\223\346\227\266\351\227\264\357\274\232", nullptr));
        btSaveDrugMessage->setText(QCoreApplication::translate("DrugEditView", "\344\277\235\345\255\230", nullptr));
        btCancelDrugMessage->setText(QCoreApplication::translate("DrugEditView", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrugEditView: public Ui_DrugEditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUGEDITVIEW_H
