#include <vector>
#include <iostream>

void print_if(std::vector<int> numere, bool (*predicate)(int))
{
	for (int i : numere)
	{
		if (predicate(i))
			std::cout << i << '\n';
	}
}

int main()
{
	std::vector<int> nr{ 1, 2, 3, 4 };
	print_if(nr, [](auto x) {return x % 2 == 0; }); //displays evens
	std::cout << "----------------" << '\n';
	print_if(nr, [](auto x) {return x % 2 != 0; }); //displays odds

	return 0;
}