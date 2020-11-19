//
// Created by Meldred Emilio on 11/18/20.
//

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &newAssaultTerminator) : ISpaceMarine(newAssaultTerminator) {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator&      AssaultTerminator::operator=(const AssaultTerminator &other) {
	(void)other;
	return *this;
}

void                AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void                AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void                AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine*       AssaultTerminator::clone() const {
	AssaultTerminator *newAssaultTerminator = new AssaultTerminator(*this);
	return newAssaultTerminator;
}
