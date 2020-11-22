//
// Created by Meldred Emilio on 11/22/20.
//

#ifndef CPP05_SHRUBBERYCREATIONFORM_HPP
#define CPP05_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
private:
	std::string const			_target;
	std::string					_trees[2];
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm&      operator=(ShrubberyCreationForm const &other);
	class FileOpenFailException: public std::exception {
		virtual const char* what() const throw();
	};
	class WriteFailException: public std::exception {
		virtual const char* what() const throw();
	};
	void                execute(Bureaucrat const &executor) const;
};

#endif //CPP05_SHRUBBERYCREATIONFORM_HPP
