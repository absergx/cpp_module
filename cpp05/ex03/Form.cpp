//
// Created by Meldred Emilio on 11/21/20.
//

#include "Form.hpp"

Form::Form(const std::string &name, const int gradeToSign, const int gradeToExecute) :
	_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	_signed = false;
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other) : _name(other._name), _gradeToSign(other._gradeToSign),
	_gradeToExecute(other._gradeToExecute) {
	this->_signed = other._signed;
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form&               Form::operator=(const Form &other) {
	this->_signed = other._signed;
	return *this;
}

const char*         Form::GradeTooHighException::what() const throw() {
	return "Form: Grade too high";
}

const char*         Form::GradeTooLowException::what() const throw() {
	return "Form: Grade too low";
}

const char*         Form::FormIsAlreadySignedException::what() const throw() {
	return "Form: Form is already signed";
}

const char*         Form::FormIsNotSignedException::what() const throw() {
	return "Form: Unsigned form cannot be executed";
}

bool                Form::isSigned() const {return this->_signed;}

std::string const & Form::getName() const {return this->_name;}

int                 Form::getGradeToSign() const {return this->_gradeToSign;}

int                 Form::getGradeToExecute() const {return this->_gradeToExecute;}

void                Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else if (this->_signed)
		throw Form::FormIsAlreadySignedException();
	this->_signed = true;
}

void                Form::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->_gradeToExecute)
		throw Form::GradeTooLowException();
	if (!this->_signed)
		throw Form::FormIsNotSignedException();
}

std::ostream        &operator<<(std::ostream &os, Form const &form) {
	os << "Form " << form.getName() << (form.isSigned() ? " is signed" : " is unsigned") << ". Grade to sign: "
		<< form.getGradeToSign() << ". Grade to execute: " << form.getGradeToExecute();
	return os;
}
