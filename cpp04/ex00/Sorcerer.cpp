//
// Created by Meldred Emilio on 11/17/20.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &newSorcerer) {
	*this = newSorcerer;
	std::cout << this->_name << ", " << this->_title
		<< ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title
		<< ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&       Sorcerer::operator=(const Sorcerer &newSorcerer) {
	if (this != &newSorcerer) {
		this->_name = newSorcerer._name;
		this->_title = newSorcerer._title;
	}
	return *this;
}

std::string     Sorcerer::getName() const {return this->_name;}

std::string     Sorcerer::getTitle() const {return this->_title;}

std::ostream	&operator<<(std::ostream &os, const Sorcerer &sorcerer) {
	os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle()
	     << ", and I like ponies!" << std::endl;
	return (os);
}

void            Sorcerer::polymorph(Victim const &victim) {
	victim.getPolymorphed();
}
