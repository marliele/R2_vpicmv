/********************************************************************************
** Form generated from reading UI file 'customthemedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMTHEMEDIALOG_H
#define UI_CUSTOMTHEMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_customthemedialog
{
public:

    void setupUi(QDialog *customthemedialog)
    {
        if (customthemedialog->objectName().isEmpty())
            customthemedialog->setObjectName(QString::fromUtf8("customthemedialog"));
        customthemedialog->resize(400, 300);

        retranslateUi(customthemedialog);

        QMetaObject::connectSlotsByName(customthemedialog);
    } // setupUi

    void retranslateUi(QDialog *customthemedialog)
    {
        customthemedialog->setWindowTitle(QApplication::translate("customthemedialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customthemedialog: public Ui_customthemedialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMTHEMEDIALOG_H
