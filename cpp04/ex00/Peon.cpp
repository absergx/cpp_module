//
// Created by Meldred Emilio on 11/17/20.
//

#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &newPeon) : Victim(newPeon) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon&       Peon::operator=(const Peon &newPeon) {
	Victim::operator=(newPeon);
	return *this;
}

void        Peon::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
