#include <set>
#include <iostream>

int main()
{
	std::set<int> mySet = {1, 2, 3, 4, 5, 6 ,7 ,8 ,9};
	std::cout << std::distance(mySet.begin(), mySet.lower_bound(5)) << std::endl;
	std::cout << std::distance(mySet.begin(), mySet.upper_bound(5)) << std::endl;
	std::cout << std::distance(mySet.equal_range(5).first, mySet.equal_range(5).second) << std::endl;	
	return 0;
}
