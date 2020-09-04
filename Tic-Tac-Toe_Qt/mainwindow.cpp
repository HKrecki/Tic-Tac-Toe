#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(600, 400));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_MainMenuWindow_Exit_PushButton_clicked()
{
    this->close();
}

void MainWindow::on_MainMenuWindow_Settings_PushButton_clicked()
{
    assert(ui->stackedWidget->currentIndex() == 0); // Check current page index, if page == MainMenu->ok
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_Back_SettingsPage_clicked()
{
    assert(ui->stackedWidget->currentIndex() == 1);
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_MainMenuWindow_Singleplayer_PushButton_clicked()
{
    gamewindow *a = new gamewindow(30, nullptr);
    a->show();
}
