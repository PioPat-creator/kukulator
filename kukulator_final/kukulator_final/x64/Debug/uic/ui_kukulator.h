/********************************************************************************
** Form generated from reading UI file 'kukulator.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KUKULATOR_H
#define UI_KUKULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kukulatorClass
{
public:
    QWidget *centralWidget;
    QPushButton *b_dec;
    QPushButton *b_4;
    QPushButton *b_1;
    QPushButton *b_7;
    QPushButton *b_bin;
    QPushButton *b_5;
    QPushButton *b_2;
    QPushButton *b_8;
    QPushButton *b_hex;
    QPushButton *b_6;
    QPushButton *b_3;
    QPushButton *b_9;
    QPushButton *b_plus;
    QPushButton *b_multiply;
    QPushButton *b_0;
    QPushButton *b_dot;
    QPushButton *b_minus;
    QPushButton *b_devide;
    QPushButton *b_equals;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_hex;
    QLineEdit *lineEdit_bin;
    QLineEdit *lineEdit_dec;
    QPushButton *b_clear;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *kukulatorClass)
    {
        if (kukulatorClass->objectName().isEmpty())
            kukulatorClass->setObjectName("kukulatorClass");
        kukulatorClass->resize(455, 425);
        centralWidget = new QWidget(kukulatorClass);
        centralWidget->setObjectName("centralWidget");
        b_dec = new QPushButton(centralWidget);
        b_dec->setObjectName("b_dec");
        b_dec->setGeometry(QRect(200, 100, 50, 41));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        b_dec->setFont(font);
        b_dec->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: 00FF00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_4 = new QPushButton(centralWidget);
        b_4->setObjectName("b_4");
        b_4->setGeometry(QRect(10, 190, 60, 40));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        b_4->setFont(font1);
        b_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_1 = new QPushButton(centralWidget);
        b_1->setObjectName("b_1");
        b_1->setGeometry(QRect(10, 230, 60, 40));
        b_1->setFont(font1);
        b_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_7 = new QPushButton(centralWidget);
        b_7->setObjectName("b_7");
        b_7->setGeometry(QRect(10, 150, 60, 40));
        b_7->setFont(font1);
        b_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_bin = new QPushButton(centralWidget);
        b_bin->setObjectName("b_bin");
        b_bin->setGeometry(QRect(200, 50, 50, 41));
        b_bin->setFont(font);
        b_bin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: 00FF00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_5 = new QPushButton(centralWidget);
        b_5->setObjectName("b_5");
        b_5->setGeometry(QRect(70, 190, 60, 40));
        b_5->setFont(font1);
        b_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_2 = new QPushButton(centralWidget);
        b_2->setObjectName("b_2");
        b_2->setGeometry(QRect(70, 230, 60, 40));
        b_2->setFont(font1);
        b_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_8 = new QPushButton(centralWidget);
        b_8->setObjectName("b_8");
        b_8->setGeometry(QRect(70, 150, 60, 40));
        b_8->setFont(font1);
        b_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_hex = new QPushButton(centralWidget);
        b_hex->setObjectName("b_hex");
        b_hex->setGeometry(QRect(200, 0, 50, 41));
        b_hex->setFont(font);
        b_hex->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: 00FF00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_6 = new QPushButton(centralWidget);
        b_6->setObjectName("b_6");
        b_6->setGeometry(QRect(130, 190, 60, 40));
        b_6->setFont(font1);
        b_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_3 = new QPushButton(centralWidget);
        b_3->setObjectName("b_3");
        b_3->setGeometry(QRect(130, 230, 60, 40));
        b_3->setFont(font1);
        b_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_9 = new QPushButton(centralWidget);
        b_9->setObjectName("b_9");
        b_9->setGeometry(QRect(130, 150, 60, 40));
        b_9->setFont(font1);
        b_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_plus = new QPushButton(centralWidget);
        b_plus->setObjectName("b_plus");
        b_plus->setGeometry(QRect(70, 310, 60, 40));
        b_plus->setFont(font1);
        b_plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_multiply = new QPushButton(centralWidget);
        b_multiply->setObjectName("b_multiply");
        b_multiply->setGeometry(QRect(10, 310, 60, 40));
        b_multiply->setFont(font1);
        b_multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_0 = new QPushButton(centralWidget);
        b_0->setObjectName("b_0");
        b_0->setGeometry(QRect(70, 270, 60, 40));
        b_0->setFont(font1);
        b_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_dot = new QPushButton(centralWidget);
        b_dot->setObjectName("b_dot");
        b_dot->setGeometry(QRect(130, 270, 60, 40));
        b_dot->setFont(font1);
        b_dot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_minus = new QPushButton(centralWidget);
        b_minus->setObjectName("b_minus");
        b_minus->setGeometry(QRect(130, 310, 60, 40));
        b_minus->setFont(font1);
        b_minus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_devide = new QPushButton(centralWidget);
        b_devide->setObjectName("b_devide");
        b_devide->setGeometry(QRect(10, 270, 60, 40));
        b_devide->setFont(font1);
        b_devide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        b_equals = new QPushButton(centralWidget);
        b_equals->setObjectName("b_equals");
        b_equals->setGeometry(QRect(10, 350, 120, 40));
        b_equals->setFont(font1);
        b_equals->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 0, 191, 141));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        lineEdit->setFont(font2);
        lineEdit->setCursorPosition(3);
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEdit->setReadOnly(true);
        lineEdit->setClearButtonEnabled(false);
        lineEdit_hex = new QLineEdit(centralWidget);
        lineEdit_hex->setObjectName("lineEdit_hex");
        lineEdit_hex->setGeometry(QRect(250, 0, 200, 41));
        QFont font3;
        font3.setPointSize(14);
        lineEdit_hex->setFont(font3);
        lineEdit_hex->setCursorPosition(1);
        lineEdit_hex->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_hex->setReadOnly(false);
        lineEdit_bin = new QLineEdit(centralWidget);
        lineEdit_bin->setObjectName("lineEdit_bin");
        lineEdit_bin->setGeometry(QRect(250, 50, 200, 41));
        lineEdit_bin->setFont(font3);
        lineEdit_bin->setCursorPosition(1);
        lineEdit_bin->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_bin->setReadOnly(false);
        lineEdit_dec = new QLineEdit(centralWidget);
        lineEdit_dec->setObjectName("lineEdit_dec");
        lineEdit_dec->setGeometry(QRect(250, 100, 200, 41));
        lineEdit_dec->setFont(font3);
        lineEdit_dec->setCursorPosition(1);
        lineEdit_dec->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_dec->setReadOnly(false);
        b_clear = new QPushButton(centralWidget);
        b_clear->setObjectName("b_clear");
        b_clear->setGeometry(QRect(130, 350, 60, 40));
        b_clear->setFont(font1);
        b_clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        kukulatorClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(kukulatorClass);
        mainToolBar->setObjectName("mainToolBar");
        kukulatorClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(kukulatorClass);
        statusBar->setObjectName("statusBar");
        kukulatorClass->setStatusBar(statusBar);

        retranslateUi(kukulatorClass);

        QMetaObject::connectSlotsByName(kukulatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *kukulatorClass)
    {
        kukulatorClass->setWindowTitle(QCoreApplication::translate("kukulatorClass", "kukulator", nullptr));
        b_dec->setText(QCoreApplication::translate("kukulatorClass", "DEC", nullptr));
        b_4->setText(QCoreApplication::translate("kukulatorClass", "4", nullptr));
        b_1->setText(QCoreApplication::translate("kukulatorClass", "1", nullptr));
        b_7->setText(QCoreApplication::translate("kukulatorClass", "7", nullptr));
        b_bin->setText(QCoreApplication::translate("kukulatorClass", "BIN", nullptr));
        b_5->setText(QCoreApplication::translate("kukulatorClass", "5", nullptr));
        b_2->setText(QCoreApplication::translate("kukulatorClass", "2", nullptr));
        b_8->setText(QCoreApplication::translate("kukulatorClass", "8", nullptr));
        b_hex->setText(QCoreApplication::translate("kukulatorClass", "HEX", nullptr));
        b_6->setText(QCoreApplication::translate("kukulatorClass", "6", nullptr));
        b_3->setText(QCoreApplication::translate("kukulatorClass", "3", nullptr));
        b_9->setText(QCoreApplication::translate("kukulatorClass", "9", nullptr));
        b_plus->setText(QCoreApplication::translate("kukulatorClass", "+", nullptr));
        b_multiply->setText(QCoreApplication::translate("kukulatorClass", "*", nullptr));
        b_0->setText(QCoreApplication::translate("kukulatorClass", "0", nullptr));
        b_dot->setText(QCoreApplication::translate("kukulatorClass", ",", nullptr));
        b_minus->setText(QCoreApplication::translate("kukulatorClass", "-", nullptr));
        b_devide->setText(QCoreApplication::translate("kukulatorClass", "/", nullptr));
        b_equals->setText(QCoreApplication::translate("kukulatorClass", "=", nullptr));
        lineEdit->setText(QCoreApplication::translate("kukulatorClass", "0.0", nullptr));
        lineEdit_hex->setText(QCoreApplication::translate("kukulatorClass", "0", nullptr));
        lineEdit_bin->setText(QCoreApplication::translate("kukulatorClass", "0", nullptr));
        lineEdit_dec->setText(QCoreApplication::translate("kukulatorClass", "0", nullptr));
        b_clear->setText(QCoreApplication::translate("kukulatorClass", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kukulatorClass: public Ui_kukulatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KUKULATOR_H
