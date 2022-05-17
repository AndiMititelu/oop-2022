/*
------------- Function pointers ----------------

	void helloWorld(int a)
	{ .... }

	typedef void(*HelloWorldFunc)(int);
	HelloWorldFunc function = helloWorld;

	function(8);
	function(10);

------------- Lambda expressions ----------------
	[captures] (parameters) -> return type { body }
	[captures] (parameters) { body } //return is deduced
	[captures] { body }

*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
//Ex cu lambda

int main()
{
	//ex1) Sort a vector of strings dupa size si lexicografic
	std::vector<std::string> myVector {"Salut ma numesc Mr Hello", "Lambda functions are killing me!", "Andrei Damian cel mai smecher prof"};
	std::sort(myVector.begin(), myVector.end(), [&](const std::string &str1, const std::string &str2)
		{
			if (str1.length() > str2.length())
				return true;

		});


	std::cout << '\n';
	for (auto it : myVector)
		std::cout << it << '\n';

	//ex2) Biggest number from a list of integers
	auto max_vector = [](list<int> l) {
		int max = *(l.begin());
		for (auto x : l)
		{
			if (x > max)
				max = x;
		}
		return max;
	};


	
}