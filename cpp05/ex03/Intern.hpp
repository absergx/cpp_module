//
// Created by Meldred Emilio on 11/23/20.
//

#ifndef CPP05_INTERN_HPP
#define CPP05_INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern &other);
	~Intern();
	Intern&		operator=(const Intern &other);
//	Form*		makeShrubberyForm(std::string const &target);
//	Form*		makeRobotomyForm(std::string const &target);
//	Form*		makePresidentalForm(std::string const &target);
	class FormIsUnknownException: public std::exception {
		virtual const char* what() const throw();
	};
	Form		*makeForm(std::string const &formName, std::string const &target);
};

#endif //CPP05_INTERN_HPP
