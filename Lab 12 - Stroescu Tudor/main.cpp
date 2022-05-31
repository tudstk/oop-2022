#include "Agenda.h"
#include "Contact.h"
#include "Prieten.h"
#include "Cunoscut.h"
#include "Coleg.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Agenda A;
	Prieten* Luca = new Prieten("Luca", "13.12.2002", "07namcartela", "Strada Regilor nr.420");
	Prieten* Stefan = new Prieten("Stefan", "10.09.2002", "07bicepstriceps", "Strada Regilor nr.1");
	Prieten* Andrei = new Prieten("Andrei Apricopoai", "15.04.2002", "071234567", "Strada Regilor nr.119");
	Cunoscut* Mircea = new Cunoscut("Mircea", "072727227");
	Cunoscut* Mihai = new Cunoscut("Mihai", "07999999");
	Coleg* Dragos = new Coleg("Dragos", "076969696", "Google", "Strada Raiului nr.15");
	Coleg* Jackie = new Coleg("Jackie Chan", "0701010101", "Gemini CAD systems", "Strada Chuck Norris nr.999");

	A.AddContact(Luca);
	A.AddContact(Stefan);
	A.AddContact(Andrei);
	A.AddContact(Mircea);
	A.AddContact(Mihai);
	A.AddContact(Dragos);
	A.AddContact(Jackie);

	auto person = A.FindContact("Dragos");
	if (person == 0)
		cout << "Nu am gasit persoana cautata!" << "\n";
	else
		cout << "L-am gasit pe " << person->getName() << " in lista de contacte \n";

	list<Contact*> prieteni = A.FriendList();

	for (auto p : prieteni)
	{
		cout << p->getName() << "\n";
	}

	return 0;
}