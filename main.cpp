#include <iostream>
#include <string>
#include <vector> 
#include <fstring>
#include "student.h"


void loadStudents(std::vector<Student>& students){
    std::ifstream file("students.csv");
    if (!file.isopen()){
        std::cout << "Cannot open file" << std::endl;
        return;
    }//end if
    while (std::getline(file, line)){
        Student* student = new Student();
        student -> init(line);
        students.push_back(student);
    }//end while
    file.close();
}//end load students

void showStudents(const std::vector<Student>& students){
    for(const Student* student : students){
        std::cout << student -> getName() << std::endl;
    }//end for
}//end show studnets

void findStudnet(std::vector<Studnet*>& students){
    std::cin >> lastName << std::endl;
    bool found = false;

    for (Student* student : students){
        if (student -> getLastName() == lastName){
            std::cout << student -> getName() << std::endl;
            found = true;
        }//end if 
        if (!found){
            std::cout << "Student wasn't found" << std::endl;
        }//end end if
    }//end for
}


void deleteStudents(std::vector<Student*>& students){
    for (Student* student : students){
        delete student;
    }//end for
    students.clear();
}//end delete students

