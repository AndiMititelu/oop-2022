#include "myVector.h"
#include <iostream>

int main()
{
	myVector arr;
	arr.Add(1);
	arr.Add(3);
	arr.Add(5);
	arr.Add(2);
	arr.Add(9);
	arr.Delete(4);

	
	for (int i = 0; i < arr.size; i++) 
		std::cout << arr.num[i] << ' ';
	
	return 0;
}