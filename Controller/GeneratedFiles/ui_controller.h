/********************************************************************************
** Form generated from reading UI file 'controller.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLLER_H
#define UI_CONTROLLER_H

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

class Ui_ControllerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ControllerClass)
    {
        if (ControllerClass->objectName().isEmpty())
            ControllerClass->setObjectName(QStringLiteral("ControllerClass"));
        ControllerClass->resize(600, 400);
        menuBar = new QMenuBar(ControllerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ControllerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ControllerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ControllerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ControllerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ControllerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ControllerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ControllerClass->setStatusBar(statusBar);

        retranslateUi(ControllerClass);

        QMetaObject::connectSlotsByName(ControllerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ControllerClass)
    {
        ControllerClass->setWindowTitle(QApplication::translate("ControllerClass", "Controller", 0));
    } // retranslateUi

};

namespace Ui {
    class ControllerClass: public Ui_ControllerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLLER_H
