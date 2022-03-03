#include "NumberList.h"

int main()
{
	NumberList list;
	list.Init();
	list.Add(5);
	list.Add(7);
	list.Add(2);
	list.Sort();
	list.Print();
}