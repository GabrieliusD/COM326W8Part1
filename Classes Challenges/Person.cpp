#include "Person.h"



Person::Person(std::string name, std::string email) : name_(name), email_(email){
}

Person::Person(std::string name) : name_(name){
}

Person::Person(){
}


Person::~Person(){
}

std::string Person::getName() const {
	return name_;
}

std::string Person::getEmail() const
{
	return email_;
}

void Person::setName(std::string name)
{
	name_ = name;
}

void Person::setEmail(std::string email)
{
	email_ = email;
}

std::string Person::ToString()
{
	return std::string();
}
