#include <unordered_set>
#include <iostream>

int main()
{

	std::unordered_set<int> myUnSet= {3,4,5,6,7,8,32,1,4,3,4,4};
	
	std::cout << myUnSet.bucket(10) << std::endl;
	std::cout << myUnSet.bucket_size(4) << std::endl;
	std::cout << myUnSet.bucket_count() << std::endl;
	return 0;
}
