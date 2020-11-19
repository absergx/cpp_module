//
// Created by Meldred Emilio on 11/19/20.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &newIce) : AMateria(newIce) {}

Ice::~Ice() {}

Ice&       Ice::operator=(const Ice &newIce) {
	this->_type = newIce._type;
	this->_xp = newIce._xp;
	return *this;
}

AMateria*   Ice::clone() const {
	Ice* newIce = new Ice(*this);
	return newIce;
}

void        Ice::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
