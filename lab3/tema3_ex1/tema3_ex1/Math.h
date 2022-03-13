#pragma once
class Math
{
public:
	static int Add(int a, int b);
	static int Add(int a, int b, int c);
	static int Add(double x, double y);
	static int Add(double x, double y, double z);
	static int Mul(int a, int b);
	static int Mul(int a, int b, int c);
	static int Mul(double x, double y);
	static int Mul(double x, double y, double z);
	static int Add(int count, ...); // sums up a list of integers
	static char* Add(const char* a, const char* b);
}