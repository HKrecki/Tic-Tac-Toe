#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QDebug>

#include <assert.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_MainMenuWindow_Exit_PushButton_clicked();

    void on_MainMenuWindow_Settings_PushButton_clicked();

    void on_Back_SettingsPage_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
