#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <cstdlib>
#include <ctime>
		

void printer (const std::vector<int>& vec, const char* abc)
{
	std::cout << abc << ": ";
	for (auto value : vec)
	{
		std::cout << value << ", ";
	}
	std::cout << std::endl;
}

int main()
{	
	std::srand(std::time(0));
	std::vector<int> myVector(10);
	
	std::generate(std::begin(myVector), std::end(myVector), [&](){return std::rand()%10;});
	std::sort(std::begin(myVector), std::end(myVector));
	printer(myVector, "MyVector");
	
	std::copy(std::begin(myVector), std::end(myVector), std::ostream_iterator<int>(std::cout, " "));	
	
	std::cout << std::endl;
	
	std::reverse(std::begin(myVector), std::end(myVector));
	
	printer(myVector, "Odwrocony");

	std::unique(std::begin(myVector), std::end(myVector));	
	myVector.erase(std::unique(std::begin(myVector), std::end(myVector)), std::end(myVector));
	printer(myVector, "Unique");
	return 0;
}
