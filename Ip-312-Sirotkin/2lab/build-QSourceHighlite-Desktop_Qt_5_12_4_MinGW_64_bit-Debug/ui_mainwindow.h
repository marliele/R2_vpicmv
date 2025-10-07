/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_3;
    QAction *actionJson;
    QAction *actionTXT;
    QAction *actionJson_2;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *action_9;
    QAction *action_10;
    QAction *action_11;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *langComboBox;
    QLabel *label_2;
    QComboBox *themeComboBox;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/txt.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_3->setIcon(icon);
        actionJson = new QAction(MainWindow);
        actionJson->setObjectName(QString::fromUtf8("actionJson"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/json.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionJson->setIcon(icon1);
        actionTXT = new QAction(MainWindow);
        actionTXT->setObjectName(QString::fromUtf8("actionTXT"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/save_txt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTXT->setIcon(icon2);
        actionJson_2 = new QAction(MainWindow);
        actionJson_2->setObjectName(QString::fromUtf8("actionJson_2"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/save_json.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionJson_2->setIcon(icon3);
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/free-exit-icon-2860-thumb.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_4->setIcon(icon4);
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_5->setIcon(icon5);
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/insert.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_6->setIcon(icon6);
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_7->setIcon(icon7);
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/clean.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_8->setIcon(icon8);
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QString::fromUtf8("action_9"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_9->setIcon(icon9);
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QString::fromUtf8("action_10"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icons/repeat.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_10->setIcon(icon10);
        action_11 = new QAction(MainWindow);
        action_11->setObjectName(QString::fromUtf8("action_11"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/icons/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_11->setIcon(icon11);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 0));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        langComboBox = new QComboBox(groupBox);
        langComboBox->setObjectName(QString::fromUtf8("langComboBox"));

        formLayout->setWidget(1, QFormLayout::LabelRole, langComboBox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        themeComboBox = new QComboBox(groupBox);
        themeComboBox->setObjectName(QString::fromUtf8("themeComboBox"));

        formLayout->setWidget(3, QFormLayout::LabelRole, themeComboBox);


        horizontalLayout->addWidget(groupBox);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        horizontalLayout->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menu);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(menu_2->menuAction());
        menu->addAction(menu_3->menuAction());
        menu->addAction(action_4);
        menu_2->addAction(action_3);
        menu_2->addAction(actionJson);
        menu_3->addAction(actionTXT);
        menu_3->addAction(actionJson_2);
        menu_4->addAction(action_5);
        menu_4->addAction(action_6);
        menu_4->addAction(action_7);
        menu_4->addAction(action_8);
        menu_4->addAction(action_9);
        menu_4->addAction(action_10);
        menu_4->addAction(action_11);
        toolBar->addAction(actionTXT);
        toolBar->addAction(action_3);
        toolBar->addAction(actionJson_2);
        toolBar->addAction(actionJson);
        toolBar->addAction(action_11);

        retranslateUi(MainWindow);
        QObject::connect(action_5, SIGNAL(triggered()), plainTextEdit, SLOT(copy()));
        QObject::connect(action_6, SIGNAL(triggered()), plainTextEdit, SLOT(paste()));
        QObject::connect(action_7, SIGNAL(triggered()), plainTextEdit, SLOT(cut()));
        QObject::connect(action_8, SIGNAL(triggered()), plainTextEdit, SLOT(clear()));
        QObject::connect(action_9, SIGNAL(triggered()), plainTextEdit, SLOT(undo()));
        QObject::connect(action_10, SIGNAL(triggered()), plainTextEdit, SLOT(redo()));

        langComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_3->setText(QApplication::translate("MainWindow", "save TXT", nullptr));
        actionJson->setText(QApplication::translate("MainWindow", "save Json", nullptr));
        actionTXT->setText(QApplication::translate("MainWindow", "open TXT", nullptr));
        actionJson_2->setText(QApplication::translate("MainWindow", "open Json", nullptr));
        action_4->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        action_5->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        action_6->setText(QApplication::translate("MainWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
        action_7->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\200\320\265\320\267\320\260\321\202\321\214", nullptr));
        action_8->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        action_9->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        action_10->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\321\214", nullptr));
        action_11->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "Language:", nullptr));
        langComboBox->setCurrentText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Theme", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\272\320\260\320\272...", nullptr));
        menu_4->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\272\320\260", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
