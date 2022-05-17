#pragma once
struct myVector
{
	int* num;
	int size;

	myVector();
	~myVector();
	bool Add(int); //return true if the value was added; as a result, size increases with 1
	bool Delete(int index); //return true if the value from index was removed; size--
	void iterate(void (*changeElem)(int& elem));  //iterates through all elements and changes each elem based on a lambda func received as an argument
	void filter(bool (*removeMatch)(int& elem));  //removes all elem that are matched by a lambda func received as an argument
};