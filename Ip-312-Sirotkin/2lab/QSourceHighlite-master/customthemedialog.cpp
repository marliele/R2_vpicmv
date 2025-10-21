#include "customthemedialog.h"
#include "ui_customthemedialog.h"

customthemedialog::customthemedialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customthemedialog)
{
    ui->setupUi(this);
}

customthemedialog::~customthemedialog()
{
    delete ui;
}
