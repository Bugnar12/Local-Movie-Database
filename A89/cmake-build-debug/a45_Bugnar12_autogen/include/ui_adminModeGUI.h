/********************************************************************************
** Form generated from reading UI file 'adminmodegui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMODEGUI_H
#define UI_ADMINMODEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminModeGUI
{
public:

    void setupUi(QWidget *adminModeGUI)
    {
        if (adminModeGUI->objectName().isEmpty())
            adminModeGUI->setObjectName("adminModeGUI");
        adminModeGUI->resize(400, 300);

        retranslateUi(adminModeGUI);

        QMetaObject::connectSlotsByName(adminModeGUI);
    } // setupUi

    void retranslateUi(QWidget *adminModeGUI)
    {
        adminModeGUI->setWindowTitle(QCoreApplication::translate("adminModeGUI", "adminModeGUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminModeGUI: public Ui_adminModeGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMODEGUI_H
