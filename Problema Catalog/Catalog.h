#pragma once
#include "Student.h"

class Catalog
{
private:
	Student students[100];
	int count;

public:
	Catalog();
	int GetCount()const;
	void operator+=(const char* nume);
	Student& operator[](int index);
	Student& operator[](const char* nume);
};

