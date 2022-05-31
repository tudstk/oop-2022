#pragma once
#include "Contact.h"

class Prieten : public Contact 
{
private:
	string birth_date;
	string phone_number;
	string adress;
public:
	Prieten(string name, string birth_date, string phone_number, string adress) {
		this->name = name;
		this->birth_date = birth_date;
		this->phone_number = phone_number;
		this->adress = adress;
		type = "friend";
	};
	string getBirthDate();
	string getPhoneNumber();
	string getAdress();
};

