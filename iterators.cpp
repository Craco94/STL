#include <forward_list>
#include <iostream>
#include <iterator>

int main()
{
	std::forward_list<int> myForwList = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto begin = std::begin(myForwList);
	auto end = std::end(myForwList);
	
	auto dist = std::distance (begin, end);
	std::cout << dist << std::endl;
	auto fifth = begin;
	std::advance(fifth, 4);
	dist = std::distance (begin, fifth);
	std::cout << dist << std::endl;;	
	return 0;
}
