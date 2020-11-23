//
// Created by Meldred Emilio on 11/22/20.
//

#ifndef CPP05_PRESIDENTIALPARDONFORM_HPP
#define CPP05_PRESIDENTIALPARDONFORM_HPP

class PresidentialPardonForm;
#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	std::string const 			_target;
public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm&		operator=(const PresidentialPardonForm &other);
	void						execute(Bureaucrat const &executor) const;
};

#endif //CPP05_PRESIDENTIALPARDONFORM_HPP
