#include "User.hpp"
#include <iostream>

User::User()
{
}
User::User(std::string l_userName) {
    m_userName = l_userName;
}
User::User(std::string l_userName, std::string l_userSurname) {
    m_userName = l_userName;
    m_userSurname = l_userSurname;
}
User::User(std::string l_userName, std::string l_userSurname, std:: string l_userLogin) {
    m_userName = l_userName;
    m_userSurname = l_userSurname;
    m_userLogin = l_userLogin;
}
User::User(std::string l_userName, std::string l_userSurname, std:: string l_userLogin, std:: string l_userEmail) {
    m_userName = l_userName;
    m_userSurname = l_userSurname;
    m_userLogin = l_userLogin;
    m_userEmail = l_userEmail;
}
User::User(std::string l_userName, std::string l_userSurname, std:: string l_userLogin, std:: string l_userEmail, std:: string l_userPassword) {
    m_userName = l_userName;
    m_userSurname = l_userSurname;
    m_userLogin = l_userLogin;
    m_userEmail = l_userEmail;
    m_userPassword = l_userPassword;
}
User::~User()
{
}
void User::print() {
    std::cout << "User name: " << m_userName << std::endl;
    std::cout << "User email: " << m_userEmail << std::endl;
    std::cout << "User login: " << m_userLogin << std::endl;
    std::cout << "User pass: " << m_userPassword << std::endl;
    std::cout << "User surname: " << m_userSurname << std::endl;
}
void User::setUserName(std::string l_userName) {
    m_userName = l_userName;
}
void User::setUserEmail(std::string l_userEmail) {
    m_userEmail = l_userEmail;
}
void User::setUserLogin(std::string l_userLogin) {
    m_userLogin = l_userLogin;
}
void User::setUserPassword(std::string l_userPassword) {
    m_userPassword = l_userPassword;
}
void User::setUserSurname(std::string l_userSurname) {
    m_userSurname = l_userSurname;
}
void User::UserInform(){
    if (!m_userName.empty()){
        std::cout << "User name: " << getUserName() << std::endl;
    }
    if (!m_userSurname.empty()){
        std::cout << "User Surname: " << getUserSurname() << std::endl;
    }
    if (!m_userLogin.empty()){
        std::cout << "User Login: " << getUserLogin() << std::endl;
    }
    if (!m_userEmail.empty()){
        std::cout << "User Mail: " << getUserEmail() << std::endl;
    }
    if (!m_userPassword.empty()){
        std::cout << "User Pass: " << getUserPassword() << std::endl;
    }
}
