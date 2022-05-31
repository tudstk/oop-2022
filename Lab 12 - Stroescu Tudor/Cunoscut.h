#pragma once
#include "Contact.h"

class Cunoscut : public Contact
{
private:
	string phone_number;
public:
	Cunoscut(string name, string phone_number) {
		this->name = name;
		this->phone_number = phone_number;
		type = "cunoscut";
	};
	string getPhoneNumber();
};

