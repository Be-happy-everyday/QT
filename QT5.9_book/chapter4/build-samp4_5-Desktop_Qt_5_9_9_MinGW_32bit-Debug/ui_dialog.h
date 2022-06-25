/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *btnGetTime;
    QLabel *label_2;
    QLabel *label_3;
    QTimeEdit *timeEdit;
    QLineEdit *editTime;
    QPushButton *btnSetTime;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *editDate;
    QPushButton *btnSetDate;
    QLabel *label_5;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *editDateTime;
    QPushButton *btnSetDateTime;
    QGroupBox *groupBox;
    QProgressBar *progressBar;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *LCDHour;
    QLCDNumber *LCDMin;
    QLCDNumber *LCDSec;
    QWidget *widget2;
    QGridLayout *gridLayout;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QLabel *LabElapsTime;
    QLabel *label;
    QSpinBox *spinBoxIntv;
    QPushButton *btnSetIntv;
    QSpacerItem *horizontalSpacer;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *editCalender;
    QCalendarWidget *calendarWidget;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(800, 600);
        widget = new QWidget(Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 481, 371));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        btnGetTime = new QPushButton(groupBox_2);
        btnGetTime->setObjectName(QStringLiteral("btnGetTime"));

        gridLayout_3->addWidget(btnGetTime, 0, 0, 1, 2);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 3, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        timeEdit = new QTimeEdit(groupBox_2);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setDateTime(QDateTime(QDate(2001, 1, 1), QTime(15, 30, 55)));
        timeEdit->setTime(QTime(15, 30, 55));

        gridLayout_3->addWidget(timeEdit, 1, 1, 1, 1);

        editTime = new QLineEdit(groupBox_2);
        editTime->setObjectName(QStringLiteral("editTime"));

        gridLayout_3->addWidget(editTime, 1, 3, 1, 1);

        btnSetTime = new QPushButton(groupBox_2);
        btnSetTime->setObjectName(QStringLiteral("btnSetTime"));

        gridLayout_3->addWidget(btnSetTime, 1, 4, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setDate(QDate(2016, 11, 21));

        gridLayout_3->addWidget(dateEdit, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        editDate = new QLineEdit(groupBox_2);
        editDate->setObjectName(QStringLiteral("editDate"));

        gridLayout_3->addWidget(editDate, 2, 3, 1, 1);

        btnSetDate = new QPushButton(groupBox_2);
        btnSetDate->setObjectName(QStringLiteral("btnSetDate"));

        gridLayout_3->addWidget(btnSetDate, 2, 4, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox_2);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setDateTime(QDateTime(QDate(2018, 10, 9), QTime(8, 21, 28)));
        dateTimeEdit->setTime(QTime(8, 21, 28));

        gridLayout_3->addWidget(dateTimeEdit, 3, 1, 1, 1);

        editDateTime = new QLineEdit(groupBox_2);
        editDateTime->setObjectName(QStringLiteral("editDateTime"));

        gridLayout_3->addWidget(editDateTime, 3, 3, 1, 1);

        btnSetDateTime = new QPushButton(groupBox_2);
        btnSetDateTime->setObjectName(QStringLiteral("btnSetDateTime"));

        gridLayout_3->addWidget(btnSetDateTime, 3, 4, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(0, 130, 472, 24));
        progressBar->setValue(10);
        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(0, 80, 471, 51));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LCDHour = new QLCDNumber(widget1);
        LCDHour->setObjectName(QStringLiteral("LCDHour"));
        LCDHour->setDigitCount(2);
        LCDHour->setProperty("value", QVariant(10));

        horizontalLayout->addWidget(LCDHour);

        LCDMin = new QLCDNumber(widget1);
        LCDMin->setObjectName(QStringLiteral("LCDMin"));
        LCDMin->setDigitCount(2);
        LCDMin->setProperty("value", QVariant(26));

        horizontalLayout->addWidget(LCDMin);

        LCDSec = new QLCDNumber(widget1);
        LCDSec->setObjectName(QStringLiteral("LCDSec"));
        LCDSec->setDigitCount(2);
        LCDSec->setProperty("value", QVariant(35));
        LCDSec->setProperty("intValue", QVariant(35));

        horizontalLayout->addWidget(LCDSec);

        widget2 = new QWidget(groupBox);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(0, 20, 471, 56));
        gridLayout = new QGridLayout(widget2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnStart = new QPushButton(widget2);
        btnStart->setObjectName(QStringLiteral("btnStart"));

        gridLayout->addWidget(btnStart, 0, 0, 1, 2);

        btnStop = new QPushButton(widget2);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        btnStop->setEnabled(false);

        gridLayout->addWidget(btnStop, 0, 2, 1, 2);

        LabElapsTime = new QLabel(widget2);
        LabElapsTime->setObjectName(QStringLiteral("LabElapsTime"));
        QFont font;
        font.setPointSize(10);
        LabElapsTime->setFont(font);

        gridLayout->addWidget(LabElapsTime, 0, 4, 1, 2);

        label = new QLabel(widget2);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spinBoxIntv = new QSpinBox(widget2);
        spinBoxIntv->setObjectName(QStringLiteral("spinBoxIntv"));
        spinBoxIntv->setMaximum(999999);
        spinBoxIntv->setValue(1000);

        gridLayout->addWidget(spinBoxIntv, 1, 1, 1, 2);

        btnSetIntv = new QPushButton(widget2);
        btnSetIntv->setObjectName(QStringLiteral("btnSetIntv"));

        gridLayout->addWidget(btnSetIntv, 1, 3, 1, 2);

        horizontalSpacer = new QSpacerItem(98, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 5, 1, 1);


        verticalLayout->addWidget(groupBox);

        widget3 = new QWidget(Dialog);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(500, 10, 270, 371));
        verticalLayout_2 = new QVBoxLayout(widget3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(widget3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        editCalender = new QLineEdit(groupBox_3);
        editCalender->setObjectName(QStringLiteral("editCalender"));

        gridLayout_2->addWidget(editCalender, 0, 1, 1, 1);

        calendarWidget = new QCalendarWidget(groupBox_3);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));

        gridLayout_2->addWidget(calendarWidget, 1, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton = new QPushButton(widget3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Dialog", "\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        btnGetTime->setText(QApplication::translate("Dialog", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272</p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">\346\227\266\351\227\264</p></body></html>", Q_NULLPTR));
        timeEdit->setDisplayFormat(QApplication::translate("Dialog", "H:mm:ss", Q_NULLPTR));
        editTime->setText(QApplication::translate("Dialog", "15:30:55", Q_NULLPTR));
        btnSetTime->setText(QApplication::translate("Dialog", "\350\256\276\347\275\256\346\227\266\351\227\264", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">\346\227\245\346\234\237</p></body></html>", Q_NULLPTR));
        dateEdit->setDisplayFormat(QApplication::translate("Dialog", "yyyy\345\271\264M\346\234\210d\346\227\245", Q_NULLPTR));
        editDate->setText(QApplication::translate("Dialog", "2017-06-24", Q_NULLPTR));
        btnSetDate->setText(QApplication::translate("Dialog", "\350\256\276\347\275\256\346\227\245\346\234\237", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">\346\227\245\346\234\237\346\227\266\351\227\264</p></body></html>", Q_NULLPTR));
        dateTimeEdit->setDisplayFormat(QApplication::translate("Dialog", "yyyy-M-d H:mm:ss", Q_NULLPTR));
        editDateTime->setText(QApplication::translate("Dialog", "2017-06-24 15:22:35", Q_NULLPTR));
        btnSetDateTime->setText(QApplication::translate("Dialog", "\350\256\276\347\275\256\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Dialog", "\345\256\232\346\227\266\345\231\250", Q_NULLPTR));
        btnStart->setText(QApplication::translate("Dialog", "\345\274\200\345\247\213", Q_NULLPTR));
        btnStop->setText(QApplication::translate("Dialog", "\345\201\234\346\255\242", Q_NULLPTR));
        LabElapsTime->setText(QApplication::translate("Dialog", "\346\265\201\351\200\235\346\227\266\351\227\264", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "\345\256\232\346\227\266\345\221\250\346\234\237", Q_NULLPTR));
        spinBoxIntv->setSuffix(QApplication::translate("Dialog", " ms", Q_NULLPTR));
        btnSetIntv->setText(QApplication::translate("Dialog", "\350\256\276\347\275\256\345\221\250\346\234\237", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Dialog", "\346\227\245\345\216\206\351\200\211\346\213\251", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
