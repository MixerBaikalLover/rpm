/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *LoginPage;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *EmailUsernameLogin;
    QLineEdit *PasswordLOgin;
    QLabel *label;
    QPushButton *LoginButton;
    QPushButton *ForgotButton;
    QWidget *ResetPasswordPage;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *LoginEmailReset;
    QLineEdit *SecurityCodeReset;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *resetPasswordButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(254, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        LoginPage = new QWidget();
        LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        gridLayoutWidget = new QWidget(LoginPage);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 34, 231, 131));
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 3, 0, 1, 1);

        EmailUsernameLogin = new QLineEdit(gridLayoutWidget);
        EmailUsernameLogin->setObjectName(QString::fromUtf8("EmailUsernameLogin"));

        gridLayout_3->addWidget(EmailUsernameLogin, 1, 1, 1, 1);

        PasswordLOgin = new QLineEdit(gridLayoutWidget);
        PasswordLOgin->setObjectName(QString::fromUtf8("PasswordLOgin"));

        gridLayout_3->addWidget(PasswordLOgin, 3, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        LoginButton = new QPushButton(gridLayoutWidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));

        gridLayout_3->addWidget(LoginButton, 4, 1, 1, 1);

        ForgotButton = new QPushButton(gridLayoutWidget);
        ForgotButton->setObjectName(QString::fromUtf8("ForgotButton"));

        gridLayout_3->addWidget(ForgotButton, 4, 0, 1, 1);

        stackedWidget->addWidget(LoginPage);
        ResetPasswordPage = new QWidget();
        ResetPasswordPage->setObjectName(QString::fromUtf8("ResetPasswordPage"));
        formLayoutWidget = new QWidget(ResetPasswordPage);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 241, 181));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        LoginEmailReset = new QLineEdit(formLayoutWidget);
        LoginEmailReset->setObjectName(QString::fromUtf8("LoginEmailReset"));

        formLayout->setWidget(1, QFormLayout::FieldRole, LoginEmailReset);

        SecurityCodeReset = new QLineEdit(formLayoutWidget);
        SecurityCodeReset->setObjectName(QString::fromUtf8("SecurityCodeReset"));

        formLayout->setWidget(2, QFormLayout::FieldRole, SecurityCodeReset);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        resetPasswordButton = new QPushButton(formLayoutWidget);
        resetPasswordButton->setObjectName(QString::fromUtf8("resetPasswordButton"));

        horizontalLayout->addWidget(resetPasswordButton);


        formLayout->setLayout(3, QFormLayout::SpanningRole, horizontalLayout);

        stackedWidget->addWidget(ResetPasswordPage);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Email / Username", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        ForgotButton->setText(QCoreApplication::translate("MainWindow", "Forgot", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Security code", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Login / email", nullptr));
        resetPasswordButton->setText(QCoreApplication::translate("MainWindow", "Reset password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
