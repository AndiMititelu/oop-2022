#include "Math.h"
#include <stdarg.h>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double x, double y)
{
	return x + y;
}

int Math::Add(double x, double y, double z)
{
	return x + y + z;
}

int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double x, double y)
{
	return x * y;
}

int Math::Mul(double x, double y, double z)
{
	return x * y * z;
}

int Math::Add(int count, ...)
{
	int sum = 0;
	va_list v;
	va_start(v, count);
	for (int i = 0; i < count; i++)
	{
		int val = va_arg(v, int);
		sum += val;
	}
	va_end(v);

	return sum;
}

char* Math::Add(const char* a, const char* b)
{
	char* c = new char[strlen(a) + strlen(b) + 1];
	if (!c)
		return nullptr;
	c[0] = 0;
	strcat(c, a);
	strcat(c, b);
	return c;
}