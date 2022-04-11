#define _CRT_SECURE_NO_WARNINGS
#include "Catalog.h"
#include <cstring>

Catalog::Catalog()
{
	count = 0;
}

int Catalog::GetCount() const
{
	return count;
}

void Catalog::operator+=(const char* nume)
{
	students[count] = Student(nume);
	count++;
}

Student& Catalog::operator[](int index)
{
	return students[index];
}

Student& Catalog::operator[](const char* nume)
{
	for (unsigned i = 0; i < count; i++)
		if (strcmp(students[i].GetName(), nume)==0)
			return students[i];
}
