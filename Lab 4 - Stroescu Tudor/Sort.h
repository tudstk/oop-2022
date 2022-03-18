#pragma once
#include <iostream>
#include <initializer_list>

class Sort
{
    // add data members
    int* v;
    int ListSize;
public:
    // add constuctors
    Sort(int ListSize, int Min, int Max);
    Sort(std::initializer_list <int> List);
    Sort(int VectorSize, int vect[]);
    Sort(int Count, ...);
    Sort(const char* String);
    void PrintList();
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};
