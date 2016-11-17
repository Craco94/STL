#include <vector>
#include <iostream>

void printer(auto abc, const char* blabla)
{
	std::cout << blabla;
	for (auto value : abc)
	{
		std::cout << value << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<int> myVector= {1, 2, 4, 5, 6};
	printer(myVector, "myVector ");	
	
	myVector.erase(myVector.begin());	
	printer(myVector, "After erase: ");	

	myVector.push_back(5);
	myVector.emplace(myVector.begin(), 12);

	std::cout << "Size: " << myVector.size() << std::endl;
	std::cout << "Max size: " << myVector.max_size() << std::endl;
	printer(myVector, "myVector: ");	
	
	myVector.clear();	
	printer(myVector, "After clear size: ");	
}
