/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QPushButton *selectSecondFunction;
    QLabel *label_4;
    QPushButton *selectFirstFunction;
    QLabel *selectedFunction;
    QLabel *label_5;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *setStart;
    QLineEdit *setEnd;
    QLineEdit *setAmountPoints;
    QHBoxLayout *horizontalLayout;
    QPushButton *calculate;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(639, 504);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        selectSecondFunction = new QPushButton(centralwidget);
        selectSecondFunction->setObjectName(QString::fromUtf8("selectSecondFunction"));

        gridLayout_2->addWidget(selectSecondFunction, 1, 1, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 1, 1, 1);

        selectFirstFunction = new QPushButton(centralwidget);
        selectFirstFunction->setObjectName(QString::fromUtf8("selectFirstFunction"));

        gridLayout_2->addWidget(selectFirstFunction, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        selectedFunction = new QLabel(centralwidget);
        selectedFunction->setObjectName(QString::fromUtf8("selectedFunction"));
        selectedFunction->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(selectedFunction);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(210, 100));

        gridLayout->addWidget(label_7, 0, 1, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(label_8, 0, 2, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(210, 100));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        setStart = new QLineEdit(centralwidget);
        setStart->setObjectName(QString::fromUtf8("setStart"));

        horizontalLayout_2->addWidget(setStart);

        setEnd = new QLineEdit(centralwidget);
        setEnd->setObjectName(QString::fromUtf8("setEnd"));

        horizontalLayout_2->addWidget(setEnd);

        setAmountPoints = new QLineEdit(centralwidget);
        setAmountPoints->setObjectName(QString::fromUtf8("setAmountPoints"));

        horizontalLayout_2->addWidget(setAmountPoints);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        calculate = new QPushButton(centralwidget);
        calculate->setObjectName(QString::fromUtf8("calculate"));

        horizontalLayout->addWidget(calculate);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"	background-color:#646464;\n"
"	alternate-background-color:#606060;\n"
"	selection-background-color:#282828;\n"
"}"));
        tableWidget->setAlternatingRowColors(true);

        verticalLayout->addWidget(tableWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 639, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\222\320\260\321\200\320\270\320\260\320\275\321\202 12. \320\222\321\213\320\261\320\265\321\200\320\265\321\202\320\265 \321\204\321\203\320\275\320\272\321\206\320\270\321\216.", nullptr));
        label_3->setText(QString());
        selectSecondFunction->setText(QApplication::translate("MainWindow", "y = 7^(1 + x^3) - 4^(1 - x^6)", nullptr));
        label_4->setText(QString());
        selectFirstFunction->setText(QApplication::translate("MainWindow", "y = cos2x - 5sin(x) - 3", nullptr));
        selectedFunction->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\275\320\265\321\206", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\321\200\320\262\320\260\320\273", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\320\276", nullptr));
        calculate->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "x", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "y", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "interval", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
