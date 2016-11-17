#include <list>
#include <iostream>
#include <vector>

int main()
{
	std::list<int> myList;
	for (unsigned i = 0; i < 1000000; ++i)
	{
		myList.push_back(i);
	}
/*
real	0m0.162s
user	0m0.156s
sys	0m0.004s*/

	auto pos = myList.begin();
	for (int i = 0; i < 500000; ++i, ++pos)
	{		
	}
	
	std::cout << *pos << std::endl;
/*
real	0m0.169s
user	0m0.160s
sys	0m0.004s*/
	std::vector<int> myVector;
	for (unsigned i = 0; i < 1000000; ++i)
	{
		myVector.push_back(i);
	}
/*real	0m0.037s
user	0m0.036s
sys	0m0.000s*/

	std::cout << myVector[499999] << std::endl;	
/*real	0m0.037s
user	0m0.032s
sys	0m0.004s*/

	return 0;
}
