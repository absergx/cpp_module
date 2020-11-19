//
// Created by Meldred Emilio on 11/19/20.
//

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _type(type), _xp(0) {}

AMateria::AMateria(const AMateria &newAMateria) : _type(newAMateria._type), _xp(newAMateria._xp) {}

AMateria::~AMateria() {}

AMateria&       AMateria::operator=(const AMateria &other) {
	this->_type = other._type;
	this->_xp = other._xp;
	return *this;
}

std::string const&  AMateria::getType() const {return this->_type;}

unsigned int        AMateria::getXP() const {return this->_xp;}


void                AMateria::use(ICharacter& target) {
	(void)target;
	this->_xp += 10;
}


