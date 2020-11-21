//
// Created by Meldred Emilio on 11/21/20.
//

#ifndef CPP05_FORM_HPP
#define CPP05_FORM_HPP

#include <string>
#include <iostream>
class Form;
#include "Bureaucrat.hpp"

class Form {
private:
	std::string const & _name;
	bool                _signed;
	int const           _gradeToSign;
	int const           _gradeToExecute;
public:
	Form(std::string const & name, int const gradeToSign, int const gradeToExecute);
	Form(const Form &);
	virtual ~Form();
	Form&               operator=(const Form &);
	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
	class FormIsAlreadySignedException: public std::exception {
		virtual const char* what() const throw();
	};
	bool                isSigned() const;
	std::string const & getName() const;
	int                 getGradeToSign() const;
	int                 getGradeToExecute() const;
	void                beSigned(Bureaucrat const &bureaucrat);
};

std::ostream        &operator<<(std::ostream &os, Form const &form);

#endif //CPP05_FORM_HPP
