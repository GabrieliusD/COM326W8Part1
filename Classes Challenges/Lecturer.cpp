#include "Lecturer.h"



Lecturer::Lecturer(std::string name, std::string email, int staffID, std::string subjectArea, std::vector<Module> modules) :
	Person(name, email), staffID_(staffID), subjectArea_(subjectArea), modules_(modules)
{
}

Lecturer::Lecturer()
{
}


Lecturer::~Lecturer()
{
}

int Lecturer::getStaffID()
{
	return staffID_;
}

std::string Lecturer::getSubjectArea()
{
	return subjectArea_;
}

void Lecturer::setStaffID(int staffID)
{
	staffID_ = staffID;
}

void Lecturer::setSubjectArea(std::string subjectArea)
{
	subjectArea_ = subjectArea;
}

void Lecturer::AddModule(Module module)
{
}

void Lecturer::deleteModule(Module module)
{
}

std::string Lecturer::ToString()
{
	std::string moduleNames;
	for (int i = 0; i < modules_.size(); i++)
	{
		moduleNames += modules_.at(i).getModuleTitle();
	}
	return Person::getName() + " " + Person::getEmail() + " " + moduleNames;
}
