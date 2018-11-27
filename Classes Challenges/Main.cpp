/*
* Main.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 8/10/2017
* Description: Driver to test the student class
* Copyright notice
*/

#include <iostream>
#include "Student.h"
#include "Module.h"
#include "Lecturer.h"

using namespace std;

int main() {


	//Overload the input operator
	//cin >> stu3;

	//Call the static member function
	cout << "The number of students enrolled is: " << Student::GetEnrolled() << endl;

	Module module { "Software testing for beginners", "TES101", 20, 80 };
	Module module2 { "Software testing for ninjas ", "BAK101", 20, 80 };
	std::vector<Module> mods{ module,module2 };
	Student stud1("bob","123", "Maths", 5);
	Lecturer lect1("james", "james@gmail.com", 124, "Computing",mods);
	Person *pers = nullptr;

	pers = &stud1;
	std::cout << pers->ToString() << std::endl;
	pers = &lect1;
	std::cout << pers->ToString() << std::endl;
	return 0;
}

