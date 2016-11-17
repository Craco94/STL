#include <vector>
#include <iostream>


int main()
{
	std::vector<int> myVector;
	std::cout << "Size: " << myVector.size() << std::endl;
	std::cout << "Capacity: " << myVector.capacity() << std::endl;
	myVector.resize(10, 5);
	std::cout << "Size resize: " << myVector.size() << std::endl;
	std::cout << "Capacity resize: " << myVector.capacity() << std::endl;
	myVector.reserve(20);
	std::cout << "Size reserve: " << myVector.size() << std::endl;
	std::cout << "Capacity reserve: " << myVector.capacity() << std::endl;
	myVector.shrink_to_fit();
	std::cout << "Size shrink: " << myVector.size() << std::endl;
	std::cout << "Capacity shrink: " << myVector.capacity() << std::endl;

}

