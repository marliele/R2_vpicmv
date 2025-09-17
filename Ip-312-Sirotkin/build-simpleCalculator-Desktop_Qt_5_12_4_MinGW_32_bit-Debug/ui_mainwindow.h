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
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *show;
    QAction *hide;
    QAction *save;
    QAction *about;
    QAction *action;
    QAction *action_2;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *displayPanel;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *actionClear;
    QPushButton *actionDel;
    QPushButton *actionPercent;
    QPushButton *actionDiv;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *num7;
    QPushButton *num8;
    QPushButton *num9;
    QPushButton *actionMul;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *num4;
    QPushButton *num5;
    QPushButton *num6;
    QPushButton *actionMinus;
    QHBoxLayout *horizontalLayout;
    QPushButton *num1;
    QPushButton *num2;
    QPushButton *num3;
    QPushButton *actionPlus;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *num0;
    QPushButton *comma;
    QPushButton *actionSign;
    QPushButton *actionCalc;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *info;
    QMenu *history;
    QMenu *menu;
    QButtonGroup *numberGroup;
    QButtonGroup *actionGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(340, 319);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(306, 319));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #f5f5f5;\n"
"color: rgb(0, 0, 0);\n"
""));
        show = new QAction(MainWindow);
        show->setObjectName(QString::fromUtf8("show"));
        hide = new QAction(MainWindow);
        hide->setObjectName(QString::fromUtf8("hide"));
        save = new QAction(MainWindow);
        save->setObjectName(QString::fromUtf8("save"));
        about = new QAction(MainWindow);
        about->setObjectName(QString::fromUtf8("about"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"min-width: 65;\n"
"min-height: 40;\n"
"max-width: 65;\n"
"max-height: 40;\n"
"}"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        displayPanel = new QLabel(centralWidget);
        displayPanel->setObjectName(QString::fromUtf8("displayPanel"));
        displayPanel->setMinimumSize(QSize(290, 40));
        displayPanel->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setKerning(true);
        displayPanel->setFont(font);
        displayPanel->setLayoutDirection(Qt::LeftToRight);
        displayPanel->setStyleSheet(QString::fromUtf8("border: 1 solid #b8b8b8;\n"
"background-color: #fff;"));
        displayPanel->setScaledContents(true);
        displayPanel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        displayPanel->setWordWrap(true);
        displayPanel->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(displayPanel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        actionClear = new QPushButton(centralWidget);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        actionClear->setStyleSheet(QString::fromUtf8("background-color: #cb1a21;\n"
"color: #ffffff;"));

        horizontalLayout_5->addWidget(actionClear);

        actionDel = new QPushButton(centralWidget);
        actionDel->setObjectName(QString::fromUtf8("actionDel"));

        horizontalLayout_5->addWidget(actionDel);

        actionPercent = new QPushButton(centralWidget);
        actionPercent->setObjectName(QString::fromUtf8("actionPercent"));

        horizontalLayout_5->addWidget(actionPercent);

        actionDiv = new QPushButton(centralWidget);
        actionGroup = new QButtonGroup(MainWindow);
        actionGroup->setObjectName(QString::fromUtf8("actionGroup"));
        actionGroup->addButton(actionDiv);
        actionDiv->setObjectName(QString::fromUtf8("actionDiv"));

        horizontalLayout_5->addWidget(actionDiv);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        num7 = new QPushButton(centralWidget);
        numberGroup = new QButtonGroup(MainWindow);
        numberGroup->setObjectName(QString::fromUtf8("numberGroup"));
        numberGroup->addButton(num7);
        num7->setObjectName(QString::fromUtf8("num7"));

        horizontalLayout_3->addWidget(num7);

        num8 = new QPushButton(centralWidget);
        numberGroup->addButton(num8);
        num8->setObjectName(QString::fromUtf8("num8"));
        sizePolicy.setHeightForWidth(num8->sizePolicy().hasHeightForWidth());
        num8->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(num8);

        num9 = new QPushButton(centralWidget);
        numberGroup->addButton(num9);
        num9->setObjectName(QString::fromUtf8("num9"));

        horizontalLayout_3->addWidget(num9);

        actionMul = new QPushButton(centralWidget);
        actionGroup->addButton(actionMul);
        actionMul->setObjectName(QString::fromUtf8("actionMul"));

        horizontalLayout_3->addWidget(actionMul);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        num4 = new QPushButton(centralWidget);
        numberGroup->addButton(num4);
        num4->setObjectName(QString::fromUtf8("num4"));

        horizontalLayout_2->addWidget(num4);

        num5 = new QPushButton(centralWidget);
        numberGroup->addButton(num5);
        num5->setObjectName(QString::fromUtf8("num5"));

        horizontalLayout_2->addWidget(num5);

        num6 = new QPushButton(centralWidget);
        numberGroup->addButton(num6);
        num6->setObjectName(QString::fromUtf8("num6"));

        horizontalLayout_2->addWidget(num6);

        actionMinus = new QPushButton(centralWidget);
        actionGroup->addButton(actionMinus);
        actionMinus->setObjectName(QString::fromUtf8("actionMinus"));

        horizontalLayout_2->addWidget(actionMinus);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        num1 = new QPushButton(centralWidget);
        numberGroup->addButton(num1);
        num1->setObjectName(QString::fromUtf8("num1"));
        sizePolicy.setHeightForWidth(num1->sizePolicy().hasHeightForWidth());
        num1->setSizePolicy(sizePolicy);
        num1->setMinimumSize(QSize(67, 42));
        num1->setMaximumSize(QSize(67, 42));

        horizontalLayout->addWidget(num1);

        num2 = new QPushButton(centralWidget);
        numberGroup->addButton(num2);
        num2->setObjectName(QString::fromUtf8("num2"));
        sizePolicy.setHeightForWidth(num2->sizePolicy().hasHeightForWidth());
        num2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(num2);

        num3 = new QPushButton(centralWidget);
        numberGroup->addButton(num3);
        num3->setObjectName(QString::fromUtf8("num3"));
        sizePolicy.setHeightForWidth(num3->sizePolicy().hasHeightForWidth());
        num3->setSizePolicy(sizePolicy);
        num3->setMaximumSize(QSize(67, 42));

        horizontalLayout->addWidget(num3);

        actionPlus = new QPushButton(centralWidget);
        actionGroup->addButton(actionPlus);
        actionPlus->setObjectName(QString::fromUtf8("actionPlus"));

        horizontalLayout->addWidget(actionPlus);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        num0 = new QPushButton(centralWidget);
        numberGroup->addButton(num0);
        num0->setObjectName(QString::fromUtf8("num0"));

        horizontalLayout_4->addWidget(num0);

        comma = new QPushButton(centralWidget);
        comma->setObjectName(QString::fromUtf8("comma"));

        horizontalLayout_4->addWidget(comma);

        actionSign = new QPushButton(centralWidget);
        actionSign->setObjectName(QString::fromUtf8("actionSign"));

        horizontalLayout_4->addWidget(actionSign);

        actionCalc = new QPushButton(centralWidget);
        actionCalc->setObjectName(QString::fromUtf8("actionCalc"));
        actionCalc->setStyleSheet(QString::fromUtf8("background-color: #3490cd;\n"
"color: #ffffff;"));

        horizontalLayout_4->addWidget(actionCalc);


        verticalLayout->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 340, 26));
        info = new QMenu(menuBar);
        info->setObjectName(QString::fromUtf8("info"));
        history = new QMenu(menuBar);
        history->setObjectName(QString::fromUtf8("history"));
        history->setTearOffEnabled(false);
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(history->menuAction());
        menuBar->addAction(info->menuAction());
        info->addAction(about);
        history->addAction(show);
        history->addAction(hide);
        history->addAction(action);
        history->addAction(action_2);
        menu->addAction(save);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculator", nullptr));
        show->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 (F2)", nullptr));
        hide->setText(QApplication::translate("MainWindow", "\320\241\320\272\321\200\321\213\321\202\321\214 (F3)", nullptr));
        save->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 (F1)", nullptr));
        about->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\270 (F4)", nullptr));
        action->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 (F5)", nullptr));
        action_2->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 (F6)", nullptr));
        displayPanel->setText(QString());
        actionClear->setText(QApplication::translate("MainWindow", "C", nullptr));
        actionDel->setText(QApplication::translate("MainWindow", "Del", nullptr));
        actionPercent->setText(QApplication::translate("MainWindow", "%", nullptr));
        actionDiv->setText(QApplication::translate("MainWindow", "/", nullptr));
        num7->setText(QApplication::translate("MainWindow", "7", nullptr));
        num8->setText(QApplication::translate("MainWindow", "8", nullptr));
        num9->setText(QApplication::translate("MainWindow", "9", nullptr));
        actionMul->setText(QApplication::translate("MainWindow", "x", nullptr));
        num4->setText(QApplication::translate("MainWindow", "4", nullptr));
        num5->setText(QApplication::translate("MainWindow", "5", nullptr));
        num6->setText(QApplication::translate("MainWindow", "6", nullptr));
        actionMinus->setText(QApplication::translate("MainWindow", "-", nullptr));
        num1->setText(QApplication::translate("MainWindow", "1", nullptr));
        num2->setText(QApplication::translate("MainWindow", "2", nullptr));
        num3->setText(QApplication::translate("MainWindow", "3", nullptr));
        actionPlus->setText(QApplication::translate("MainWindow", "+", nullptr));
        num0->setText(QApplication::translate("MainWindow", "0", nullptr));
        comma->setText(QApplication::translate("MainWindow", ".", nullptr));
        actionSign->setText(QApplication::translate("MainWindow", "+/-", nullptr));
        actionCalc->setText(QApplication::translate("MainWindow", "=", nullptr));
        info->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        history->setTitle(QApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
