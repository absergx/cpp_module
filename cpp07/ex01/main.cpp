//
// Created by Meldred Emilio on 11/26/20.
//

#include <string>
#include "iter.hpp"

template <typename T>
void 	printing(T data) {
	std::cout << data << " ";
}

int main() {
	{
		std::cout << "Testing int" << std::endl;
		int num[7] = {99, 0, 1, 9, 5, 7, 16};
		std::cout << "Wrap iter with print func" << std::endl;
		iter(num, 7, &printing);
		std::cout << std::endl;
		std::cout << "------------" << std::endl;
	}
	{
		std::cout << "Testing string" << std::endl;
		std::string arr[6] = {
				"Hello",
				"World",
				"I'm",
				"Tired",
				"And",
				"Lazy"
		};
		std::cout << "Wrap iter with print func" << std::endl;
		iter(arr, 6, &printing);
		std::cout << std::endl;
		std::cout << "------------" << std::endl;
	}
}
