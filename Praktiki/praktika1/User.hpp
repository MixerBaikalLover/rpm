#pragma once

#include <string>

class User
{
private:
    std::string m_userName;
    std::string m_userEmail;
    std::string m_userSurname;
    std::string m_userPassword;
    std::string m_userLogin;
public:
    User();
    User(std::string l_userName);
    User(std::string l_userName, std::string l_userSurname);
    User(std::string l_userName, std::string l_userSurname, std::string l_userLogin);
    User(std::string l_userName, std::string l_userSurname, std::string l_userLogin, std:: string l_userEmail);
    User(std::string l_userName, std::string l_userSurname, std::string l_userLogin, std:: string l_userEmail, std:: string l_userPassword);

    void setUserName(std::string l_userName);
    void setUserSurname(std::string l_userSurname);
    void setUserLogin(std::string l_userLogin);
    void setUserEmail(std::string l_userEmail);
    void setUserPassword(std::string l_userPassword);



    std::string getUserName() { return m_userName; }
    std::string getUserEmail() { return m_userEmail; }
    std::string getUserSurname() { return m_userSurname; }
    std::string getUserPassword() { return m_userPassword; }
    std::string getUserLogin() { return m_userLogin; }

    void print();
    void UserInform();
    ~User();
};