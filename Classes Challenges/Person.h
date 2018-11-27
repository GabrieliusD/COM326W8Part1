#pragma once
#include <string>
class Person
{
private:
	std::string name_;
	std::string email_;
public:
	Person(std::string name, std::string email);
	Person(std::string name);
	Person();
	~Person();
	std::string getName() const;
	std::string getEmail() const;
	void setName(std::string name);
	void setEmail(std::string email);

	virtual std::string ToString() = 0;
};

