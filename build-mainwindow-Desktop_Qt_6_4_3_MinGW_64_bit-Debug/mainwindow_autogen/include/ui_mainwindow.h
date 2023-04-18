/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *button_help;
    QPushButton *button_mul;
    QPushButton *button_add;
    QPushButton *button_clear;
    QPushButton *button_8;
    QPushButton *button_6;
    QPushButton *button_fact;
    QPushButton *button_point;
    QPushButton *button_root;
    QPushButton *button_power;
    QPushButton *button_del;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_9;
    QPushButton *button_4;
    QPushButton *button_neg;
    QPushButton *button_7;
    QPushButton *button_div;
    QPushButton *button_0;
    QLineEdit *display;
    QPushButton *button_sub;
    QPushButton *button_5;
    QPushButton *button_equal;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(381, 423);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: #F5F5F5;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        button_help = new QPushButton(centralwidget);
        button_help->setObjectName("button_help");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_help->sizePolicy().hasHeightForWidth());
        button_help->setSizePolicy(sizePolicy);
        button_help->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_help, 1, 0, 1, 1);

        button_mul = new QPushButton(centralwidget);
        button_mul->setObjectName("button_mul");
        sizePolicy.setHeightForWidth(button_mul->sizePolicy().hasHeightForWidth());
        button_mul->setSizePolicy(sizePolicy);
        button_mul->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_mul, 2, 4, 1, 1);

        button_add = new QPushButton(centralwidget);
        button_add->setObjectName("button_add");
        sizePolicy.setHeightForWidth(button_add->sizePolicy().hasHeightForWidth());
        button_add->setSizePolicy(sizePolicy);
        button_add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_add, 4, 4, 1, 1);

        button_clear = new QPushButton(centralwidget);
        button_clear->setObjectName("button_clear");
        sizePolicy.setHeightForWidth(button_clear->sizePolicy().hasHeightForWidth());
        button_clear->setSizePolicy(sizePolicy);
        button_clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_clear, 1, 1, 1, 1);

        button_8 = new QPushButton(centralwidget);
        button_8->setObjectName("button_8");
        sizePolicy.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy);
        button_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_8, 2, 2, 1, 1);

        button_6 = new QPushButton(centralwidget);
        button_6->setObjectName("button_6");
        sizePolicy.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy);
        button_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_6, 3, 3, 1, 1);

        button_fact = new QPushButton(centralwidget);
        button_fact->setObjectName("button_fact");
        sizePolicy.setHeightForWidth(button_fact->sizePolicy().hasHeightForWidth());
        button_fact->setSizePolicy(sizePolicy);
        button_fact->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_fact, 4, 0, 1, 1);

        button_point = new QPushButton(centralwidget);
        button_point->setObjectName("button_point");
        sizePolicy.setHeightForWidth(button_point->sizePolicy().hasHeightForWidth());
        button_point->setSizePolicy(sizePolicy);
        button_point->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_point, 5, 1, 1, 1);

        button_root = new QPushButton(centralwidget);
        button_root->setObjectName("button_root");
        sizePolicy.setHeightForWidth(button_root->sizePolicy().hasHeightForWidth());
        button_root->setSizePolicy(sizePolicy);
        button_root->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_root, 3, 0, 1, 1);

        button_power = new QPushButton(centralwidget);
        button_power->setObjectName("button_power");
        sizePolicy.setHeightForWidth(button_power->sizePolicy().hasHeightForWidth());
        button_power->setSizePolicy(sizePolicy);
        button_power->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_power, 2, 0, 1, 1);

        button_del = new QPushButton(centralwidget);
        button_del->setObjectName("button_del");
        sizePolicy.setHeightForWidth(button_del->sizePolicy().hasHeightForWidth());
        button_del->setSizePolicy(sizePolicy);
        button_del->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_del, 1, 2, 1, 2);

        button_1 = new QPushButton(centralwidget);
        button_1->setObjectName("button_1");
        sizePolicy.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy);
        button_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_1, 4, 1, 1, 1);

        button_2 = new QPushButton(centralwidget);
        button_2->setObjectName("button_2");
        sizePolicy.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy);
        button_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_2, 4, 2, 1, 1);

        button_3 = new QPushButton(centralwidget);
        button_3->setObjectName("button_3");
        sizePolicy.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy);
        button_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_3, 4, 3, 1, 1);

        button_9 = new QPushButton(centralwidget);
        button_9->setObjectName("button_9");
        sizePolicy.setHeightForWidth(button_9->sizePolicy().hasHeightForWidth());
        button_9->setSizePolicy(sizePolicy);
        button_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_9, 2, 3, 1, 1);

        button_4 = new QPushButton(centralwidget);
        button_4->setObjectName("button_4");
        sizePolicy.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy);
        button_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_4, 3, 1, 1, 1);

        button_neg = new QPushButton(centralwidget);
        button_neg->setObjectName("button_neg");
        sizePolicy.setHeightForWidth(button_neg->sizePolicy().hasHeightForWidth());
        button_neg->setSizePolicy(sizePolicy);
        button_neg->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_neg, 5, 0, 1, 1);

        button_7 = new QPushButton(centralwidget);
        button_7->setObjectName("button_7");
        sizePolicy.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy);
        button_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_7, 2, 1, 1, 1);

        button_div = new QPushButton(centralwidget);
        button_div->setObjectName("button_div");
        sizePolicy.setHeightForWidth(button_div->sizePolicy().hasHeightForWidth());
        button_div->setSizePolicy(sizePolicy);
        button_div->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_div, 1, 4, 1, 1);

        button_0 = new QPushButton(centralwidget);
        button_0->setObjectName("button_0");
        sizePolicy.setHeightForWidth(button_0->sizePolicy().hasHeightForWidth());
        button_0->setSizePolicy(sizePolicy);
        button_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_0, 5, 2, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName("display");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy1);
        display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #F5F5F5;\n"
"	color: black;\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}"));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(display, 0, 0, 1, 5);

        button_sub = new QPushButton(centralwidget);
        button_sub->setObjectName("button_sub");
        sizePolicy.setHeightForWidth(button_sub->sizePolicy().hasHeightForWidth());
        button_sub->setSizePolicy(sizePolicy);
        button_sub->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_sub, 3, 4, 1, 1);

        button_5 = new QPushButton(centralwidget);
        button_5->setObjectName("button_5");
        sizePolicy.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy);
        button_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_5, 3, 2, 1, 1);

        button_equal = new QPushButton(centralwidget);
        button_equal->setObjectName("button_equal");
        sizePolicy.setHeightForWidth(button_equal->sizePolicy().hasHeightForWidth());
        button_equal->setSizePolicy(sizePolicy);
        button_equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #708090;\n"
"	color: rgb(255, 255, 255)\n"
"	padding 5px;\n"
"	border: 5px solid dark-gray;\n"
"	font: 26pt \"OCR A Extended\";\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #F5F5F5;\n"
"}"));

        gridLayout->addWidget(button_equal, 5, 3, 1, 2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        button_help->setText(QCoreApplication::translate("MainWindow", "H", nullptr));
        button_mul->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        button_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_fact->setText(QCoreApplication::translate("MainWindow", "x!", nullptr));
        button_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        button_root->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        button_power->setText(QCoreApplication::translate("MainWindow", "x^y", nullptr));
        button_del->setText(QCoreApplication::translate("MainWindow", "del", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_neg->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        display->setText(QCoreApplication::translate("MainWindow", "80085", nullptr));
        button_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
