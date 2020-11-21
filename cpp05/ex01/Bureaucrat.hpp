//
// Created by Meldred Emilio on 11/20/20.
//

#ifndef CPP05_BUREAUCRAT_HPP
#define CPP05_BUREAUCRAT_HPP

#include <iostream>
#include <string>
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat {
private:
	std::string const   _name;
	int                 _grade;
public:
	Bureaucrat(std::string const& name, int grade);
	Bureaucrat(const Bureaucrat &);
	virtual ~Bureaucrat();
	Bureaucrat&         operator=(const Bureaucrat &);
	std::string const & getName() const;
	int                 getGrade() const;
	void                incrementGrade();
	void                decrementGrade();
	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
	void                signForm(Form &form) const;
};

std::ostream    &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif //CPP05_BUREAUCRAT_HPP
