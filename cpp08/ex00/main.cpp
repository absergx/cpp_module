#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
	std::vector<int>	vectorInt;
	vectorInt.reserve(10);
	for (int i = 0; i < 10; i++)
		vectorInt.push_back(i);
	std::cout << "Testing vector of ints with easyfind" << std::endl;
	std::cout << *easyfind(vectorInt, 7) << std::endl;
	std::cout << *easyfind(vectorInt, 9) << std::endl;
	std::list<int>		listInt;
	for (int i = 0; i < 10; i++)
		listInt.push_back(10 - i);
	std::cout << "Testing list of ints with easyfind" << std::endl;
	std::cout << *easyfind(listInt, 3) << std::endl;
	std::cout << *easyfind(listInt, 9) << std::endl;
	return 0;
}
