#include "myVector.h"

myVector::myVector()
{
	size = 0;
	num = new int[1];
}

myVector::~myVector()
{
	delete[] num;
}

bool myVector::Add(int)
{
	//...
}

bool myVector::Delete(int index)
{
	//...
}

void myVector::iterate(void(*changeElem)(int& elem))
{
	for (int i = 0; i < size; i++)
		(changeElem(num[i]));
}

void myVector::filter(bool(*removeMatch)(int& elem))
{
	for (int i = 0; i < size; i++)
	{
		if(removeMatch(num[i]))
			//delete what?
	}
}
