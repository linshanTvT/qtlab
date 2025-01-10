/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainview
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *backButton;
    QTabWidget *tabWidget;
    QWidget *tabDoctorMessage;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *SearchDoctorEdit;
    QPushButton *SearchDoctorButton;
    QLabel *SortDoctorlabel;
    QComboBox *SortDoctorcomboBox;
    QLabel *ActionDoctorlabel;
    QComboBox *ActionDoctorcomboBox;
    QTableView *DoctorMessageView;
    QWidget *tabPatientMessage;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *SearchPatientEdit;
    QPushButton *SearchPatientButton;
    QLabel *SortPatientlabel;
    QComboBox *SortPatientcomboBox;
    QLabel *ActionPatientlabel;
    QComboBox *ActionPatientcomboBox;
    QTableView *PatientMessageView;
    QWidget *tabDrugMessage;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *SearchDrugEdit;
    QPushButton *SearchDrugButton;
    QLabel *SortDruglabel;
    QComboBox *SortDrugcomboBox;
    QLabel *ActionDruglabel;
    QComboBox *ActionDrugcomboBox;
    QTableView *DrugMessageView;
    QWidget *tabTreatRecord;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *SearchTreatRecordEdit;
    QPushButton *SearchTreatRecordButton;
    QLabel *SortTreatRecordlabel;
    QComboBox *SortTreatRecordcomboBox;
    QLabel *FilterTreatRecordlabel;
    QComboBox *FilterTreatRecordcomboBox;
    QLabel *ActionTreatRecordlabel;
    QComboBox *ActionTreatRecordcomboBox;
    QTableView *TreatRecordMessageView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainview)
    {
        if (mainview->objectName().isEmpty())
            mainview->setObjectName("mainview");
        mainview->resize(807, 655);
        centralwidget = new QWidget(mainview);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");

        horizontalLayout_2->addWidget(backButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setTabPosition(QTabWidget::TabPosition::North);
        tabDoctorMessage = new QWidget();
        tabDoctorMessage->setObjectName("tabDoctorMessage");
        gridLayout_2 = new QGridLayout(tabDoctorMessage);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(tabDoctorMessage);
        label->setObjectName("label");
        label->setEnabled(true);

        horizontalLayout_3->addWidget(label);

        SearchDoctorEdit = new QLineEdit(tabDoctorMessage);
        SearchDoctorEdit->setObjectName("SearchDoctorEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SearchDoctorEdit->sizePolicy().hasHeightForWidth());
        SearchDoctorEdit->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(SearchDoctorEdit);

        SearchDoctorButton = new QPushButton(tabDoctorMessage);
        SearchDoctorButton->setObjectName("SearchDoctorButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SearchDoctorButton->sizePolicy().hasHeightForWidth());
        SearchDoctorButton->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(SearchDoctorButton);

        SortDoctorlabel = new QLabel(tabDoctorMessage);
        SortDoctorlabel->setObjectName("SortDoctorlabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(SortDoctorlabel->sizePolicy().hasHeightForWidth());
        SortDoctorlabel->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(SortDoctorlabel);

        SortDoctorcomboBox = new QComboBox(tabDoctorMessage);
        SortDoctorcomboBox->addItem(QString());
        SortDoctorcomboBox->addItem(QString());
        SortDoctorcomboBox->addItem(QString());
        SortDoctorcomboBox->addItem(QString());
        SortDoctorcomboBox->addItem(QString());
        SortDoctorcomboBox->addItem(QString());
        SortDoctorcomboBox->addItem(QString());
        SortDoctorcomboBox->addItem(QString());
        SortDoctorcomboBox->setObjectName("SortDoctorcomboBox");
        sizePolicy.setHeightForWidth(SortDoctorcomboBox->sizePolicy().hasHeightForWidth());
        SortDoctorcomboBox->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(SortDoctorcomboBox);

        ActionDoctorlabel = new QLabel(tabDoctorMessage);
        ActionDoctorlabel->setObjectName("ActionDoctorlabel");
        sizePolicy2.setHeightForWidth(ActionDoctorlabel->sizePolicy().hasHeightForWidth());
        ActionDoctorlabel->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(ActionDoctorlabel);

        ActionDoctorcomboBox = new QComboBox(tabDoctorMessage);
        ActionDoctorcomboBox->addItem(QString());
        ActionDoctorcomboBox->addItem(QString());
        ActionDoctorcomboBox->addItem(QString());
        ActionDoctorcomboBox->addItem(QString());
        ActionDoctorcomboBox->addItem(QString());
        ActionDoctorcomboBox->setObjectName("ActionDoctorcomboBox");
        sizePolicy.setHeightForWidth(ActionDoctorcomboBox->sizePolicy().hasHeightForWidth());
        ActionDoctorcomboBox->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(ActionDoctorcomboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        DoctorMessageView = new QTableView(tabDoctorMessage);
        DoctorMessageView->setObjectName("DoctorMessageView");

        verticalLayout->addWidget(DoctorMessageView);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tabDoctorMessage, QString());
        tabPatientMessage = new QWidget();
        tabPatientMessage->setObjectName("tabPatientMessage");
        gridLayout_3 = new QGridLayout(tabPatientMessage);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(tabPatientMessage);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        SearchPatientEdit = new QLineEdit(tabPatientMessage);
        SearchPatientEdit->setObjectName("SearchPatientEdit");
        sizePolicy.setHeightForWidth(SearchPatientEdit->sizePolicy().hasHeightForWidth());
        SearchPatientEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(SearchPatientEdit);

        SearchPatientButton = new QPushButton(tabPatientMessage);
        SearchPatientButton->setObjectName("SearchPatientButton");
        sizePolicy1.setHeightForWidth(SearchPatientButton->sizePolicy().hasHeightForWidth());
        SearchPatientButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(SearchPatientButton);

        SortPatientlabel = new QLabel(tabPatientMessage);
        SortPatientlabel->setObjectName("SortPatientlabel");
        sizePolicy2.setHeightForWidth(SortPatientlabel->sizePolicy().hasHeightForWidth());
        SortPatientlabel->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(SortPatientlabel);

        SortPatientcomboBox = new QComboBox(tabPatientMessage);
        SortPatientcomboBox->addItem(QString());
        SortPatientcomboBox->addItem(QString());
        SortPatientcomboBox->addItem(QString());
        SortPatientcomboBox->addItem(QString());
        SortPatientcomboBox->addItem(QString());
        SortPatientcomboBox->addItem(QString());
        SortPatientcomboBox->setObjectName("SortPatientcomboBox");
        sizePolicy.setHeightForWidth(SortPatientcomboBox->sizePolicy().hasHeightForWidth());
        SortPatientcomboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(SortPatientcomboBox);

        ActionPatientlabel = new QLabel(tabPatientMessage);
        ActionPatientlabel->setObjectName("ActionPatientlabel");
        sizePolicy2.setHeightForWidth(ActionPatientlabel->sizePolicy().hasHeightForWidth());
        ActionPatientlabel->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(ActionPatientlabel);

        ActionPatientcomboBox = new QComboBox(tabPatientMessage);
        ActionPatientcomboBox->addItem(QString());
        ActionPatientcomboBox->addItem(QString());
        ActionPatientcomboBox->addItem(QString());
        ActionPatientcomboBox->addItem(QString());
        ActionPatientcomboBox->addItem(QString());
        ActionPatientcomboBox->setObjectName("ActionPatientcomboBox");

        horizontalLayout->addWidget(ActionPatientcomboBox);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        PatientMessageView = new QTableView(tabPatientMessage);
        PatientMessageView->setObjectName("PatientMessageView");

        gridLayout_3->addWidget(PatientMessageView, 1, 0, 1, 1);

        tabWidget->addTab(tabPatientMessage, QString());
        tabDrugMessage = new QWidget();
        tabDrugMessage->setObjectName("tabDrugMessage");
        gridLayout_5 = new QGridLayout(tabDrugMessage);
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(tabDrugMessage);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        SearchDrugEdit = new QLineEdit(tabDrugMessage);
        SearchDrugEdit->setObjectName("SearchDrugEdit");
        sizePolicy.setHeightForWidth(SearchDrugEdit->sizePolicy().hasHeightForWidth());
        SearchDrugEdit->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(SearchDrugEdit);

        SearchDrugButton = new QPushButton(tabDrugMessage);
        SearchDrugButton->setObjectName("SearchDrugButton");
        sizePolicy1.setHeightForWidth(SearchDrugButton->sizePolicy().hasHeightForWidth());
        SearchDrugButton->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(SearchDrugButton);

        SortDruglabel = new QLabel(tabDrugMessage);
        SortDruglabel->setObjectName("SortDruglabel");
        sizePolicy2.setHeightForWidth(SortDruglabel->sizePolicy().hasHeightForWidth());
        SortDruglabel->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(SortDruglabel);

        SortDrugcomboBox = new QComboBox(tabDrugMessage);
        SortDrugcomboBox->addItem(QString());
        SortDrugcomboBox->addItem(QString());
        SortDrugcomboBox->addItem(QString());
        SortDrugcomboBox->addItem(QString());
        SortDrugcomboBox->addItem(QString());
        SortDrugcomboBox->addItem(QString());
        SortDrugcomboBox->addItem(QString());
        SortDrugcomboBox->addItem(QString());
        SortDrugcomboBox->setObjectName("SortDrugcomboBox");

        horizontalLayout_4->addWidget(SortDrugcomboBox);

        ActionDruglabel = new QLabel(tabDrugMessage);
        ActionDruglabel->setObjectName("ActionDruglabel");
        sizePolicy2.setHeightForWidth(ActionDruglabel->sizePolicy().hasHeightForWidth());
        ActionDruglabel->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(ActionDruglabel);

        ActionDrugcomboBox = new QComboBox(tabDrugMessage);
        ActionDrugcomboBox->addItem(QString());
        ActionDrugcomboBox->addItem(QString());
        ActionDrugcomboBox->addItem(QString());
        ActionDrugcomboBox->addItem(QString());
        ActionDrugcomboBox->addItem(QString());
        ActionDrugcomboBox->addItem(QString());
        ActionDrugcomboBox->setObjectName("ActionDrugcomboBox");

        horizontalLayout_4->addWidget(ActionDrugcomboBox);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        DrugMessageView = new QTableView(tabDrugMessage);
        DrugMessageView->setObjectName("DrugMessageView");

        gridLayout_5->addWidget(DrugMessageView, 1, 0, 1, 1);

        tabWidget->addTab(tabDrugMessage, QString());
        tabTreatRecord = new QWidget();
        tabTreatRecord->setObjectName("tabTreatRecord");
        gridLayout_4 = new QGridLayout(tabTreatRecord);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(tabTreatRecord);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        SearchTreatRecordEdit = new QLineEdit(tabTreatRecord);
        SearchTreatRecordEdit->setObjectName("SearchTreatRecordEdit");
        sizePolicy.setHeightForWidth(SearchTreatRecordEdit->sizePolicy().hasHeightForWidth());
        SearchTreatRecordEdit->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(SearchTreatRecordEdit);

        SearchTreatRecordButton = new QPushButton(tabTreatRecord);
        SearchTreatRecordButton->setObjectName("SearchTreatRecordButton");
        sizePolicy1.setHeightForWidth(SearchTreatRecordButton->sizePolicy().hasHeightForWidth());
        SearchTreatRecordButton->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(SearchTreatRecordButton);

        SortTreatRecordlabel = new QLabel(tabTreatRecord);
        SortTreatRecordlabel->setObjectName("SortTreatRecordlabel");
        sizePolicy2.setHeightForWidth(SortTreatRecordlabel->sizePolicy().hasHeightForWidth());
        SortTreatRecordlabel->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(SortTreatRecordlabel);

        SortTreatRecordcomboBox = new QComboBox(tabTreatRecord);
        SortTreatRecordcomboBox->addItem(QString());
        SortTreatRecordcomboBox->addItem(QString());
        SortTreatRecordcomboBox->setObjectName("SortTreatRecordcomboBox");

        horizontalLayout_5->addWidget(SortTreatRecordcomboBox);

        FilterTreatRecordlabel = new QLabel(tabTreatRecord);
        FilterTreatRecordlabel->setObjectName("FilterTreatRecordlabel");
        sizePolicy2.setHeightForWidth(FilterTreatRecordlabel->sizePolicy().hasHeightForWidth());
        FilterTreatRecordlabel->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(FilterTreatRecordlabel);

        FilterTreatRecordcomboBox = new QComboBox(tabTreatRecord);
        FilterTreatRecordcomboBox->addItem(QString());
        FilterTreatRecordcomboBox->addItem(QString());
        FilterTreatRecordcomboBox->addItem(QString());
        FilterTreatRecordcomboBox->setObjectName("FilterTreatRecordcomboBox");

        horizontalLayout_5->addWidget(FilterTreatRecordcomboBox);

        ActionTreatRecordlabel = new QLabel(tabTreatRecord);
        ActionTreatRecordlabel->setObjectName("ActionTreatRecordlabel");
        sizePolicy2.setHeightForWidth(ActionTreatRecordlabel->sizePolicy().hasHeightForWidth());
        ActionTreatRecordlabel->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(ActionTreatRecordlabel);

        ActionTreatRecordcomboBox = new QComboBox(tabTreatRecord);
        ActionTreatRecordcomboBox->addItem(QString());
        ActionTreatRecordcomboBox->addItem(QString());
        ActionTreatRecordcomboBox->addItem(QString());
        ActionTreatRecordcomboBox->addItem(QString());
        ActionTreatRecordcomboBox->setObjectName("ActionTreatRecordcomboBox");

        horizontalLayout_5->addWidget(ActionTreatRecordcomboBox);


        gridLayout_4->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        TreatRecordMessageView = new QTableView(tabTreatRecord);
        TreatRecordMessageView->setObjectName("TreatRecordMessageView");

        gridLayout_4->addWidget(TreatRecordMessageView, 1, 0, 1, 1);

        tabWidget->addTab(tabTreatRecord, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        mainview->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainview);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 807, 18));
        mainview->setMenuBar(menubar);
        statusbar = new QStatusBar(mainview);
        statusbar->setObjectName("statusbar");
        mainview->setStatusBar(statusbar);

        retranslateUi(mainview);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mainview);
    } // setupUi

    void retranslateUi(QMainWindow *mainview)
    {
        mainview->setWindowTitle(QCoreApplication::translate("mainview", "\347\244\276\345\214\272\345\214\273\347\226\227\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        backButton->setText(QCoreApplication::translate("mainview", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("mainview", "\346\237\245\346\211\276\345\206\205\345\256\271\357\274\232", nullptr));
        SearchDoctorButton->setText(QCoreApplication::translate("mainview", "\346\237\245\350\257\242", nullptr));
        SortDoctorlabel->setText(QCoreApplication::translate("mainview", "\346\216\222\345\272\217\357\274\232", nullptr));
        SortDoctorcomboBox->setItemText(0, QCoreApplication::translate("mainview", "\346\214\211\345\271\264\351\276\204\345\215\207\345\272\217", nullptr));
        SortDoctorcomboBox->setItemText(1, QCoreApplication::translate("mainview", "\346\214\211\345\271\264\351\276\204\351\231\215\345\272\217", nullptr));
        SortDoctorcomboBox->setItemText(2, QCoreApplication::translate("mainview", "\346\214\211\350\272\253\351\253\230\345\215\207\345\272\217", nullptr));
        SortDoctorcomboBox->setItemText(3, QCoreApplication::translate("mainview", "\346\214\211\350\272\253\351\253\230\351\231\215\345\272\217", nullptr));
        SortDoctorcomboBox->setItemText(4, QCoreApplication::translate("mainview", "\346\214\211\344\275\223\351\207\215\345\215\207\345\272\217", nullptr));
        SortDoctorcomboBox->setItemText(5, QCoreApplication::translate("mainview", "\346\214\211\344\275\223\351\207\215\351\231\215\345\272\217", nullptr));
        SortDoctorcomboBox->setItemText(6, QCoreApplication::translate("mainview", "\346\214\211\345\205\245\350\201\214\346\227\266\351\227\264\345\215\207\345\272\217", nullptr));
        SortDoctorcomboBox->setItemText(7, QCoreApplication::translate("mainview", "\346\214\211\345\205\245\350\201\214\346\227\266\351\227\264\351\231\215\345\272\217", nullptr));

        ActionDoctorlabel->setText(QCoreApplication::translate("mainview", "\346\223\215\344\275\234\357\274\232", nullptr));
        ActionDoctorcomboBox->setItemText(0, QCoreApplication::translate("mainview", "\345\275\225\345\205\245", nullptr));
        ActionDoctorcomboBox->setItemText(1, QCoreApplication::translate("mainview", "\344\277\256\346\224\271", nullptr));
        ActionDoctorcomboBox->setItemText(2, QCoreApplication::translate("mainview", "\345\210\240\351\231\244", nullptr));
        ActionDoctorcomboBox->setItemText(3, QCoreApplication::translate("mainview", "\345\257\274\345\205\245", nullptr));
        ActionDoctorcomboBox->setItemText(4, QCoreApplication::translate("mainview", "\345\257\274\345\207\272", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tabDoctorMessage), QCoreApplication::translate("mainview", "\345\214\273\347\224\237\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("mainview", "\346\237\245\346\211\276\345\206\205\345\256\271\357\274\232", nullptr));
        SearchPatientButton->setText(QCoreApplication::translate("mainview", "\346\237\245\350\257\242", nullptr));
        SortPatientlabel->setText(QCoreApplication::translate("mainview", "\346\216\222\345\272\217\357\274\232", nullptr));
        SortPatientcomboBox->setItemText(0, QCoreApplication::translate("mainview", "\346\214\211\345\271\264\351\276\204\345\215\207\345\272\217", nullptr));
        SortPatientcomboBox->setItemText(1, QCoreApplication::translate("mainview", "\346\214\211\345\271\264\351\276\204\351\231\215\345\272\217", nullptr));
        SortPatientcomboBox->setItemText(2, QCoreApplication::translate("mainview", "\346\214\211\350\272\253\351\253\230\345\215\207\345\272\217", nullptr));
        SortPatientcomboBox->setItemText(3, QCoreApplication::translate("mainview", "\346\214\211\350\272\253\351\253\230\351\231\215\345\272\217", nullptr));
        SortPatientcomboBox->setItemText(4, QCoreApplication::translate("mainview", "\346\214\211\344\275\223\351\207\215\345\215\207\345\272\217", nullptr));
        SortPatientcomboBox->setItemText(5, QCoreApplication::translate("mainview", "\346\214\211\344\275\223\351\207\215\351\231\215\345\272\217", nullptr));

        ActionPatientlabel->setText(QCoreApplication::translate("mainview", "\346\223\215\344\275\234\357\274\232", nullptr));
        ActionPatientcomboBox->setItemText(0, QCoreApplication::translate("mainview", "\345\275\225\345\205\245", nullptr));
        ActionPatientcomboBox->setItemText(1, QCoreApplication::translate("mainview", "\344\277\256\346\224\271", nullptr));
        ActionPatientcomboBox->setItemText(2, QCoreApplication::translate("mainview", "\345\210\240\351\231\244", nullptr));
        ActionPatientcomboBox->setItemText(3, QCoreApplication::translate("mainview", "\345\257\274\345\205\245", nullptr));
        ActionPatientcomboBox->setItemText(4, QCoreApplication::translate("mainview", "\345\257\274\345\207\272", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tabPatientMessage), QCoreApplication::translate("mainview", "\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("mainview", "\346\237\245\346\211\276\345\206\205\345\256\271\357\274\232", nullptr));
        SearchDrugButton->setText(QCoreApplication::translate("mainview", "\346\237\245\350\257\242", nullptr));
        SortDruglabel->setText(QCoreApplication::translate("mainview", "\346\216\222\345\272\217\357\274\232", nullptr));
        SortDrugcomboBox->setItemText(0, QCoreApplication::translate("mainview", "\346\214\211\345\272\223\345\255\230\346\225\260\351\207\217\345\215\207\345\272\217", nullptr));
        SortDrugcomboBox->setItemText(1, QCoreApplication::translate("mainview", "\346\214\211\345\272\223\345\255\230\346\225\260\351\207\217\351\231\215\345\272\217", nullptr));
        SortDrugcomboBox->setItemText(2, QCoreApplication::translate("mainview", "\346\214\211\344\277\235\350\264\250\346\234\237\345\215\207\345\272\217", nullptr));
        SortDrugcomboBox->setItemText(3, QCoreApplication::translate("mainview", "\346\214\211\344\277\235\350\264\250\346\234\237\351\231\215\345\272\217", nullptr));
        SortDrugcomboBox->setItemText(4, QCoreApplication::translate("mainview", "\346\214\211\345\205\245\345\272\223\346\227\266\351\227\264\345\215\207\345\272\217", nullptr));
        SortDrugcomboBox->setItemText(5, QCoreApplication::translate("mainview", "\346\214\211\345\205\245\345\272\223\346\227\266\351\227\264\351\231\215\345\272\217", nullptr));
        SortDrugcomboBox->setItemText(6, QCoreApplication::translate("mainview", "\346\214\211\345\207\272\345\272\223\346\227\266\351\227\264\345\215\207\345\272\217", nullptr));
        SortDrugcomboBox->setItemText(7, QCoreApplication::translate("mainview", "\346\214\211\345\207\272\345\272\223\346\227\266\351\227\264\351\231\215\345\272\217", nullptr));

        ActionDruglabel->setText(QCoreApplication::translate("mainview", "\346\223\215\344\275\234\357\274\232", nullptr));
        ActionDrugcomboBox->setItemText(0, QCoreApplication::translate("mainview", "\345\275\225\345\205\245", nullptr));
        ActionDrugcomboBox->setItemText(1, QCoreApplication::translate("mainview", "\344\277\256\346\224\271", nullptr));
        ActionDrugcomboBox->setItemText(2, QCoreApplication::translate("mainview", "\345\210\240\351\231\244", nullptr));
        ActionDrugcomboBox->setItemText(3, QCoreApplication::translate("mainview", "\345\257\274\345\205\245", nullptr));
        ActionDrugcomboBox->setItemText(4, QCoreApplication::translate("mainview", "\345\257\274\345\207\272", nullptr));
        ActionDrugcomboBox->setItemText(5, QCoreApplication::translate("mainview", "\345\272\223\345\255\230\351\242\204\350\255\246", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tabDrugMessage), QCoreApplication::translate("mainview", "\350\215\257\345\223\201\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("mainview", "\346\237\245\346\211\276\345\206\205\345\256\271\357\274\232", nullptr));
        SearchTreatRecordButton->setText(QCoreApplication::translate("mainview", "\346\237\245\350\257\242", nullptr));
        SortTreatRecordlabel->setText(QCoreApplication::translate("mainview", "\346\216\222\345\272\217\357\274\232", nullptr));
        SortTreatRecordcomboBox->setItemText(0, QCoreApplication::translate("mainview", "\346\214\211\345\260\261\350\257\212\346\227\245\346\234\237\345\215\207\345\272\217", nullptr));
        SortTreatRecordcomboBox->setItemText(1, QCoreApplication::translate("mainview", "\346\214\211\345\260\261\350\257\212\346\227\245\346\234\237\351\231\215\345\272\217", nullptr));

        FilterTreatRecordlabel->setText(QCoreApplication::translate("mainview", "\350\277\207\346\273\244\357\274\232", nullptr));
        FilterTreatRecordcomboBox->setItemText(0, QCoreApplication::translate("mainview", "\350\277\221\344\270\200\345\221\250\347\232\204\345\260\261\350\257\212\350\256\260\345\275\225", nullptr));
        FilterTreatRecordcomboBox->setItemText(1, QCoreApplication::translate("mainview", "\350\277\221\344\270\200\344\270\252\346\234\210\347\232\204\345\260\261\350\257\212\350\256\260\345\275\225", nullptr));
        FilterTreatRecordcomboBox->setItemText(2, QCoreApplication::translate("mainview", "\350\277\221\344\270\200\345\271\264\347\232\204\345\260\261\350\257\212\350\256\260\345\275\225", nullptr));

        ActionTreatRecordlabel->setText(QCoreApplication::translate("mainview", "\346\223\215\344\275\234\357\274\232", nullptr));
        ActionTreatRecordcomboBox->setItemText(0, QCoreApplication::translate("mainview", "\345\275\225\345\205\245", nullptr));
        ActionTreatRecordcomboBox->setItemText(1, QCoreApplication::translate("mainview", "\344\277\256\346\224\271", nullptr));
        ActionTreatRecordcomboBox->setItemText(2, QCoreApplication::translate("mainview", "\345\210\240\351\231\244", nullptr));
        ActionTreatRecordcomboBox->setItemText(3, QCoreApplication::translate("mainview", "\345\257\274\345\207\272", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tabTreatRecord), QCoreApplication::translate("mainview", "\345\260\261\350\257\212\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainview: public Ui_mainview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
