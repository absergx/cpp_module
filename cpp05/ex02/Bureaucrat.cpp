//
// Created by Meldred Emilio on 11/20/20.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string & name, int grade) : _name(name), _grade(grade) {
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat &other) {
	this->_grade = other._grade;
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat: Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat: Grade too low";
}

std::string const &		Bureaucrat::getName() const {return this->_name;}

int						Bureaucrat::getGrade() const {return this->_grade;}

void					Bureaucrat::incrementGrade() {
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void					Bureaucrat::decrementGrade() {
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void                    Bureaucrat::signForm(Form &form) const {
	if (form.isSigned())
		std::cout << *this << " cannot sign " << form
			<< " because form is already signed" << std::endl;
	else if (form.getGradeToSign() < this->_grade)
		std::cout << *this << " cannot sign " << form
			<< " because grade is too low" << std::endl;
	else
		std::cout << *this << " signs " << form << std::endl;
	form.beSigned(*this);
}

void                    Bureaucrat::executeForm(const Form &form) {
	try {
		form.execute(*this);
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const & bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}
