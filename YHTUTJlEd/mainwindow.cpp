#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ForgotButton = ui ->ForgotButton;
    LoginButton = ui ->LoginButton;
    backButton = ui-> backButton;
    resetPasswordButton = ui ->resetPasswordButton;
    ui -> stackedWidget-> setCurrentWidget(ui->LoginPage);
    connect(ForgotButton, &QPushButton::clicked, this, &MainWindow::ForgotPass);
    connect(backButton, &QPushButton::clicked, this,&MainWindow::Back);
    connect(LoginButton, &QPushButton::clicked, this,&MainWindow::Login);
    EmailUsernameLogin = ui->EmailUsernameLogin;
    PasswordLOgin = ui->PasswordLOgin;
    LoginEmailReset = ui->LoginEmailReset;
    SecurityCodeReset = ui->SecurityCodeReset;
}


MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::Login(){
    if(EmailUsernameLogin->text() == "abc" && PasswordLOgin->text() == "123"){
        ui -> stackedWidget-> setCurrentWidget(ui->WorkPage);
    }

}
void MainWindow::ResetPass(){

}
void MainWindow::ForgotPass(){
    ui -> stackedWidget-> setCurrentWidget(ui->ResetPasswordPage);
}
void MainWindow::Back(){
    ui -> stackedWidget-> setCurrentWidget(ui->LoginPage);
}
