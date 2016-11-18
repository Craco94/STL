#include <iostream>
#include <algorithm>
#include <utility>
	
bool is_palindrome(const std::string& abc)
{
	auto pair = std::mismatch(std::begin(abc), std::end(abc), std::rbegin(abc), std::rend(abc));
	if (pair.first == std::end(abc) && pair.second == std::rend(abc))
		{
		return 1;
		} else return 0;
}

int main()
{
	std::string myString = "";
	std::cout << is_palindrome(myString)<< std::endl;
		
	return 0;
}
