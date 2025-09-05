#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAbstractButton>
#include <QKeyEvent>
#include <QWidget>
#include <QListWidget>
#include <QPushButton>
#include <QVBoxLayout>

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void numberGroup_clicked(QAbstractButton*);
    void actionGroup_clicked(QAbstractButton*);

//    void on_save_action();
//    void show_history();
    void hide_history();
    void clean_history();
//    void on_about();
    void onHistoryItemClicked(QListWidgetItem*);


    void on_actionDel_clicked();
    void on_actionCalc_clicked();
    void on_comma_clicked();
    void on_actionClear_clicked();
    void on_actionPercent_clicked();
    void on_actionSign_clicked();

private:
    QList<QString> historyList;
    QWidget *historyWidget;
    QListWidget *historyView;
    QPushButton *hideHistoryButton;
    QPushButton *clearHistoryButton;
    QVBoxLayout *historyLayout;
    QTimer *statusBarTimer;
    Ui::MainWindow *ui;
    //Digit limit
    const int DIGIT_LIMIT = 16;
    //Flag to check whether the previous button that was clicked was an operator
    bool operatorClicked;
    //Last operator requested
    QChar storedOperator;
    //Flag to check whether a number is stored in memory
    bool hasStoredNumber;
    //Stored number
    double storedNumber;
    //Calculate result based on stored number and displayed number
    void calculate_result();

protected:
    void keyPressEvent(QKeyEvent *e);
};

#endif // MAINWINDOW_H
