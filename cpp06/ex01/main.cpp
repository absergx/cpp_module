//
// Created by Meldred Emilio on 11/24/20.
//

#include <string>
#include <iostream>

//struct Data {
//	std::string	s1;
//	int			n;
//	std::string	s2;
//};

char randomChar() {
	std::srand(time(0));
	const std::string setOfChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	return setOfChars[rand() % 62];
}

void * serialize(void);

int main() {
	std::cout << randomChar() << std::endl;
	return 0;
}
