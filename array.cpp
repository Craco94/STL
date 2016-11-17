#include <array>
#include <iostream>

int main()
{

	std::array<int, 10> myArray;
	myArray.fill(5);
	myArray.at(3) = 3;
	
	std::array<int, 10> myBrray;
	myBrray.fill(9);
	myArray.swap(myBrray);
	
std::cout << "Array: ";

	for (auto begin = myArray.begin(); begin<myArray.end(); ++begin)
	{
		std::cout << (*begin) << " ";
	}
std::cout << std::endl;	
std::cout << "Brray: ";

	for (unsigned i = 0; i<myBrray.size(); ++i)
	{
		std::cout << myBrray[i] << " ";
	}
std::cout << std::endl;	
	/*for (auto value : myArray)
	{
		std::cout << value << " ";
	}*/

//std::for_each mozna wypisac tablice 
	
	return 0;
}
