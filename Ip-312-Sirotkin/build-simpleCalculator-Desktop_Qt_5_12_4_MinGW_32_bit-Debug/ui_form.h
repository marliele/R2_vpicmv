/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(400, 300);
        buttonBox = new QDialogButtonBox(Form);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 270, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        plainTextEdit = new QPlainTextEdit(Form);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 0, 401, 271));

        retranslateUi(Form);
        QObject::connect(buttonBox, SIGNAL(accepted()), Form, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Form, SLOT(reject()));

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QDialog *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Dialog", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("Form", "\320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\321\203\321\216 \321\200\320\260\320\261\320\276\321\202\321\203 \320\262\321\213\320\277\320\276\320\273\320\275\320\270\320\273\320\270 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\321\213 \320\263\321\200\321\203\320\277\320\277\321\213 \320\230\320\237-312:\n"
"1)\320\241\320\270\321\200\320\276\321\202\320\272\320\270\320\275 \320\230\320\263\320\276\321\200\321\214 \n"
"2)\320\241\320\260\321\204\321\200\320\276\320\275\320\276\320\262\320\260 \320\220\320\273\320\270\321\201\320\260 \n"
"3)\320\223\321\200\321\217\320\267\320\270\320\275 \320\220\320\273\320\265\320\272\321\201\320\265\320\271.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
