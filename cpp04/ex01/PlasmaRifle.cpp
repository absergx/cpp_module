//
// Created by Meldred Emilio on 11/17/20.
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &newPlasmaRifle) : AWeapon(newPlasmaRifle) {}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle&    PlasmaRifle::operator=(const PlasmaRifle &newPlasmaRifle) {
	this->_name = newPlasmaRifle._name;
	this->_apCost = newPlasmaRifle._apCost;
	this->_damage = newPlasmaRifle._damage;
	return *this;
}

void            PlasmaRifle::attack() const {std::cout << "* piouuu piouuu piouuu *" << std::endl;}
