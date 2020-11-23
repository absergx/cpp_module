//
// Created by Meldred Emilio on 11/20/20.
//

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	std::srand(time(nullptr));
	Bureaucrat bob("Bob", 100);
	Bureaucrat boss("Boss", 1);
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
	Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;

	Form *shrub = new ShrubberyCreationForm("home");
	std::cout << *shrub << std::endl;
	shrub->beSigned(supervisor);
	std::cout << *shrub << std::endl;
	try {
		shrub->execute(supervisor);
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	delete shrub;
	Form *robot = new RobotomyRequestForm("Marvin");
	std::cout << *robot << std::endl;
	robot->beSigned(supervisor);
	robot->execute(supervisor);
	supervisor.executeForm(*robot);
	supervisor.executeForm(*robot);
	delete robot;
	Form *president = new PresidentialPardonForm("Ford Perfect");
	std::cout << *president << std::endl;
	president->beSigned(supervisor);
	president->execute(supervisor);
	supervisor.executeForm(*president);
	delete president;
	Intern intern;
	try {
		Form *random = intern.makeForm("Shrubbery Creation", "Highway");
		std::cout << *random << std::endl;
		delete random;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Form *form = intern.makeForm("Random form", "Skynet");
		std::cout << *form << std::endl;
		delete form;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
