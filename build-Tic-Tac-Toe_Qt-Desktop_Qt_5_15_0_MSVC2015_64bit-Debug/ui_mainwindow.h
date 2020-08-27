/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *MainMenu_page;
    QGridLayout *gridLayout_2;
    QLabel *MainMenuWindow_Label;
    QPushButton *MainMenuWindow_Singleplayer_PushButton;
    QPushButton *MainMenuWindow_Multiplayer_PushButton;
    QPushButton *MainMenuWindow_Settings_PushButton;
    QPushButton *MainMenuWindow_Exit_PushButton;
    QWidget *Settings_page;
    QGridLayout *gridLayout_3;
    QPushButton *Back_SettingsPage;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(818, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        MainMenu_page = new QWidget();
        MainMenu_page->setObjectName(QString::fromUtf8("MainMenu_page"));
        gridLayout_2 = new QGridLayout(MainMenu_page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        MainMenuWindow_Label = new QLabel(MainMenu_page);
        MainMenuWindow_Label->setObjectName(QString::fromUtf8("MainMenuWindow_Label"));
        QFont font;
        font.setPointSize(30);
        MainMenuWindow_Label->setFont(font);
        MainMenuWindow_Label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(MainMenuWindow_Label, 0, 0, 1, 1);

        MainMenuWindow_Singleplayer_PushButton = new QPushButton(MainMenu_page);
        MainMenuWindow_Singleplayer_PushButton->setObjectName(QString::fromUtf8("MainMenuWindow_Singleplayer_PushButton"));
        MainMenuWindow_Singleplayer_PushButton->setEnabled(true);
        MainMenuWindow_Singleplayer_PushButton->setBaseSize(QSize(100, 100));
        QFont font1;
        font1.setPointSize(20);
        MainMenuWindow_Singleplayer_PushButton->setFont(font1);

        gridLayout_2->addWidget(MainMenuWindow_Singleplayer_PushButton, 1, 0, 1, 1);

        MainMenuWindow_Multiplayer_PushButton = new QPushButton(MainMenu_page);
        MainMenuWindow_Multiplayer_PushButton->setObjectName(QString::fromUtf8("MainMenuWindow_Multiplayer_PushButton"));
        MainMenuWindow_Multiplayer_PushButton->setEnabled(true);
        MainMenuWindow_Multiplayer_PushButton->setBaseSize(QSize(100, 100));
        MainMenuWindow_Multiplayer_PushButton->setFont(font1);

        gridLayout_2->addWidget(MainMenuWindow_Multiplayer_PushButton, 2, 0, 1, 1);

        MainMenuWindow_Settings_PushButton = new QPushButton(MainMenu_page);
        MainMenuWindow_Settings_PushButton->setObjectName(QString::fromUtf8("MainMenuWindow_Settings_PushButton"));
        MainMenuWindow_Settings_PushButton->setEnabled(true);
        MainMenuWindow_Settings_PushButton->setBaseSize(QSize(100, 100));
        MainMenuWindow_Settings_PushButton->setFont(font1);

        gridLayout_2->addWidget(MainMenuWindow_Settings_PushButton, 3, 0, 1, 1);

        MainMenuWindow_Exit_PushButton = new QPushButton(MainMenu_page);
        MainMenuWindow_Exit_PushButton->setObjectName(QString::fromUtf8("MainMenuWindow_Exit_PushButton"));
        MainMenuWindow_Exit_PushButton->setEnabled(true);
        MainMenuWindow_Exit_PushButton->setBaseSize(QSize(100, 100));
        MainMenuWindow_Exit_PushButton->setFont(font1);

        gridLayout_2->addWidget(MainMenuWindow_Exit_PushButton, 4, 0, 1, 1);

        stackedWidget->addWidget(MainMenu_page);
        Settings_page = new QWidget();
        Settings_page->setObjectName(QString::fromUtf8("Settings_page"));
        gridLayout_3 = new QGridLayout(Settings_page);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        Back_SettingsPage = new QPushButton(Settings_page);
        Back_SettingsPage->setObjectName(QString::fromUtf8("Back_SettingsPage"));
        Back_SettingsPage->setMinimumSize(QSize(50, 50));
        Back_SettingsPage->setMaximumSize(QSize(50, 50));

        gridLayout_3->addWidget(Back_SettingsPage, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(723, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 505, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        stackedWidget->addWidget(Settings_page);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MainMenuWindow_Label->setText(QCoreApplication::translate("MainWindow", "Main Menu", nullptr));
        MainMenuWindow_Singleplayer_PushButton->setText(QCoreApplication::translate("MainWindow", "Singleplayer", nullptr));
        MainMenuWindow_Multiplayer_PushButton->setText(QCoreApplication::translate("MainWindow", "Multiplayer", nullptr));
        MainMenuWindow_Settings_PushButton->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        MainMenuWindow_Exit_PushButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        Back_SettingsPage->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
