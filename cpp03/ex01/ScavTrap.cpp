//
// Created by Meldred Emilio on 11/15/20.
//

#include "ScavTrap.hpp"

const std::string ScavTrap::_randomChallengeValues[5] = {
		"dancing battle",
		"singing terrible song",
		"speed race",
		"stand up",
		"roast battle"
};

ScavTrap::ScavTrap(const std::string &name) : _name(name) {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "Default constructor SC4V-TP for " << this->_name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &newScavTrap) {
	*this = newScavTrap;
	std::cout << "Copy constructor SC4V-TP for " << this->_name << " called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor SC4V-TP for " << this->_name << " called" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap &newScavTrap) {
	this->_name = newScavTrap._name;
	this->_hitPoints = newScavTrap._hitPoints;
	this->_maxHitPoints = newScavTrap._maxHitPoints;
	this->_energyPoints = newScavTrap._energyPoints;
	this->_maxEnergyPoints = newScavTrap._maxEnergyPoints;
	this->_level = newScavTrap._level;
	this->_meleeAttackDamage = newScavTrap._meleeAttackDamage;
	this->_rangedAttackDamage = newScavTrap._rangedAttackDamage;
	this->_armorDamageReduction = newScavTrap._armorDamageReduction;
	std::cout << "SC4V-TP assignation operator for " << this->_name << " called" << std::endl;
	return *this;
}

void        ScavTrap::rangedAttack(const std::string &target) {
	std::cout << "SC4V-TP " << this->_name << " attacks " << target
	          << " at range, causing " << this->_rangedAttackDamage
	          << " points of damage" << std::endl;
}

void        ScavTrap::meleeAttack(const std::string &target) {
	std::cout << "SC4V-TP " << this->_name << " attacks " << target
	          << " at melee, causing " << this->_rangedAttackDamage
	          << " points of damage" << std::endl;
}

void        ScavTrap::takeDamage(unsigned int amount) {
	amount -= this->_armorDamageReduction;
	if ((int)amount > 0) {
		std::cout << "SC4V-TP " << this->_name << " takes "
		          << amount << " damage!" << std::endl;
		this->_hitPoints -= (int) amount;
	} else
		std::cout << "SC4V-TP " << this->_name
		          << " avoid damage with armor" << std::endl;
	if (this->_hitPoints <= 0)
		this->_hitPoints = 1;
	std::cout << "Now his hit points is " << this->_hitPoints << std::endl;
}

void        ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "SC4V-TP " << this->_name << " is being repaired by "
	          << amount << std::endl;
	this->_hitPoints = ((int)amount + this->_hitPoints >= this->_maxHitPoints) ? this->_maxHitPoints : (this->_hitPoints + (int)amount);
	std::cout << "Now his hit points is " << this->_hitPoints << std::endl;
}

void        ScavTrap::challengeNewcomer() {
	if (this->_energyPoints < 25)
		std::cout << "SC4V-TP " << this->_name << " has not enough energy to challenge newcomer";
	else {
		this->_energyPoints -= 25;
		std::cout << "SC4V-TP " << this->_name << " is challenging newcomer in "
		          << ScavTrap::_randomChallengeValues[std::rand() % 5] << std::endl;
	}
}

std::string ScavTrap::getName() const {return this->_name;}

int         ScavTrap::getMeleeAttackDamage() const {return this->_meleeAttackDamage;}
int         ScavTrap::getRangedAttackDamage() const {return this->_rangedAttackDamage;}
