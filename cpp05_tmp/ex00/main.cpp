#include "Bureaucrat.hpp"

int main() {
	Bureaucrat bob("Bob", 100);
	std::cout << bob << std::endl;
	bob.incGrade();
	std::cout << bob << std::endl;
	bob.decGrade();
	std::cout << bob << std::endl;
	try {
		Bureaucrat ted("Ted", 150);
		std::cout << ted << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat ted("Ted", 1);
		std::cout << ted << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat ted("Ted", -1);
		std::cout << ted << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat ted("Ted", 500);
		std::cout << ted << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
