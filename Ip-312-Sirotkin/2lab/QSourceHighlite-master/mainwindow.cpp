/*
 * Copyright (c) 2019-2020 Waqar Ahmed -- <waqar.17a@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qsourcehighliter.h"
#include "searchdialog.h"
#include <QDebug>
#include <QDir>

QString lastfilepath ;
QString lastsufix="";

using namespace QSourceHighlite;

QHash<QString, QSourceHighliter::Language> MainWindow::_langStringToEnum;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->actionTXT->setIcon(QIcon(":/icons/icons/txt.png"));
    ui->action_3->setIcon(QIcon(":/icons/icons/txt.png"));
    ui->actionJson->setIcon(QIcon(":/icons/icons/json.png"));
    ui->actionJson_2->setIcon(QIcon(":/icons/icons/json.png"));
    ui->action_4->setIcon(QIcon(":/icons/icons/exit.png"));

    ui->action_5->setIcon(QIcon(":/icons/icons/copy.png"));
    ui->action_6->setIcon(QIcon(":/icons/icons/insert.png"));
    ui->action_7->setIcon(QIcon(":/icons/icons/cut.png"));
    ui->action_8->setIcon(QIcon(":/icons/icons/clean.png"));
    ui->action_9->setIcon(QIcon(":/icons/icons/cancel.png"));
    ui->action_10->setIcon(QIcon(":/icons/icons/repeat.png"));
    ui->action_11->setIcon(QIcon(":/icons/icons/search.png"));

    initLangsEnum();
    initLangsComboBox();
    initThemesComboBox();

    //set highlighter
    QFont f = QFontDatabase::systemFont(QFontDatabase::FixedFont);
    ui->plainTextEdit->setFont(f);
    highlighter = new QSourceHighliter(ui->plainTextEdit->document());

    connect(ui->langComboBox,
            static_cast<void (QComboBox::*) (const QString&)>(&QComboBox::currentTextChanged),
            this, &MainWindow::languageChanged);
    connect(ui->themeComboBox,
            static_cast<void (QComboBox::*) (int)>(&QComboBox::currentIndexChanged),
            this, &MainWindow::themeChanged);

    ui->langComboBox->setCurrentText("Asm");
    languageChanged("Asm");
    //    connect(ui->plainTextEdit, &QPlainTextEdit::textChanged, this, &MainWindow::printDebug);
    connect(ui->action_3, &QAction::triggered,this, &MainWindow::on_actionTXT_triggered);
    connect(ui->actionJson, &QAction::triggered,this, &MainWindow::on_actionJSON_triggered);
    connect(ui->actionJson_2, &QAction::triggered,this, &MainWindow::on_actionJSON_opener);
    connect(ui->actionTXT, &QAction::triggered,this, &MainWindow::on_actionTXT_opener);
    connect(ui->action_4, &QAction::triggered,this, &MainWindow::on_actionExit_triggered);
    connect(ui->action_11, &QAction::triggered, this, &MainWindow::on_action_11_triggered);
}

MainWindow::~MainWindow()
{
}


void MainWindow::closeEvent(QCloseEvent *event){
    on_actionExit_triggered();
}

void MainWindow::initLangsEnum()
{
    MainWindow::_langStringToEnum = QHash<QString, QSourceHighliter::Language> {
        { QLatin1String("Asm"), QSourceHighliter::CodeAsm },
        { QLatin1String("Bash"), QSourceHighliter::CodeBash },
        { QLatin1String("C"), QSourceHighliter::CodeC },
        { QLatin1String("C++"), QSourceHighliter::CodeCpp },
        { QLatin1String("CMake"), QSourceHighliter::CodeCMake },
        { QLatin1String("CSharp"), QSourceHighliter::CodeCSharp },
        { QLatin1String("Css"), QSourceHighliter::CodeCSS },
        { QLatin1String("Go"), QSourceHighliter::CodeGo },
        { QLatin1String("Html"), QSourceHighliter::CodeXML },
        { QLatin1String("Ini"), QSourceHighliter::CodeINI },
        { QLatin1String("Java"), QSourceHighliter::CodeJava },
        { QLatin1String("Javascript"), QSourceHighliter::CodeJava },
        { QLatin1String("Json"), QSourceHighliter::CodeJSON },
        { QLatin1String("Lua"), QSourceHighliter::CodeLua },
        { QLatin1String("Make"), QSourceHighliter::CodeMake },
        { QLatin1String("Php"), QSourceHighliter::CodePHP },
        { QLatin1String("Python"), QSourceHighliter::CodePython },
        { QLatin1String("Qml"), QSourceHighliter::CodeQML },
        { QLatin1String("Rhai"), QSourceHighliter::CodeRhai },
        { QLatin1String("Rust"), QSourceHighliter::CodeRust },
        { QLatin1String("Sql"), QSourceHighliter::CodeSQL },
        { QLatin1String("Typescript"), QSourceHighliter::CodeTypeScript },
        { QLatin1String("V"), QSourceHighliter::CodeV },
        { QLatin1String("Vex"), QSourceHighliter::CodeVex },
        { QLatin1String("Xml"), QSourceHighliter::CodeXML },
        { QLatin1String("Yaml"), QSourceHighliter::CodeYAML }
    };
}


void MainWindow::initThemesComboBox()
{
    ui->themeComboBox->addItem("Monokai", QSourceHighliter::Themes::Monokai);
    ui->themeComboBox->addItem("debug", QSourceHighliter::Themes::Monokai);
}

void MainWindow::initLangsComboBox() {
    ui->langComboBox->addItem("Asm");
    ui->langComboBox->addItem("Bash");
    ui->langComboBox->addItem("C");
    ui->langComboBox->addItem("C++");
    ui->langComboBox->addItem("CMake");
    ui->langComboBox->addItem("CSharp");
    ui->langComboBox->addItem("Css");
    ui->langComboBox->addItem("Go");
    ui->langComboBox->addItem("Html");
    ui->langComboBox->addItem("Ini");
    ui->langComboBox->addItem("Javascript");
    ui->langComboBox->addItem("Java");
    ui->langComboBox->addItem("Lua");
    ui->langComboBox->addItem("Make");
    ui->langComboBox->addItem("Php");
    ui->langComboBox->addItem("Python");
    ui->langComboBox->addItem("Qml");
    ui->langComboBox->addItem("Rust");
    ui->langComboBox->addItem("Sql");
    ui->langComboBox->addItem("Typescript");
    ui->langComboBox->addItem("V");
    ui->langComboBox->addItem("Vex");
    ui->langComboBox->addItem("Xml");
    ui->langComboBox->addItem("Yaml");
}

void MainWindow::themeChanged(int) {
    QSourceHighliter::Themes theme = (QSourceHighliter::Themes)ui->themeComboBox->currentData().toInt();
    highlighter->setTheme(theme);
}

void MainWindow::on_actionExit_triggered()
{
    if (maybeSave()) {
//        delete ui;
    }
}

void MainWindow::onFindText(const QString &text) {
    QTextCursor cursor = ui->plainTextEdit->textCursor();
    QString content = ui->plainTextEdit->toPlainText();

    int pos = content.indexOf(text, cursor.position(), Qt::CaseSensitive);

    if (pos >= 0) {
        cursor.setPosition(pos);
        cursor.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, text.length());
        ui->plainTextEdit->setTextCursor(cursor);
        ui->statusbar->showMessage(tr("Найдено: ") + text, 3000);
    } else {
        pos = content.indexOf(text, 0, Qt::CaseSensitive);
        if (pos >= 0) {
            cursor.setPosition(pos);
            cursor.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, text.length());
            ui->plainTextEdit->setTextCursor(cursor);
            ui->statusbar->showMessage("Начали поиск с начала. Найдено: " + text, 3000);
        } else {
            QMessageBox::information(this, "Поиск", "Совпадений не найдено");
            ui->statusbar->showMessage(tr("Совпадений не найдено"), 3000);
        }
    }
}

void MainWindow::replaceText(const QString &find, const QString &replace) {
    QTextDocument *doc = ui->plainTextEdit->document();
    QTextCursor cursor = ui->plainTextEdit->textCursor();
    QString selected = cursor.selectedText();

    if (!selected.isEmpty() && selected == find) {
        cursor.insertText(replace);
        ui->plainTextEdit->setTextCursor(cursor);
        return;
    }

    int pos = cursor.position();
    QTextCursor found = doc->find(find, pos, QTextDocument::FindCaseSensitively);

    if (!found.isNull()) {
        int start = found.selectionStart();
        int end = found.selectionEnd();
        found.insertText(replace);
        QTextCursor newCursor = ui->plainTextEdit->textCursor();
        newCursor.setPosition(start);
        newCursor.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, replace.length());
        ui->plainTextEdit->setTextCursor(newCursor);
    } else {
        QMessageBox::information(this, "Замена", "Совпадений не найдено");
    }
    highlighter->rehighlight();
}

void MainWindow::onReplaceAll(const QString &find, const QString &replace) {
    QString content = ui->plainTextEdit->toPlainText();
    QString newContent = content.replace(find, replace, Qt::CaseSensitive);
    ui->plainTextEdit->setPlainText(newContent);
    highlighter->rehighlight();

    QString message = QString("Все вхождения '%1' заменены на '%2'").arg(find).arg(replace);
    ui->statusbar->showMessage(message, 3000);
}

void MainWindow::on_actionTXT_triggered(){
    QString fileName = QFileDialog::getSaveFileName(this,
        "Сохранить TXT файл",
        "",
        "TXT файлы (*.txt)");
    if (fileName.isEmpty()) return;
    QFile file(fileName);
        if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
            ui->statusbar->showMessage("Ошибка: не удалось открыть файл для записи", 3000);
            return;
        }
        QTextStream out(&file);
        out.setCodec("UTF-8");
        out << ui->plainTextEdit->toPlainText();
                file.close();
                ui->statusbar->showMessage("Сохранен файл " + fileName, 3000);

}

void MainWindow::on_actionJSON_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this,
    "Сохранить JSON файл",
    "",
    "JSON файлы (*.json)");

    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        ui->statusbar->showMessage("Ошибка: не удалось открыть файл для записи", 3000);
        return;
    }

    QJsonObject root;
    root["language"] = ui->langComboBox->currentText();
    root["text"] = ui->plainTextEdit->toPlainText();

    QJsonDocument doc(root);
    file.write(doc.toJson());
    file.close();
//    ui->statusbar->showMessage("Сохранен файл "+fileName, 3000);
}

void MainWindow::on_actionJSON_opener(){
    on_actionExit_triggered();
    QString fileName = QFileDialog::getOpenFileName(this,
          "Открыть JSON файл",
          "",
          "JSON файлы (*.json)");

      if (fileName.isEmpty()) return;

      QFile file(fileName);
      QFileInfo fi(fileName);
      lastfilepath = fi.absoluteFilePath();
      lastsufix = fi.completeSuffix();
//      ui->statusbar->showMessage("123"+ lastfilepath +lastsufix ,3000);
      if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
          ui->statusbar->showMessage("Ошибка: не удалось открыть файл для чтения", 3000);
          return;
      }

      QJsonParseError error;
      QJsonDocument doc = QJsonDocument::fromJson(file.readAll(), &error);
      file.close();

      if (error.error != QJsonParseError::NoError) {
          ui->statusbar->showMessage("Ошибка парсинга JSON", 3000);
          return;
      }

      // Парсинг данных из JSON
      QJsonObject root = doc.object();

      if (root.contains("language") && root["language"].isString()) {
          QString language = root["language"].toString();
          // Установка выбранного языка в комбобокс
          int index = ui->langComboBox->findText(language);
          if (index != -1) {
              ui->langComboBox->setCurrentIndex(index);
          }
      }

      if (root.contains("text") && root["text"].isString()) {
          QString text = root["text"].toString();
          ui->plainTextEdit->setPlainText(text);
      }

      ui->statusbar->showMessage("Загружен файл " + fileName, 3000); return;
    }

void MainWindow::on_actionTXT_opener(){
    on_actionExit_triggered();
    QString fileName = QFileDialog::getOpenFileName(this,
        "Открыть TXT файл",
        "",
        "TXT файлы (*.txt)");

    if (fileName.isEmpty()) return;

    QFile file(fileName);
    QFileInfo fi(fileName);
    lastfilepath = fi.absoluteFilePath();
    lastsufix = fi.completeSuffix();
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        ui->statusbar->showMessage("Ошибка: не удалось открыть файл для чтения", 3000);
        return;
    }

    QTextStream in(&file);
    in.setCodec("UTF-8");
    QString content = in.readAll();
    file.close();

    ui->plainTextEdit->setPlainText(content);
    ui->statusbar->showMessage("Загружен файл " + fileName, 3000);
}

void MainWindow::languageChanged(const QString &lang) {
    highlighter->setCurrentLanguage(_langStringToEnum.value(lang));
    highlighter->rehighlight();
//    QFile f(QDir::currentPath() + "/../test_files/" + lang + ".txt");
//    if (f.open(QIODevice::ReadOnly | QIODevice::Text)) {
//        const auto text = f.readAll();
//        ui->plainTextEdit->setPlainText(QString::fromUtf8(text));
//    }
//    f.close();
}

void MainWindow::on_action_11_triggered()
{
    SearchDialog dialog(this);

    connect(&dialog, &SearchDialog::findNext, this, &MainWindow::onFindText);
    connect(&dialog, &SearchDialog::replaceText, this, &MainWindow::replaceText);
    connect(&dialog, &SearchDialog::replaceAll, this, &MainWindow::onReplaceAll);

    dialog.exec();
}


bool MainWindow::maybeSave()
{
//    ui->statusbar->showMessage("123"+ lastfilepath +lastsufix ,3000);
    if (!ui->plainTextEdit->document()->isModified()) {
        return true;
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,
        "Несохраненные изменения",
        "Документ был изменен. Хотите сохранить изменения?",
        QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel,
        QMessageBox::Save);

    if (reply == QMessageBox::Save) {
        if(lastfilepath != ""){
            if(lastsufix == "json"){
                QFile file(lastfilepath);
                if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
                    ui->statusbar->showMessage("Ошибка: не удалось открыть файл для записи", 3000);

                }

                QJsonObject root;
                root["language"] = ui->langComboBox->currentText();
                root["text"] = ui->plainTextEdit->toPlainText();

                QJsonDocument doc(root);
                file.write(doc.toJson());
                file.close();

            }
            else if(lastsufix == "txt"){
                QFile file(lastfilepath);
                if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
                    ui->statusbar->showMessage("Ошибка: не удалось открыть файл для записи", 3000);
                }
                QTextStream out(&file);
                out.setCodec("UTF-8");
                out << ui->plainTextEdit->toPlainText();
                        file.close();

            }
        }
        else{
            QMessageBox saver;
            saver.setText ("сохранить файл как");
            QAbstractButton *btntxt = saver.addButton("txt",QMessageBox::AcceptRole);
            QAbstractButton *btnjson = saver.addButton("Json",QMessageBox::AcceptRole);
            QAbstractButton *btncancel = saver.addButton(QMessageBox::Cancel);
            saver.exec();

            if(saver.clickedButton() == btntxt){
                on_actionTXT_triggered();
            }
            else if(saver.clickedButton() == btnjson){
                on_actionJSON_triggered();
            }
        }
    } else if (reply == QMessageBox::Cancel) {
        return false; // Отмена выхода
    }
//    delete ui;
    return true;
// Продолжить без сохранения
}
