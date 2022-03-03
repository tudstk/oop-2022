#pragma once
#include <cstring>

class Student {

private:
	char name[50];
	float mathGrade;
	float englishGrade;
	float historyGrade;
public:
	//setters
	void set_name(const char* name);
	void set_mathGrade(float mathGrade);
	void set_englishGrade(float englishGrade);
	void set_historyGrade(float historyGrade);
	//getters
	const char* get_name()const;
	float get_mathGrade()const;
	float get_englishGrade()const;
	float get_historyGrade()const;
	float get_average(float mathGrade, float englishGrade, float historyGrade)const;

}; 
