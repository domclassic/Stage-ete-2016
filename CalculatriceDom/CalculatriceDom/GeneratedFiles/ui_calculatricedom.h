/********************************************************************************
** Form generated from reading UI file 'calculatricedom.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICEDOM_H
#define UI_CALCULATRICEDOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatriceDomClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculatriceDomClass)
    {
        if (CalculatriceDomClass->objectName().isEmpty())
            CalculatriceDomClass->setObjectName(QStringLiteral("CalculatriceDomClass"));
        CalculatriceDomClass->resize(600, 400);
        menuBar = new QMenuBar(CalculatriceDomClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        CalculatriceDomClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CalculatriceDomClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CalculatriceDomClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(CalculatriceDomClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        CalculatriceDomClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CalculatriceDomClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CalculatriceDomClass->setStatusBar(statusBar);

        retranslateUi(CalculatriceDomClass);

        QMetaObject::connectSlotsByName(CalculatriceDomClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatriceDomClass)
    {
        CalculatriceDomClass->setWindowTitle(QApplication::translate("CalculatriceDomClass", "CalculatriceDom", 0));
    } // retranslateUi

};

namespace Ui {
    class CalculatriceDomClass: public Ui_CalculatriceDomClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICEDOM_H
