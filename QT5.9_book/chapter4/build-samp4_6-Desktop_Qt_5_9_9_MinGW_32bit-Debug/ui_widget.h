/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox_2;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btntoComboBox;
    QPushButton *btnClearText;
    QCheckBox *chkBoxReadonly;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnInilItems;
    QPushButton *btnClearItems;
    QCheckBox *chkBoxEditable;
    QComboBox *comboBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QPushButton *btnIni2;
    QComboBox *comboBox_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(409, 367);
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 110, 391, 241));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 70, 371, 151));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 30, 371, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btntoComboBox = new QPushButton(widget);
        btntoComboBox->setObjectName(QStringLiteral("btntoComboBox"));

        horizontalLayout->addWidget(btntoComboBox);

        btnClearText = new QPushButton(widget);
        btnClearText->setObjectName(QStringLiteral("btnClearText"));

        horizontalLayout->addWidget(btnClearText);

        chkBoxReadonly = new QCheckBox(widget);
        chkBoxReadonly->setObjectName(QStringLiteral("chkBoxReadonly"));

        horizontalLayout->addWidget(chkBoxReadonly);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 10, 390, 89));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnInilItems = new QPushButton(groupBox);
        btnInilItems->setObjectName(QStringLiteral("btnInilItems"));

        gridLayout->addWidget(btnInilItems, 0, 0, 1, 1);

        btnClearItems = new QPushButton(groupBox);
        btnClearItems->setObjectName(QStringLiteral("btnClearItems"));

        gridLayout->addWidget(btnClearItems, 0, 1, 1, 1);

        chkBoxEditable = new QCheckBox(groupBox);
        chkBoxEditable->setObjectName(QStringLiteral("chkBoxEditable"));

        gridLayout->addWidget(chkBoxEditable, 0, 2, 1, 1);

        comboBox = new QComboBox(groupBox);
        QIcon icon;
        icon.addFile(QStringLiteral("icons/UNIT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QStringLiteral("icons/aim.ico"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon1, QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 0, 1, 3);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_3 = new QGroupBox(widget1);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnIni2 = new QPushButton(groupBox_3);
        btnIni2->setObjectName(QStringLiteral("btnIni2"));

        verticalLayout->addWidget(btnIni2);

        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout->addWidget(comboBox_2);


        horizontalLayout_2->addWidget(groupBox_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "QPlainTextEdit(\345\205\267\346\234\211\346\240\207\345\207\206\345\277\253\346\215\267\350\217\234\345\215\225)", Q_NULLPTR));
        btntoComboBox->setText(QApplication::translate("Widget", "\346\226\207\346\234\254\346\241\206\345\206\205\345\256\271\346\267\273\345\212\240\345\210\260ComboBox", Q_NULLPTR));
        btnClearText->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\346\226\207\346\234\254\345\206\205\345\256\271", Q_NULLPTR));
        chkBoxReadonly->setText(QApplication::translate("Widget", "\345\217\252\350\257\273", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\347\256\200\345\215\225ComboBox", Q_NULLPTR));
        btnInilItems->setText(QApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", Q_NULLPTR));
        btnClearItems->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
        chkBoxEditable->setText(QApplication::translate("Widget", "\345\217\257\347\274\226\350\276\221", Q_NULLPTR));
        comboBox->setItemText(0, QApplication::translate("Widget", "\345\214\227\344\272\254\345\270\202", Q_NULLPTR));
        comboBox->setItemText(1, QApplication::translate("Widget", "\344\270\212\346\265\267\345\270\202", Q_NULLPTR));

        groupBox_3->setTitle(QApplication::translate("Widget", "\346\234\211\347\224\250\346\210\267\346\225\260\346\215\256\347\232\204ComBox", Q_NULLPTR));
        btnIni2->setText(QApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\237\216\345\270\202+\345\214\272\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
