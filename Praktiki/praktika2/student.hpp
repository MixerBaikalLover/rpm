#pragma once
#include "User.hpp"

class Student : private User {
private:
    std::string m_studentGroup;
    bool m_studentStatus;
public:
    Student();
    Student(std::string l_userName, std::string l_userEmail, std::string l_studentGroup, bool l_studentStatus ) {
        m_studentGroup = l_studentGroup;
        m_studentStatus = l_studentStatus;

    }
    void setStudentStatus(bool l_studentStatus);
    bool getStudentStatus (){return m_studentStatus;};
    void setStudentGroup(std::string l_studentGroup);
    std::string getStudentGroup (){return m_studentGroup;};
    void print();



};