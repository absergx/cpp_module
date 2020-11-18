//
// Created by Meldred Emilio on 11/17/20.
//

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {std::cout << "* click click click *" << std::endl;}

RadScorpion::RadScorpion(const RadScorpion &newRadScorpion) : Enemy(newRadScorpion) {std::cout << "* click click click *" << std::endl;}

RadScorpion::~RadScorpion() {std::cout << "* SPROTCH *" << std::endl;}

RadScorpion&        RadScorpion::operator=(const RadScorpion &newRadScorpion) {
	this->_hp = newRadScorpion._hp;
	this->_type = newRadScorpion._type;
	return *this;
}
