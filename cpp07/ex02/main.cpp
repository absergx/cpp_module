//
// Created by Meldred Emilio on 11/27/20.
//

#include "Array.hpp"

int main() {
	Array<int> intArrDefault;
	Array<int> intArrBySize(7);
	Array<std::string> stringArrDefault(4);

	std::cout << "Print int array constructed with size" << std::endl;
	for (unsigned int i = 0; i < intArrBySize.size(); i++) {
		intArrBySize[i] = i;
		std::cout << intArrBySize[i] << " ";
	}
	std::cout << std::endl;
	try {
		std::cout << intArrBySize[9] << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Print int array constructed by default and assigned from previous array" << std::endl;
	intArrDefault = intArrBySize;
	for (unsigned int i = 0; i < intArrDefault.size(); i++) {
		intArrDefault[i] = i;
		std::cout << intArrDefault[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << "Print string array constructed with size" << std::endl;
	for (unsigned int i = 0; i < stringArrDefault.size(); i++) {
		stringArrDefault[i] = "string num " + std::to_string(i);
		std::cout << "\"" << stringArrDefault[i] << "\" ";
	}
	std::cout << std::endl;
	try {
		std::cout << stringArrDefault[4] << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------" << std::endl;
	return 0;
}