#include "allocator.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

void* Allocator::alloc_raw(unsigned size)
{
	char* s = buffer + offset;
	offset += size;
	return s;
}

Allocator::Allocator(unsigned max_size)
{
	buffer = (char*)malloc(max_size);
	offset = 0;
	this->max_size = max_size;
}

Allocator::~Allocator()
{
	free(buffer); //free e pointer la void si se converteste automat buffer-ul
}

unsigned* Allocator::alloc(unsigned x)
{
	unsigned* p = (unsigned*)alloc_raw(sizeof(x));
	*p = x;
	return p;
}

int* Allocator::alloc(int x)
{
	int* p = (int*)alloc_raw(sizeof(x));
	*p = x;
	return p;
}

float* Allocator::alloc(float x)
{
	float* p = (float*)alloc_raw(sizeof(x));
	*p = x;
	return p;
}

double* Allocator::alloc(double x)
{
	double* p = (double*)alloc_raw(sizeof(x));
	*p = x;
	return p;
}

char* Allocator::alloc(char x)
{
	char* p = (char*)alloc_raw(sizeof(x));
	*p = x;
	return p;
}

char* Allocator::alloc(const char* string)
{
	int l = strlen(string) + 1;
	char* p = (char*)alloc_raw(sizeof(l));
	//strcpy(p, string);
	memcpy(p, string, l); //strcpy stops when it encounters a NULL ('\0') character, memcpy does not!
	return p;
}
