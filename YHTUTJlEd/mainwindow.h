#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLCDNumber>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWidget *WorkPage;
    QPushButton *ForgotButton;
    QPushButton *LoginButton;
    QPushButton *resetPasswordButton;
    QPushButton *backButton;
    QLineEdit *EmailUsernameLogin;
    QLCDNumber *QLCDNumber;
    QLineEdit *PasswordLOgin;
    QLineEdit *LoginEmailReset;
    QLineEdit *SecurityCodeReset;
private slots:
    void Login();
    void ResetPass();
    void ForgotPass();
    void Back();
};
#endif // MAINWINDOW_H
