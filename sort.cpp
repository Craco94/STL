#include <deque>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(std::time(0));
	std::deque<int> myDeque;

	std::generate_n(std::back_inserter<std::deque<int>>(myDeque), 14, [](){return std::modulus<int>()(std::rand(), 7);});
	std::sort(std::begin(myDeque), std::end(myDeque));
	for (auto value : myDeque)
	{
		std::cout << value << ", ";
	}
	myDeque.erase(std::unique(std::begin(myDeque), std::end(myDeque)), std::end(myDeque));
	std::cout << std::endl;
	for (auto value : myDeque)
	{
		std::cout << value << ", ";
	}
	
	auto itNewFirst = std::begin(myDeque) + 3;
	std::rotate(std::begin(myDeque), itNewFirst, std::end(myDeque));	
	std::cout << std::endl;
	for (auto value : myDeque)
	{
		std::cout << value << ", ";
	}
	std::cout << std::endl;
	return 0;
}

