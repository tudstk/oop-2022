#include "Student.h"

Student::Student()
{
	index = 0;
}

Student::Student(const char* nume)
{
	int length = strlen(nume);
	this->nume = new char[length+1];
	strcpy(this->nume, nume);
	index = 0;
}

const char* Student::GetName() const
{
	return nume;
}

void Student::PrintNote() const
{
	for (int i = 0; i < index; i++)
	{
		std::cout << materie[i] << " => " << note[i] << '\n';
	}
}

int& Student::operator[](const char* materie)
{
	int length = strlen(materie);
	this->materie[index] = new char[length + 1];
	strcpy(this->materie[index], materie);
	index++;
	return note[index - 1];
}

Student::operator float()
{
	int sum = 0;
	for (int i = 0; i < index; i++)
		sum += note[i];
	return sum*1.0 / index;
}
