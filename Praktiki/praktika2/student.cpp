#include "Student.hpp"
#include <iostream>

Student::Student() {

    setStudentGroup("Y2335");
    setStudentStatus(false);
    setUserName("Mark");
    setUserEmail("Plakhtiy@mail.ru");
    setUserPassword("123454321");
    setUserLogin("Clown");
    setUserSurname("Plakhtiy");
    Student::print();
}

void Student::print() {
    User::UserInform();
   if(!m_studentGroup.empty()){ std::cout << "Group: " << getStudentGroup() << std::endl;}
        if (m_studentStatus == 0) {
            std::cout << "Status: " << "otchislen" << std::endl;
        } else { std::cout << "Status: " << "obuchaetsa" << std::endl; }


}

void Student::setStudentStatus(bool l_studentStatus) {
    m_studentStatus = l_studentStatus;
}

void Student::setStudentGroup(std::string l_studentGroup) {
    m_studentGroup=l_studentGroup;
}



