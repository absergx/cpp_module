//
// Created by Meldred Emilio on 11/17/20.
//

#include "AWeapon.hpp"

AWeapon::AWeapon() : _name(std::string()), _apCost(0), _damage(0) {}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : _name(name), _apCost(apcost), _damage(damage) {}

AWeapon::AWeapon(const AWeapon &newAWeapon) : _name(newAWeapon._name), _apCost(newAWeapon._apCost), _damage(newAWeapon._damage) {}

AWeapon::~AWeapon() {}

AWeapon&            AWeapon::operator=(const AWeapon &newAWeapon) {
	this->_name = newAWeapon._name;
	this->_apCost = newAWeapon._apCost;
	this->_damage = newAWeapon._damage;
	return *this;
}

std::string const&  AWeapon::getName() const {return this->_name;}

int                 AWeapon::getAPCost() const {return this->_apCost;}

int                 AWeapon::getDamage() const {return this->_damage;}
