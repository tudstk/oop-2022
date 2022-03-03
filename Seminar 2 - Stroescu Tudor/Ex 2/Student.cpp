#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include "Global.h"
#include <iostream>
#include <cstring>

void Student::set_name(const char* name)
{
	strcpy(this->name, name);
}

void Student::set_mathGrade(float mathGrade)
{
	this->mathGrade = mathGrade;
}

void Student::set_englishGrade(float englishGrade)
{
	this->englishGrade = englishGrade;
}

void Student::set_historyGrade(float historyGrade)
{
	this->historyGrade = historyGrade;
}

const char* Student::get_name() const
{
	return name;
}

float Student::get_mathGrade()const
{
	return mathGrade;
}

float Student::get_englishGrade()const
{
	return englishGrade;
}

float Student::get_historyGrade()const
{
	return historyGrade;
}

float Student::get_average(float mathGrade, float englishGrade, float historyGrade)const
{
	return (mathGrade + englishGrade + historyGrade) / 3;
}

int main()
{
	class Student student, student1, student2;
	student.set_name("Luka Vladimirovici");
	student.set_mathGrade(8.3);
	student.set_englishGrade(9.4);
	student.set_historyGrade(6.9);
	float math = student.get_mathGrade();
	float english = student.get_englishGrade();
	float history = student.get_historyGrade();
	std::cout << "Test:" << student.get_name() << " " << student.get_average(math, english, history) << std::endl;

	student1.set_name("Luka");
	student1.set_mathGrade(8.1);
	student1.set_englishGrade(9.3);
	student1.set_historyGrade(3.45);

	student2.set_name("Luca");
	student2.set_mathGrade(7.65);
	student2.set_englishGrade(1.7);
	student2.set_historyGrade(9.85);

	if (compareStudent_name(student1, student2) == 0) std::cout << "Studentii au acelasi nume.\n";
	else std::cout << "Studentii au nume diferite.\n";

	if (compareStudent_historyGrade(student1, student2) > 0) std::cout << "Studentul 1 are nota mai mare la istorie\n";
	else if (compareStudent_historyGrade(student1, student2) < 0) std::cout << "Studentul 2 are nota mai mare la istorie\n";
	else std::cout << "Studentii au aceleasi note la istorie\n";
	//idem si pt celelalte materii

	if (compareStudent_average(student1, student2) > 0) std::cout << "Studentul 1 are media mai mare.\n";
	else if (compareStudent_average(student1, student2) < 0) std::cout << "Studentul 2 are media mai mare.\n";
	else std::cout << "Studentii au aceeasi medie.\n";


	return 0;
}