#include "searchdialog.h"
#include "ui_searchdialog.h"

SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
}

SearchDialog::~SearchDialog()
{
    delete ui;
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


