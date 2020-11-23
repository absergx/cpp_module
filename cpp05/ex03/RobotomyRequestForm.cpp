//
// Created by Meldred Emilio on 11/22/20.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	Form("Robotomy Request", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other), _target(other._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	(void)other;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << "* VRRRR FRRRR ZRRRR TIIUU OZZZZ *" << std:: endl
				 << ((std::rand() % 2 == 1) ? "Has been robotomised successfully" : "Robotomizing has been failed")
				 << std::endl;
}
