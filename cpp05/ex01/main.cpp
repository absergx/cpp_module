//
// Created by Meldred Emilio on 11/20/20.
//

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat bob("Bob", 100);
	std::cout << bob << std::endl;
	bob.incrementGrade();
	std::cout << bob << std::endl;
	bob.decrementGrade();
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
	try {
		Form b51("b51", 0, 100);
		std::cout << b51 << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Form b51("b51", 120, 120);
		std::cout << b51 << std::endl;
		bob.signForm(b51);
		std::cout << b51 << std::endl;
		bob.signForm(b51);
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Form b51("b51", 80, 120);
		std::cout << b51 << std::endl;
		bob.signForm(b51);
		std::cout << b51 << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
