#include "searchdialog.h"
#include "ui_searchdialog.h"
#include <QLabel>

SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent)
{
    // Создаём элементы управления
        findLineEdit = new QLineEdit(this);
        replaceLineEdit = new QLineEdit(this);

        findButton = new QPushButton(tr("Найти далее"), this);
        replaceButton = new QPushButton(tr("Заменить"), this);
        replaceAllButton = new QPushButton(tr("Заменить все"), this);

        // Компоновка интерфейса
        QHBoxLayout *findLayout = new QHBoxLayout;
        findLayout->addWidget(new QLabel(tr("Найти:")));
        findLayout->addWidget(findLineEdit);
        findLayout->addWidget(findButton);

        QHBoxLayout *replaceLayout = new QHBoxLayout;
        replaceLayout->addWidget(new QLabel(tr("Заменить на:")));
        replaceLayout->addWidget(replaceLineEdit);

        QHBoxLayout *replaceButtonsLayout = new QHBoxLayout;
        replaceButtonsLayout->addWidget(replaceButton);
        replaceButtonsLayout->addWidget(replaceAllButton);

        QVBoxLayout *mainLayout = new QVBoxLayout;
        mainLayout->addLayout(findLayout);
        mainLayout->addLayout(replaceLayout);
        mainLayout->addLayout(replaceButtonsLayout);

        setLayout(mainLayout);
        setWindowTitle(tr("Поиск и замена"));

        setMinimumSize(300, 150);

        // Подключаем сигналы кнопок к слотам
        connect(findButton, &QPushButton::clicked, this, &SearchDialog::on_findButton_Clicked);
        connect(replaceButton, &QPushButton::clicked, this, &SearchDialog::on_replaceButton_Clicked);
        connect(replaceAllButton, &QPushButton::clicked, this, &SearchDialog::on_replaceAllButton_Clicked);
}

SearchDialog::~SearchDialog()
{
}


void SearchDialog::on_findButton_Clicked(){
    emit findNext(findLineEdit->text());
}


void SearchDialog::on_replaceButton_Clicked(){
    emit replaceText(findLineEdit->text(), replaceLineEdit->text());
}


void SearchDialog::on_replaceAllButton_Clicked(){
    emit replaceAll(findLineEdit->text(), replaceLineEdit->text());
}


