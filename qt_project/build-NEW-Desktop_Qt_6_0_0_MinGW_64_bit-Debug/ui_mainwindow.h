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
    QLabel *login_pawwwsord;
    QPushButton *push_button_login;
    QLineEdit *login_email_text;
    QLineEdit *login_password_text;
    QLabel *login_email_;
    QLabel *signup_name;
    QLabel *signup_email;
    QLabel *signup_pawwword;
    QLabel *signup_contactnumber;
    QLineEdit *signup_name_text;
    QLineEdit *signup_email_text;
    QLineEdit *signup_password_text;
    QLineEdit *signup_contactnumber_text;
    QPushButton *signup_button;
    QWidget *profile_page;
    QPushButton *profile_button;
    QWidget *ajayra_page;
    QPushButton *ajayra_back_button;
    QPushButton *logout_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1307, 670);
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1307, 670));
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 176, 48);"));
        login_page = new QWidget();
        login_page->setObjectName(QString::fromUtf8("login_page"));
        login_pawwwsord = new QLabel(login_page);
        login_pawwwsord->setObjectName(QString::fromUtf8("login_pawwwsord"));
        login_pawwwsord->setGeometry(QRect(60, 210, 101, 20));
        QFont font1;
        font1.setPointSize(10);
        login_pawwwsord->setFont(font1);
        push_button_login = new QPushButton(login_page);
        push_button_login->setObjectName(QString::fromUtf8("push_button_login"));
        push_button_login->setGeometry(QRect(200, 320, 111, 61));
        QFont font2;
        font2.setPointSize(14);
        push_button_login->setFont(font2);
        push_button_login->setStyleSheet(QString::fromUtf8("background-color: rgb(19, 54, 255);\n"
"background-color: rgb(179, 183, 255);"));
        login_email_text = new QLineEdit(login_page);
        login_email_text->setObjectName(QString::fromUtf8("login_email_text"));
        login_email_text->setGeometry(QRect(150, 110, 221, 61));
        login_password_text = new QLineEdit(login_page);
        login_password_text->setObjectName(QString::fromUtf8("login_password_text"));
        login_password_text->setGeometry(QRect(150, 200, 221, 41));
        login_password_text->setEchoMode(QLineEdit::Password);
        login_email_ = new QLabel(login_page);
        login_email_->setObjectName(QString::fromUtf8("login_email_"));
        login_email_->setGeometry(QRect(70, 130, 55, 16));
        login_email_->setFont(font1);
        signup_name = new QLabel(login_page);
        signup_name->setObjectName(QString::fromUtf8("signup_name"));
        signup_name->setGeometry(QRect(490, 130, 55, 16));
        signup_name->setFont(font1);
        signup_email = new QLabel(login_page);
        signup_email->setObjectName(QString::fromUtf8("signup_email"));
        signup_email->setGeometry(QRect(500, 200, 81, 20));
        signup_email->setFont(font1);
        signup_pawwword = new QLabel(login_page);
        signup_pawwword->setObjectName(QString::fromUtf8("signup_pawwword"));
        signup_pawwword->setGeometry(QRect(474, 270, 71, 21));
        signup_pawwword->setFont(font1);
        signup_contactnumber = new QLabel(login_page);
        signup_contactnumber->setObjectName(QString::fromUtf8("signup_contactnumber"));
        signup_contactnumber->setGeometry(QRect(444, 340, 121, 21));
        signup_contactnumber->setFont(font1);
        signup_name_text = new QLineEdit(login_page);
        signup_name_text->setObjectName(QString::fromUtf8("signup_name_text"));
        signup_name_text->setGeometry(QRect(570, 130, 211, 31));
        signup_email_text = new QLineEdit(login_page);
        signup_email_text->setObjectName(QString::fromUtf8("signup_email_text"));
        signup_email_text->setGeometry(QRect(570, 200, 211, 31));
        signup_password_text = new QLineEdit(login_page);
        signup_password_text->setObjectName(QString::fromUtf8("signup_password_text"));
        signup_password_text->setGeometry(QRect(570, 270, 211, 31));
        signup_contactnumber_text = new QLineEdit(login_page);
        signup_contactnumber_text->setObjectName(QString::fromUtf8("signup_contactnumber_text"));
        signup_contactnumber_text->setGeometry(QRect(570, 340, 211, 31));
        signup_button = new QPushButton(login_page);
        signup_button->setObjectName(QString::fromUtf8("signup_button"));
        signup_button->setGeometry(QRect(620, 440, 121, 51));
        signup_button->setFont(font);
        signup_button->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 222, 249);"));
        stackedWidget->addWidget(login_page);
        profile_page = new QWidget();
        profile_page->setObjectName(QString::fromUtf8("profile_page"));
        profile_button = new QPushButton(profile_page);
        profile_button->setObjectName(QString::fromUtf8("profile_button"));
        profile_button->setGeometry(QRect(350, 317, 141, 71));
        profile_button->setFont(font);
        profile_button->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        stackedWidget->addWidget(profile_page);
        ajayra_page = new QWidget();
        ajayra_page->setObjectName(QString::fromUtf8("ajayra_page"));
        ajayra_back_button = new QPushButton(ajayra_page);
        ajayra_back_button->setObjectName(QString::fromUtf8("ajayra_back_button"));
        ajayra_back_button->setGeometry(QRect(80, 100, 121, 41));
        ajayra_back_button->setFont(font1);
        ajayra_back_button->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 217, 255);"));
        logout_button = new QPushButton(ajayra_page);
        logout_button->setObjectName(QString::fromUtf8("logout_button"));
        logout_button->setGeometry(QRect(330, 310, 161, 81));
        logout_button->setFont(font);
        logout_button->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 226, 255);"));
        stackedWidget->addWidget(ajayra_page);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1307, 34));
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
        login_pawwwsord->setText(QCoreApplication::translate("MainWindow", "password", nullptr));
        push_button_login->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        login_email_->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        signup_name->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        signup_email->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        signup_pawwword->setText(QCoreApplication::translate("MainWindow", "passwordp", nullptr));
        signup_contactnumber->setText(QCoreApplication::translate("MainWindow", "contact number", nullptr));
        signup_button->setText(QCoreApplication::translate("MainWindow", "SIGN UP", nullptr));
        profile_button->setText(QCoreApplication::translate("MainWindow", "PROFILE", nullptr));
        ajayra_back_button->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        logout_button->setText(QCoreApplication::translate("MainWindow", "LOGOUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
