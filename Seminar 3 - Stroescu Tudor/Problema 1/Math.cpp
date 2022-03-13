#include "Math.h"
#include <stdarg.h>
#include <cstring>

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double a, double b)
{
	return (double)a + b;
}

int Math::Add(double a, double b, double c)
{
	return a + b + c;
}

int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double a, double b)
{
	return a * b;
}

int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}

int Math::Add(int count, ...)
{
	int rez = 0;
	va_list args;
	va_start(args, count);
	for (int i = 0; i < count; ++i)
		rez += va_arg(args, int);
	va_end(args);
	return rez;
}

char* Math::Add(const char* s1, const char* s2)
{
	if (s1 == nullptr || s2 == nullptr)
		return nullptr;
	else {
		int s1_length = strlen(s1);
		int s2_length = strlen(s2);
		char* concat = (char*) malloc(1 + s1_length + s2_length);
		memcpy(concat, s1, s1_length);
		memcpy(concat + s1_length, s2, s2_length + 1);
		return concat;
	}

}
