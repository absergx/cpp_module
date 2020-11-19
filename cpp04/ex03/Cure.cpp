//
// Created by Meldred Emilio on 11/19/20.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &newCure) : AMateria(newCure) {}

Cure::~Cure() {}

Cure&       Cure::operator=(const Cure &newCure) {
	this->_type = newCure._type;
	this->_xp = newCure._xp;
	return *this;
}

AMateria*   Cure::clone() const {
	Cure* newCure = new Cure(*this);
	return newCure;
}

void        Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
