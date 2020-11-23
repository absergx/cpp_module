//
// Created by Meldred Emilio on 11/22/20.
//

#ifndef CPP05_ROBOTOMYREQUESTFORM_HPP
#define CPP05_ROBOTOMYREQUESTFORM_HPP
class RobotomyRequestForm;
#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
	std::string const 			_target;
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm&		operator=(const RobotomyRequestForm &other);
	void						execute(Bureaucrat const &executor) const;
};

#endif //CPP05_ROBOTOMYREQUESTFORM_HPP
