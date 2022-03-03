#pragma once
#include "Student.h"
#include <cstring>

int compareStudent_name(Student student1, Student student2)
{
	const char* name1 = student1.get_name();
	const char* name2 = student2.get_name();
	if (strcmp(name1, name2) > 0) return 1;
	else if (strcmp(name1, name2) < 0) return -1;
	else return 0;
}
int compareStudent_mathGrade(Student student1, Student student2)
{
	float math1 = student1.get_mathGrade();
	float math2 = student2.get_mathGrade();
	if (math1 > math2) return 1;
	else if (math1 < math2) return -1;
	else return 0;
}
int compareStudent_englishGrade(Student student1, Student student2)
{
	float eng1 = student1.get_englishGrade();
	float eng2 = student2.get_englishGrade();
	if (eng1 > eng2) return 1;
	else if (eng1 < eng2) return -1;
	else return 0;
}
int compareStudent_historyGrade(Student student1, Student student2)
{
	float hist1 = student1.get_historyGrade();
	float hist2 = student2.get_historyGrade();
	if (hist1 > hist2) return 1;
	else if (hist1 < hist2) return -1;
	else return 0;
}
int compareStudent_average(Student student1, Student student2)
{
	float math1 = student1.get_mathGrade();
	float math2 = student2.get_mathGrade();
	float eng1 = student1.get_englishGrade();
	float eng2 = student2.get_englishGrade();
	float hist1 = student1.get_historyGrade();
	float hist2 = student2.get_historyGrade();

	float avg1 = student1.get_average(math1, eng1, hist1);
	float avg2 = student2.get_average(math2, eng2, hist2);

	if (avg1 > avg2) return 1;
	else if (avg1 < avg2) return -1;
	else return 0;
}
