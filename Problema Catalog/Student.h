#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <cstring>
#include <iostream>

class Student
{
private:
	char* nume;
	char* materie[69];
	int note[100];
	int index; //nr materii
public:
	Student();
	Student(const char* nume);
	const char* GetName()const;
	void PrintNote()const;
	int& operator[](const char* materie);
	operator float();
};

