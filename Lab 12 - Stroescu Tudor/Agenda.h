#pragma once
#include "Contact.h"
#include "Prieten.h"
#include <list>
using namespace std;

class Agenda
{
	list<Contact*> contacts;
public:
	Contact* FindContact(string name);
	list<Contact*> FriendList();
	void DeleteContact(string name);
	void AddContact(Contact*);
};

