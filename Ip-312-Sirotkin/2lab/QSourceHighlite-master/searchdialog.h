#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QDialog>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = nullptr);
    ~SearchDialog();

signals:
    void findNext (const QString &text);
    void replaceText(const QString &find,const QString &replace);
    void replaceAll(const QString &find, const QString &replace);

private slots:
    void on_findButton_Clicked();
    void on_replaceButton_Clicked();
    void on_replaceAllButton_Clicked();

private:
    QLineEdit *findLineEdit;
    QLineEdit *replaceLineEdit;
    QPushButton *findButton;
    QPushButton *replaceButton;
    QPushButton *replaceAllButton;

};

#endif // SEARCHDIALOG_H
