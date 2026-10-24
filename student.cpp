#include "student.h"
#include <iostream>
#include <string>
Student::Student(){
       firstName = " ";
	lastName = " ";
 	credidtHours = 0;
}// end student student
std::string Student::getLastFirst(){return lastName + " " + firstName;
}//end return
 void Student::printStudent(){
	 std::cout << firstName << " " << lastName << std::endl;
	 address.printAddress();
	 std::cout << "Bday: ";
	 birthDate.printDate();
	 std::cout << "Graduation Day: "; 
	 gradDate.printDate();
	 std::cout << "Credit Hours: " << creditHours << std::endl;
 }//end printStudent
  void Student::init(std::string studentString){
	  std::stringstream ss(studentString);
std:string street, city, state, zip;
std:string birth, grad, credits;
std::getLine (ss, firstName, ",");
std::getLine (ss, lastName, ",");
std::getLine (ss, street, ",");
std::getLine (ss, zip, ",");
std::getLine (ss, city, ",");
std::getLine (ss, state, ",");
std::getLine (ss, birth, ",");
std::getLine (ss, graduation, ",");
std::getLine (ss, credits, ",");
address.init (street, city, state, zip);
birthDate.init (birth);
gradDate.init (graduation);
creditHours = std::stoi(credits);
  }//end student init
