#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <iostream>
#include <cstdarg>
#include <cstring>
#include <initializer_list>

Sort::Sort(int ListSize, int Min, int Max)
{
	this->ListSize = ListSize;
	v = new int[ListSize];
	for (unsigned i = 0; i < ListSize; ++i)
	{
		int r = rand() % (Max-Min) + Min;
		v[i] = r;
	}
}

Sort::Sort(std::initializer_list <int> List)
{
	ListSize = List.size();
	v = new int[List.size()];
	int k = 0;
	for (auto i = List.begin(); i != List.end(); ++i)
		v[k++] = *i;
}

Sort::Sort(int VectorSize, int vect[])
{
	this->ListSize = VectorSize;
	this->v = new int[ListSize];
	for (unsigned i = 0; i < VectorSize; ++i)
		this->v[i] = vect[i];
}

Sort::Sort(int Count, ...)
{
	//Count-ul este echivalent cu size-ul vectorului
	this->ListSize = Count;
	v = new int[ListSize];
	va_list List;
	va_start(List, Count);
	for (unsigned i = 0; i < ListSize; ++i)
	{
		int nr = va_arg(List, int);
		this->v[i] = nr;
	}
	va_end(List);
}

Sort::Sort(const char* String)
{
	//size-ul este nr de virgule +1
	ListSize = 1;

	for (unsigned i = 0; i < strlen(String); ++i)
		if (String[i] == ',')
			ListSize++;

	v = new int[ListSize];
	int Length = strlen(String) + 1;
	char* s = new char[Length];
	strcpy(s, String);
	char* p;

	int count = 0;
	p = strtok(s, ",");
	while (p)
	{
		int Convert = atoi(p);
		v[count++] = Convert;
		p = strtok(NULL, ",");
	}
}


void Sort::PrintList()
{
	for (unsigned i = 0; i < ListSize; ++i)
		std::cout << this->v[i] << " ";
	std::cout << '\n';
}

void Sort::InsertSort(bool ascendent)
{
	int i, key, j;
	for (i = 1; i < ListSize; i++)
	{
		key = v[i];
		j = i - 1;
		while (j >= 0 && v[j] > key)
		{
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = key;
	}
	ascendent = true;
}

void Sort::BubbleSort(bool ascendent)
{
	for (unsigned i = 0; i < ListSize - 1; ++i)
		for (unsigned j = i + 1; j < ListSize; j++)
			if (v[i] > v[j])
				std::swap(v[i], v[j]);
	ascendent = true;
}

int Sort::GetElementsCount()
{
	int fr[100];
	for (unsigned i = 0; i < ListSize; i++)
		fr[v[i]]++;
	for (unsigned i = 0; i < ListSize; i++)
		if (fr[i] != 0)
			std::cout << i << ": " << fr[i] << '\n';
	return 0;
	//nu stiu exact ce ar trebui sa returneze..
}

int Sort::GetElementFromIndex(int index)
{
	for (unsigned i = 0; i < ListSize; ++i)
		if (i == index)
			return v[i];
}
