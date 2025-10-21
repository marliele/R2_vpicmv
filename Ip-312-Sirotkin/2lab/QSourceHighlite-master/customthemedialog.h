#ifndef CUSTOMTHEMEDIALOG_H
#define CUSTOMTHEMEDIALOG_H

#include <QDialog>
#include <QColor>
#include <QHash>
#include "qsourcehighliter.h"

namespace Ui {
class CustomThemeDialog;
}

class CustomThemeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CustomThemeDialog(QWidget *parent = nullptr);
    ~CustomThemeDialog();

    struct CustomTheme {
        QString name;
        QHash<QSourceHighlite::Token, QColor> colors;
        QColor editorBackground;
    };

    CustomTheme getTheme() const;

private slots:
    void on_chooseColorButton_clicked();
    void on_tokenComboBox_currentIndexChanged(int index);
    void on_themeNameEdit_textChanged(const QString &text);
    void on_saveThemeButton_clicked();
    void updateColorPreview();

private:
    Ui::CustomThemeDialog *ui;
    CustomTheme currentTheme;
    QHash<QSourceHighlite::Token, QColor> defaultColors;

    void setupTokenComboBox();
    void loadDefaultColors();
    void saveThemeToFile(const CustomTheme &theme);
};

#endif // CUSTOMTHEMEDIALOG_H
