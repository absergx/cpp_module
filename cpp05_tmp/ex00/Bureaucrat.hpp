#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>

class Bureaucrat {
private:
	std::string const		_name;
	int						_grade;
public:
	Bureaucrat(const std::string & name, int grade);
	Bureaucrat(const Bureaucrat &);
	~Bureaucrat();
	Bureaucrat&		operator=(const Bureaucrat &);
	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
	std::string const &		getName() const;
	int						getGrade() const;
	void					incGrade();
	void					decGrade();
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat const & bureaucrat);

#endif