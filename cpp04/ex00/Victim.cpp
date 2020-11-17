//
// Created by Meldred Emilio on 11/17/20.
//

#include "Victim.hpp"

Victim::Victim(const std::string &name) : _name(name) {
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &newVictim) {
	*this = newVictim;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim&     Victim::operator=(const Victim &newVictim) {
	if (this != &newVictim)
		this->_name = newVictim._name;
	return *this;
}

std::string     Victim::getName() const {return this->_name;}

std::ostream	&operator<<(std::ostream &os, const Victim &victim) {
	os << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return os;
}

void            Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}
