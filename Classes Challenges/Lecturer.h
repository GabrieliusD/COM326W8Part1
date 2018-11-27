#pragma once
#include "Person.h"
#include <string>
#include <vector>
#include "Module.h"
class Lecturer :
	public Person
{
public:
	int staffID_;
	std::string subjectArea_;
	std::vector<Module> modules_;
public:
	Lecturer(std::string name, std::string email, int staffID, std::string subjectArea, std::vector<Module> modules);
	Lecturer();
	~Lecturer();
	int getStaffID();
	std::string getSubjectArea();
	void setStaffID(int staffID);
	void setSubjectArea(std::string subjectArea);
	void AddModule(Module module);
	void deleteModule(Module module);

	std::string ToString() override;
};

