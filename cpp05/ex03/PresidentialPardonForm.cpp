//
// Created by Meldred Emilio on 11/22/20.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	Form("Presidential Pardon", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) :
	Form(other), _target(other._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	(void)other;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << this->_target << " has beenpardoned by Zafod Beeblebrox" << std::endl;
}
