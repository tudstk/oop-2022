#pragma once
#include <string>
#include <iostream>
using namespace std;

class Contact
{
public:
	string name;
	string type;
	virtual string getName() { return this->name; };
};

