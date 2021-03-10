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
#include <QtWidgets/QLCDNumber>
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
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *LoginPage;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_3;
    QLineEdit *EmailUsernameLogin;
    QPushButton *ForgotButton;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *PasswordLOgin;
    QLabel *label;
    QPushButton *LoginButton;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_6;
    QWidget *ResetPasswordPage;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QLineEdit *LoginEmailReset;
    QLabel *label_3;
    QLineEdit *SecurityCodeReset;
    QHBoxLayout *horizontalLayout;
    QPushButton *backButton;
    QPushButton *resetPasswordButton;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *WorkPage;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_5;
    QLCDNumber *lcdNumber;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_5;
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
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        LoginPage = new QWidget();
        LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        gridLayoutWidget_3 = new QWidget(LoginPage);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(-1, -1, 781, 541));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        EmailUsernameLogin = new QLineEdit(gridLayoutWidget_3);
        EmailUsernameLogin->setObjectName(QString::fromUtf8("EmailUsernameLogin"));

        gridLayout_3->addWidget(EmailUsernameLogin, 1, 1, 1, 1);

        ForgotButton = new QPushButton(gridLayoutWidget_3);
        ForgotButton->setObjectName(QString::fromUtf8("ForgotButton"));

        gridLayout_3->addWidget(ForgotButton, 4, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 0, 1, 1, 1);

        PasswordLOgin = new QLineEdit(gridLayoutWidget_3);
        PasswordLOgin->setObjectName(QString::fromUtf8("PasswordLOgin"));

        gridLayout_3->addWidget(PasswordLOgin, 3, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        LoginButton = new QPushButton(gridLayoutWidget_3);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));

        gridLayout_3->addWidget(LoginButton, 4, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 3, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 5, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 1, 1, 1);

        stackedWidget->addWidget(LoginPage);
        ResetPasswordPage = new QWidget();
        ResetPasswordPage->setObjectName(QString::fromUtf8("ResetPasswordPage"));
        gridLayoutWidget_2 = new QWidget(ResetPasswordPage);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 761, 521));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer_3);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        LoginEmailReset = new QLineEdit(gridLayoutWidget_2);
        LoginEmailReset->setObjectName(QString::fromUtf8("LoginEmailReset"));

        formLayout->setWidget(2, QFormLayout::FieldRole, LoginEmailReset);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        SecurityCodeReset = new QLineEdit(gridLayoutWidget_2);
        SecurityCodeReset->setObjectName(QString::fromUtf8("SecurityCodeReset"));

        formLayout->setWidget(4, QFormLayout::FieldRole, SecurityCodeReset);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        backButton = new QPushButton(gridLayoutWidget_2);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout->addWidget(backButton);

        resetPasswordButton = new QPushButton(gridLayoutWidget_2);
        resetPasswordButton->setObjectName(QString::fromUtf8("resetPasswordButton"));

        horizontalLayout->addWidget(resetPasswordButton);


        formLayout->setLayout(5, QFormLayout::SpanningRole, horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer_4);


        gridLayout_4->addLayout(formLayout, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 2, 1, 1, 1);

        stackedWidget->addWidget(ResetPasswordPage);
        WorkPage = new QWidget();
        WorkPage->setObjectName(QString::fromUtf8("WorkPage"));
        gridLayoutWidget_4 = new QWidget(WorkPage);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(19, 19, 751, 511));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_7, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 2, 0, 1, 1);

        lcdNumber = new QLCDNumber(gridLayoutWidget_4);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(3);
        lcdNumber->setProperty("intValue", QVariant(100));

        gridLayout_6->addWidget(lcdNumber, 2, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 2, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_8, 3, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_6->addWidget(label_5, 1, 1, 1, 1);

        stackedWidget->addWidget(WorkPage);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

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
        ForgotButton->setText(QCoreApplication::translate("MainWindow", "Forgot", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Email / Username", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Login / email", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Security code", nullptr));
        backButton->setText(QCoreApplication::translate("MainWindow", "\320\257 \320\275\320\265 \321\202\321\203\320\264\320\260 \320\275\320\260\320\266\320\260\320\273...", nullptr));
        resetPasswordButton->setText(QCoreApplication::translate("MainWindow", "Reset password", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "YOU WILL DIE IN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
