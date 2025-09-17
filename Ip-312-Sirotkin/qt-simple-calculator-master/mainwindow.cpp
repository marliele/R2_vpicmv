#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    historyWidget = new QWidget(this);
    historyWidget ->setWindowTitle("История");
    historyWidget ->resize(200,400);

    historyView = new QListWidget(historyWidget);
    hideHistoryButton = new QPushButton("скрыть", historyWidget);
    clearHistoryButton = new QPushButton("очистить", historyWidget);

    QVBoxLayout *mainlayout = new QVBoxLayout(historyWidget);
    mainlayout -> addWidget(hideHistoryButton);
    mainlayout -> addWidget(clearHistoryButton);
    mainlayout -> addWidget(historyView);
    historyWidget->setLayout(mainlayout);

    //Splitter
    QSplitter *mainSplitter = new QSplitter(Qt::Horizontal);
    mainSplitter->addWidget(ui->centralWidget);
    ui->centralWidget->setMinimumWidth(300);
    mainSplitter->addWidget(historyWidget);
    mainSplitter->setStretchFactor(0,1);
    setCentralWidget(mainSplitter);

    historyWidget ->hide();

    //Set up empty display panel
    ui->displayPanel->clear();

    //Set operator and store number flags to false
    operatorClicked = false;
    hasStoredNumber = false;

    //Set number button group listener
    ui->numberGroup->connect(ui->numberGroup,SIGNAL(buttonClicked(QAbstractButton*)),
                             this, SLOT(numberGroup_clicked(QAbstractButton*)));
    //Set operator button group listener
    ui->actionGroup->connect(ui->actionGroup,SIGNAL(buttonClicked(QAbstractButton*)),
                             this, SLOT(actionGroup_clicked(QAbstractButton*)));

    //Set window fix width and height
    this->setFixedSize(QSize(500, 500));

    connect(ui->hide, &QAction::triggered, this, &MainWindow::onHideHistory);
    connect(ui->show, &QAction::triggered, this, &MainWindow::onShowHistory);
    connect(ui->save, &QAction::triggered, this, &MainWindow::onSaveAction);
    connect(ui->about, &QAction::triggered, this, &MainWindow::onAbout);

    connect(hideHistoryButton, &QPushButton::clicked, this, &MainWindow::onHideHistory);
    connect(clearHistoryButton, &QPushButton::clicked, this, &MainWindow::onClearHistory);
    connect(historyView, &QListWidget::itemClicked, this, &MainWindow::onHistoryItemClicked);
    loadHistoryFromFile();
    connect(ui->action_2, &QAction::triggered,this, &MainWindow::loadHistoryFromFile);
    connect(ui->action, &QAction::triggered,this, &MainWindow::saveHistoryFile);
}

MainWindow::~MainWindow()
{
    saveHistoryFile();
    delete ui;
}

//==================================================================================
//Slot functions
//==================================================================================
// Called whenever a number button is clicked
void MainWindow::loadHistoryFromFile(){
    QFile file("history.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            while (!in.atEnd()) {
                QString line = in.readLine().trimmed();
                if (!line.isEmpty()) {
                    historyList.append(line);
                }
            }
            file.close();
            updateHistoryList();
        }
}

void MainWindow::saveHistoryFile(){
    QFile file("history.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (const QString &item : qAsConst(historyList)) {
            out << item << "\n";
        }
        file.close();
    }
}

void MainWindow::numberGroup_clicked(QAbstractButton* button)
{
    //Get string from display
    QString displayLabel = ui->displayPanel->text();

    /* Check if the previous button that was clicked was an operator button.
     * If so, clear the display and set the flag to false. Then proceed to
     * add the digit requested. */
    if (operatorClicked) {
        displayLabel.clear();
        operatorClicked = false;
    }

    //Append the digit only if we are not exceeding the digit limit
    if (displayLabel.length() >= DIGIT_LIMIT) {
        return;
    }

    //Append requested digit
    displayLabel.append(button->text());

    //Set number back to display
    ui->displayPanel->setText(displayLabel);
}

// Called whenever an action button is clicked
void MainWindow::actionGroup_clicked(QAbstractButton* button)
{
    /* If the previous button that was clicked was not an operator, then we just need to save the operator
     * that was requested and exit.
     * If it was though, we need to see whether we just need to save the number that is
     * displayed or if there is already a number stored in memory, perform the calculation and
     * store the result.
     * Example for this case: 5 + 7 + -> We need to save 12 in memory and then save operator. */

    if (operatorClicked) {
        storedOperator = button->text().at(0);
    }
    else {
        if (hasStoredNumber) {
            calculate_result();
        }
        else {
            //Set the flag to indicate that we now have a number stored in memory
            hasStoredNumber = true;
            //Get string from display
            QString displayLabel = ui->displayPanel->text();
            //Convert string to double and save
            storedNumber = displayLabel.toDouble();
        }
        //Set the flag that the last button that was clicked was an operator
        operatorClicked = true;
        //Store operator in memory
        storedOperator = button->text().at(0);
    }
}

void MainWindow::on_actionDel_clicked()
{
    //Get string from display
    QString displayLabel = ui->displayPanel->text();

    //Check if label is empty
    if (displayLabel.length() == 0) {
        return;
    }

    //Delete last digit from string
    displayLabel.QString::chop(1);
    //Set number back to display
    ui->displayPanel->setText(displayLabel);
}

void MainWindow::on_actionCalc_clicked()
{
    //Get string from display
    QString displayLabel = ui->displayPanel->text();
    /* A number must be saved in memory to be able calculate a result.
     * In addition, a number with at least one digit should be present in the display and
     * The last button that was clicked should not be an operator */

    if (!hasStoredNumber || displayLabel.length() < 1 || operatorClicked) {
        return;
    }

    //Calculate result and set in on display
    calculate_result();

    //Set stored number flag to false (we have it on screen now)
    hasStoredNumber = false;

}

void MainWindow::on_comma_clicked()
{
    //Get string from display
    QString displayLabel = ui->displayPanel->text();

    /* Append the digit only if we are not exceeding the digit limit.
     * More specifically in this case, we need 2 digits to be available.
     * One for the comma and at least another one for a remaining digit.
     * Also check if whether there is another comma already present. */
    if (displayLabel.length() >= (DIGIT_LIMIT - 1) ||
        displayLabel.contains('.', Qt::CaseSensitive)) {
        return;
    }

    //If label is empty, add zero and then append comma
    if (displayLabel.length() == 0) {
        displayLabel = "0";
    }

    //Append comma
    displayLabel.append('.');
    //Set number back to display
    ui->displayPanel->setText(displayLabel);
}

void MainWindow::on_actionClear_clicked()
{
    //Clear display label (for now)
    ui->displayPanel->clear();
    //Set operator and store number flags to false
    operatorClicked = false;
    hasStoredNumber = false;
}

void MainWindow::on_actionPercent_clicked()
{
    //Get string from display
    QString displayLabel = ui->displayPanel->text();
    //Convert to double
    double percentage = displayLabel.toDouble();
    //Just multiply with 0.01 to make it a percentage
    percentage *= 0.01;
    //Since there might be an overflow, its best to convert the number carefully
    displayLabel = QString::number(percentage,'g', DIGIT_LIMIT);
    //Set number back to display
    ui->displayPanel->setText(displayLabel);
}

void MainWindow::on_actionSign_clicked()
{
    //Get string from display
    QString displayLabel = ui->displayPanel->text();
    //Convert to double
    double percentage = displayLabel.toDouble();
    //Just multiply with -1 to change its sign
    percentage *= -1;
    //Convert the number carefully
    displayLabel = QString::number(percentage,'g', DIGIT_LIMIT);
    //Set number back to display
    ui->displayPanel->setText(displayLabel);
}
void MainWindow::onSaveAction() {
    QString currentValue = ui->displayPanel->text();

    if(currentValue.isEmpty()) {
        ui->statusBar->showMessage("Значение пустое не добавлено в историю", 3000);
        return;
    }

    historyList.append(currentValue);
    ui->statusBar->showMessage("Значение " + currentValue + " добавлено в историю", 3000);

    // таймер для автоматического скрытия сообщения
    statusBarTimer = new QTimer(this);
    statusBarTimer->setSingleShot(true);
    connect(statusBarTimer, &QTimer::timeout, this, &MainWindow::clearStatusBarMessage);
    statusBarTimer->start(3000);
    updateHistoryList();
}

void MainWindow::clearStatusBarMessage() {
    ui->statusBar->clearMessage();
}

void MainWindow::updateHistoryList() {
    historyView->clear();
    for (const QString& item : qAsConst(historyList)) {
        historyView->addItem(item);
    }
}


//==================================================================================
//Helper functions
//==================================================================================
void MainWindow::calculate_result() {
    //Get string from display
    QString displayLabel = ui->displayPanel->text();

    //If the displayed number ends with a comma, drop the comma.
     if (displayLabel.endsWith('.',Qt::CaseSensitive)) {
         displayLabel.QString::chop(1);
     }

     //Decide what to do according to operation
     if (storedOperator == '+') {
         storedNumber += displayLabel.toDouble();
     }
     else if (storedOperator == '-') {
         storedNumber -= displayLabel.toDouble();
     }
     else if (storedOperator == 'x') {
         storedNumber *= displayLabel.toDouble();
     }
     else if (storedOperator == '/') {
         storedNumber /= displayLabel.toDouble();
     }

     //Since there might be an overflow, its best to convert the number carefully
     displayLabel = QString::number(storedNumber,'g', DIGIT_LIMIT);

     //Set number back to display
     ui->displayPanel->setText(displayLabel);
}

void MainWindow::onHideHistory(){
    if(!historyWidget->isVisible()) return;
    resize(width() - historyWidget->width(), height());
    historyWidget ->hide();
    this->setFixedSize(QSize(500,500));
}

void MainWindow::onShowHistory(){
    if(historyWidget->isVisible()) return;
    historyWidget ->show();
    this->setFixedSize(QSize(700,500));
}

void MainWindow::onClearHistory(){
    historyList.clear();
    historyView->clear();
    ui->statusBar->showMessage("История очищена",3000);
}

void MainWindow::onHistoryItemClicked(QListWidgetItem *item){
    QString value = item->text();
    ui->displayPanel->setText(value);
}

void MainWindow::onAbout(){
    Form *info = new Form();
    info->show();
}

//connect(hideHistoryButton, &QPushButton::clicked, this, &MainWindow::hide_history);

//Keyboard buttons should call the corresponding functions
void MainWindow::keyPressEvent(QKeyEvent *e) {
    switch (e->key()) {
        //Numbers
        case Qt::Key_1:
            numberGroup_clicked(ui->num1);
            break;
        case Qt::Key_2:
            numberGroup_clicked(ui->num2);
            break;
        case Qt::Key_3:
            numberGroup_clicked(ui->num3);
            break;
        case Qt::Key_4:
            numberGroup_clicked(ui->num4);
            break;
        case Qt::Key_5:
            numberGroup_clicked(ui->num5);
            break;
        case Qt::Key_6:
            numberGroup_clicked(ui->num6);
            break;
        case Qt::Key_7:
            numberGroup_clicked(ui->num7);
            break;
        case Qt::Key_8:
            numberGroup_clicked(ui->num8);
            break;
        case Qt::Key_9:
            numberGroup_clicked(ui->num9);
            break;
        case Qt::Key_0:
            numberGroup_clicked(ui->num0);
            break;
        //Operators
        case Qt::Key_Plus:
            actionGroup_clicked(ui->actionPlus);
            break;
        case Qt::Key_Minus:
            actionGroup_clicked(ui->actionMinus);
            break;
        case Qt::Key_Asterisk:
            actionGroup_clicked(ui->actionMul);
            break;
        case Qt::Key_Slash:
            actionGroup_clicked(ui->actionDiv);
            break;
        //Comma
        case Qt::Key_Period:
            on_comma_clicked();
            break;
        //Return (enter)
        case Qt::Key_Enter:
        case Qt::Key_Return:
            on_actionCalc_clicked();
            break;
        //Backspace and delete
        case Qt::Key_Backspace:
            on_actionDel_clicked();
            break;
        case Qt::Key_Delete:
            on_actionClear_clicked();
            break;
        //Percentage
        case Qt::Key_Percent:
            on_actionPercent_clicked();
            break;
        case Qt::Key_F1:
            onSaveAction();
            break;
        case Qt::Key_F2:
            onShowHistory();
            break;
        case Qt::Key_F3:
            onHideHistory();
            break;
        case Qt::Key_F4:
            onAbout();
            break;
        case Qt::Key_F5:
            saveHistoryFile();
            break;
        case Qt::Key_F6:
            loadHistoryFromFile();
            break;
    }
}
