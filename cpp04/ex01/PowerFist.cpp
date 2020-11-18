//
// Created by Meldred Emilio on 11/17/20.
//

#include "PowerFist.hpp"

PowerFist::PowerFist() :AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(const PowerFist &newPowerFist) : AWeapon(newPowerFist) {}

PowerFist::~PowerFist() {}

PowerFist&      PowerFist::operator=(const PowerFist &newPowerFist) {
	this->_name = newPowerFist._name;
	this->_apCost = newPowerFist._apCost;
	this->_damage = newPowerFist._damage;
	return *this;
}

void            PowerFist::attack() const {std::cout << "* pschhh... SBAM! *" << std::endl;}
