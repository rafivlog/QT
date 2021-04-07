/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *login_page;
    QLineEdit *log_in_email;
    QLineEdit *log_in_password;
    QLineEdit *signup_name_text;
    QLineEdit *signup_mail_text;
    QLineEdit *signup_password_text;
    QLineEdit *signup_contract_text;
    QLabel *log_in_emainl_text;
    QLabel *login_email_password_text;
    QLabel *signup_name;
    QLabel *signup_mail;
    QLabel *signup_password;
    QLabel *signup_contract;
    QPushButton *pushButton;
    QPushButton *signup_button;
    QWidget *home_page;
    QPushButton *prifile_button;
    QWidget *profile_page;
    QPushButton *profile_back_button;
    QPushButton *profile_logout_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1152, 670);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -20, 1152, 670));
        login_page = new QWidget();
        login_page->setObjectName(QString::fromUtf8("login_page"));
        login_page->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 255, 177);"));
        log_in_email = new QLineEdit(login_page);
        log_in_email->setObjectName(QString::fromUtf8("log_in_email"));
        log_in_email->setGeometry(QRect(180, 110, 271, 41));
        log_in_password = new QLineEdit(login_page);
        log_in_password->setObjectName(QString::fromUtf8("log_in_password"));
        log_in_password->setGeometry(QRect(180, 180, 271, 31));
        log_in_password->setEchoMode(QLineEdit::Password);
        signup_name_text = new QLineEdit(login_page);
        signup_name_text->setObjectName(QString::fromUtf8("signup_name_text"));
        signup_name_text->setGeometry(QRect(760, 110, 251, 31));
        signup_name_text->setStyleSheet(QString::fromUtf8("border-color: rgb(98, 255, 55);"));
        signup_mail_text = new QLineEdit(login_page);
        signup_mail_text->setObjectName(QString::fromUtf8("signup_mail_text"));
        signup_mail_text->setGeometry(QRect(760, 170, 251, 31));
        signup_password_text = new QLineEdit(login_page);
        signup_password_text->setObjectName(QString::fromUtf8("signup_password_text"));
        signup_password_text->setGeometry(QRect(760, 240, 251, 31));
        signup_password_text->setEchoMode(QLineEdit::Password);
        signup_contract_text = new QLineEdit(login_page);
        signup_contract_text->setObjectName(QString::fromUtf8("signup_contract_text"));
        signup_contract_text->setGeometry(QRect(760, 310, 251, 31));
        log_in_emainl_text = new QLabel(login_page);
        log_in_emainl_text->setObjectName(QString::fromUtf8("log_in_emainl_text"));
        log_in_emainl_text->setGeometry(QRect(70, 120, 91, 31));
        QFont font;
        font.setPointSize(12);
        log_in_emainl_text->setFont(font);
        login_email_password_text = new QLabel(login_page);
        login_email_password_text->setObjectName(QString::fromUtf8("login_email_password_text"));
        login_email_password_text->setGeometry(QRect(60, 190, 91, 20));
        login_email_password_text->setFont(font);
        signup_name = new QLabel(login_page);
        signup_name->setObjectName(QString::fromUtf8("signup_name"));
        signup_name->setGeometry(QRect(670, 120, 81, 21));
        QFont font1;
        font1.setPointSize(10);
        signup_name->setFont(font1);
        signup_mail = new QLabel(login_page);
        signup_mail->setObjectName(QString::fromUtf8("signup_mail"));
        signup_mail->setGeometry(QRect(660, 170, 91, 41));
        signup_mail->setFont(font1);
        signup_password = new QLabel(login_page);
        signup_password->setObjectName(QString::fromUtf8("signup_password"));
        signup_password->setGeometry(QRect(650, 250, 91, 20));
        signup_password->setFont(font1);
        signup_contract = new QLabel(login_page);
        signup_contract->setObjectName(QString::fromUtf8("signup_contract"));
        signup_contract->setGeometry(QRect(660, 320, 91, 20));
        signup_contract->setFont(font1);
        pushButton = new QPushButton(login_page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 300, 111, 51));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(73, 37, 255);"));
        signup_button = new QPushButton(login_page);
        signup_button->setObjectName(QString::fromUtf8("signup_button"));
        signup_button->setGeometry(QRect(830, 400, 121, 51));
        signup_button->setFont(font1);
        signup_button->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 51, 255);"));
        stackedWidget->addWidget(login_page);
        home_page = new QWidget();
        home_page->setObjectName(QString::fromUtf8("home_page"));
        home_page->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 219, 110);"));
        prifile_button = new QPushButton(home_page);
        prifile_button->setObjectName(QString::fromUtf8("prifile_button"));
        prifile_button->setGeometry(QRect(290, 240, 441, 161));
        prifile_button->setFont(font);
        prifile_button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 21, 64);\n"
"border-color: rgb(42, 124, 255);"));
        prifile_button->setIconSize(QSize(40, 40));
        stackedWidget->addWidget(home_page);
        profile_page = new QWidget();
        profile_page->setObjectName(QString::fromUtf8("profile_page"));
        profile_page->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 138, 200);"));
        profile_back_button = new QPushButton(profile_page);
        profile_back_button->setObjectName(QString::fromUtf8("profile_back_button"));
        profile_back_button->setGeometry(QRect(912, 507, 161, 61));
        profile_back_button->setFont(font1);
        profile_back_button->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"background-color: rgb(15, 19, 255);"));
        profile_logout_button = new QPushButton(profile_page);
        profile_logout_button->setObjectName(QString::fromUtf8("profile_logout_button"));
        profile_logout_button->setGeometry(QRect(440, 260, 201, 91));
        profile_logout_button->setFont(font);
        profile_logout_button->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 0);"));
        stackedWidget->addWidget(profile_page);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1152, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        log_in_emainl_text->setText(QCoreApplication::translate("MainWindow", "Email-ID", nullptr));
        login_email_password_text->setText(QCoreApplication::translate("MainWindow", "password", nullptr));
        signup_name->setText(QCoreApplication::translate("MainWindow", "NAME", nullptr));
        signup_mail->setText(QCoreApplication::translate("MainWindow", "EMAIL", nullptr));
        signup_password->setText(QCoreApplication::translate("MainWindow", "PASSWORD", nullptr));
        signup_contract->setText(QCoreApplication::translate("MainWindow", "CONTRACT", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        signup_button->setText(QCoreApplication::translate("MainWindow", "SIGN UP", nullptr));
        prifile_button->setText(QCoreApplication::translate("MainWindow", "PROFILE ", nullptr));
        profile_back_button->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        profile_logout_button->setText(QCoreApplication::translate("MainWindow", "logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
