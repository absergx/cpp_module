//
// Created by Meldred Emilio on 11/17/20.
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {std::cout << "Gaaah. Me want smash heads!" << std::endl;}

SuperMutant::SuperMutant(const SuperMutant &newSuperMutant) : Enemy(newSuperMutant) {std::cout << "Gaaah. Me want smash heads!" << std::endl;}

SuperMutant::~SuperMutant() {std::cout << "Aaargh..." << std::endl;}

SuperMutant&        SuperMutant::operator=(const SuperMutant &newSuperMutant) {
	this->_hp = newSuperMutant._hp;
	this->_type = newSuperMutant._type;
	return *this;
}

void                SuperMutant::takeDamage(int amount) {
	Enemy::takeDamage(amount - 3);
}
