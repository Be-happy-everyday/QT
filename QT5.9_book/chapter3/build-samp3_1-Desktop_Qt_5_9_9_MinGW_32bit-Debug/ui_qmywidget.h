/********************************************************************************
** Form generated from reading UI file 'qmywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYWIDGET_H
#define UI_QMYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qmywidget
{
public:
    QPlainTextEdit *textEdit;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBoy;
    QPushButton *btnBoyInc;
    QPushButton *btnClassinfo;
    QSpinBox *spinGirl;
    QPushButton *btnGirlInc;
    QPushButton *btnClear;

    void setupUi(QWidget *qmywidget)
    {
        if (qmywidget->objectName().isEmpty())
            qmywidget->setObjectName(QStringLiteral("qmywidget"));
        qmywidget->resize(343, 313);
        textEdit = new QPlainTextEdit(qmywidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 90, 301, 201));
        widget = new QWidget(qmywidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 300, 56));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 2, 1);

        spinBoy = new QSpinBox(widget);
        spinBoy->setObjectName(QStringLiteral("spinBoy"));
        spinBoy->setValue(10);

        gridLayout_2->addWidget(spinBoy, 0, 1, 1, 1);

        btnBoyInc = new QPushButton(widget);
        btnBoyInc->setObjectName(QStringLiteral("btnBoyInc"));

        gridLayout_2->addWidget(btnBoyInc, 0, 2, 1, 1);

        btnClassinfo = new QPushButton(widget);
        btnClassinfo->setObjectName(QStringLiteral("btnClassinfo"));

        gridLayout_2->addWidget(btnClassinfo, 0, 3, 1, 1);

        spinGirl = new QSpinBox(widget);
        spinGirl->setObjectName(QStringLiteral("spinGirl"));
        spinGirl->setValue(20);

        gridLayout_2->addWidget(spinGirl, 1, 1, 1, 1);

        btnGirlInc = new QPushButton(widget);
        btnGirlInc->setObjectName(QStringLiteral("btnGirlInc"));

        gridLayout_2->addWidget(btnGirlInc, 1, 2, 1, 1);

        btnClear = new QPushButton(widget);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        gridLayout_2->addWidget(btnClear, 1, 3, 1, 1);


        retranslateUi(qmywidget);

        QMetaObject::connectSlotsByName(qmywidget);
    } // setupUi

    void retranslateUi(QWidget *qmywidget)
    {
        qmywidget->setWindowTitle(QApplication::translate("qmywidget", "qmywidget", Q_NULLPTR));
        label->setText(QApplication::translate("qmywidget", "\350\256\276\347\275\256\347\224\267\347\224\237\345\271\264\351\276\204", Q_NULLPTR));
        label_2->setText(QApplication::translate("qmywidget", "\350\256\276\347\275\256\345\245\263\347\224\237\345\271\264\351\276\204", Q_NULLPTR));
        btnBoyInc->setText(QApplication::translate("qmywidget", "boy\351\225\277\345\244\247\344\270\200\345\262\201", Q_NULLPTR));
        btnClassinfo->setText(QApplication::translate("qmywidget", "\347\261\273\347\232\204\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", Q_NULLPTR));
        btnGirlInc->setText(QApplication::translate("qmywidget", "girl\351\225\277\345\244\247\344\270\200\345\262\201", Q_NULLPTR));
        btnClear->setText(QApplication::translate("qmywidget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qmywidget: public Ui_qmywidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYWIDGET_H
