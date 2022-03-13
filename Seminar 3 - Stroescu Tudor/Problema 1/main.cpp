#pragma once
#include "Math.h"
#include <iostream>
 
int main()
{
	Math mate;
	std::cout << mate.Add(5, 6) << '\n';
	std::cout << mate.Add(5, 6, 3) << '\n';
	std::cout << mate.Add(5.2, 6.69) << '\n';
	std::cout << mate.Add(5.2, 6.69, 3.42) << '\n';
	std::cout << mate.Mul(5, 6) << '\n';
	std::cout << mate.Mul(5, 6, 3) << '\n';
	std::cout << mate.Mul(4.2, 6.9) << '\n';
	std::cout << mate.Mul(4.2, 6.9, 3.11) << '\n';
	std::cout << mate.Add(5, 6, 3, 6, 1, 2) << '\n';
	std::cout << mate.Add("Ana are mere,", " iar merele sunt verzi!");
}