//
// Created by Meldred Emilio on 11/17/20.
//

#include "Character.hpp"

Character::Character() : _name(std::string()), _ap(40), _aWeapon(nullptr) {}

Character::Character(const std::string &name) : _name(name), _ap(40), _aWeapon(0) {}

Character::Character(const Character &newCharacter) : _name(newCharacter._name), _ap(newCharacter._ap), _aWeapon(newCharacter._aWeapon) {}

Character::~Character() {}

Character&      Character::operator=(const Character &newCharacter) {
	this->_name = newCharacter._name;
	this->_ap = newCharacter._ap;
	this->_aWeapon = newCharacter._aWeapon;
	return *this;
}

void            Character::recoverAP() {this->_ap = ((this->_ap + 10) > 40) ? 40 : this->_ap + 10;}

void            Character::equip(AWeapon *aWeapon) {this->_aWeapon = aWeapon;}

void            Character::attack(Enemy *enemy) {
	if (!this->_aWeapon || !enemy)
		return ;
	if (this->_aWeapon->getAPCost() > this->_ap)
		return ;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_aWeapon->getName()
	          << std::endl;
	this->_aWeapon->attack();
	this->_ap -= this->_aWeapon->getAPCost();
	enemy->takeDamage(this->_aWeapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string const&  Character::getName() const {return this->_name;}

int                 Character::getAp() const {return this->_ap;}

AWeapon*            Character::getAWeapon() const {return this->_aWeapon;}

std::ostream    &operator<<(std::ostream &os, Character const &character) {
	if (character.getAWeapon())
		os << character.getName() << " has " << character.getAp() << " AP and wields a "
			<< character.getAWeapon()->getName() << std::endl;
	else
		os << character.getName() << " has " << character.getAp() << " AP and is unarmed"
			<< std::endl;
	return os;
}
