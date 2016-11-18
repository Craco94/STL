#include <algorithm>
#include <iostream>
#include <functional>
	

int main()
{
	std::function<int(int)> myFunc = std::bind (std::multiplies<int>(), std::placeholders::_1, 5);
	std::cout << myFunc(11) <<std::endl;

	std::function<int(int)> myFuncLamb = [](int a){return (a*5);};
	std::cout << myFuncLamb(11) <<std::endl;
	return 0;
}
