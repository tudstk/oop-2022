#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Sort.h"
#include <initializer_list>

int main()
{
	Sort list1(10, 1, 90);
	list1.PrintList();

	Sort list2({ 39, 42, 54, 32, 532, 53, 124, 229 });
	list2.PrintList();

	int a[] = {2, 5, 62 ,6 ,3};
	Sort list3(5, a);
	list3.PrintList();

	Sort list4(7, 49, 36, 26, 13, 5, 54, 69);
	list4.PrintList();

	Sort list5("10,40,100,5,70");
	list5.PrintList();
	return 0;
}