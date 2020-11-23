//
// Created by Meldred Emilio on 11/23/20.
//

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other) {*this = other;}

Intern::~Intern() {}

Intern & Intern::operator=(const Intern &other) {
	(void)other;
	return *this;
}

const char * Intern::FormIsUnknownException::what() const throw() {return "Intern: Form is unknown";}

Form * makeShrubberyForm(std::string const &target) {return new ShrubberyCreationForm(target);}

Form * makeRobotomyForm(const std::string &target) {return new RobotomyRequestForm(target);}

Form * makePresidentalForm(const std::string &target) {return new PresidentialPardonForm(target);}

Form * Intern::makeForm(const std::string &formName, const std::string &target) {
	Form*	(*_formFuncs[3])(std::string const &) = {
			&makeShrubberyForm,
			&makeRobotomyForm,
			&makePresidentalForm
	};
	std::string 	_forms[3] = {
			"Shrubbery Creation",
			"Robotomy Request",
			"Presidential Pardon"
	};
	for (int i = 0; i < 3; i++)
		if (formName == _forms[i]) {
			std::cout << "Intern creates " << _forms[i] << " Form" << std::endl;
			return (*_formFuncs[i])(target);
		}
	std::cout << "Form " << formName << " is unknown" << std::endl;
	throw FormIsUnknownException();
	return nullptr;
}
