#pragma once
#include "Contact.h"

class Coleg : public Contact
{
private:
	string phone_number;
	string company;
	string adress;
public:
	Coleg(string name, string phone_number, string company, string adress) {
		this->name = name;
		this->phone_number = phone_number;
		this->adress = adress;
		this->company = company;
		type = "coleg";
	};
	string getPhoneNumber();
	string getCompany();
	string getAdress();
};

