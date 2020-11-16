//
// Created by Meldred Emilio on 11/16/20.
//

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name, 100, 100, 120, 120, 60, 15, 3), FragTrap(name), NinjaTrap(name) {
	std::cout << "Default constructor Sup3r-TP for " << this->_name << " called" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &newSuperTrap) : ClapTrap(newSuperTrap), FragTrap(newSuperTrap), NinjaTrap(newSuperTrap) {
	std::cout << "Copy constructor Sup3r-TP for " << this->_name << " called" << std::endl;
}

SuperTrap::~SuperTrap() {
	std::cout << "Destructor Sup3r-TP for " << this->_name << " called" << std::endl;
}

SuperTrap&   SuperTrap::operator=(const SuperTrap &newSuperTrap) {
	this->_name = newSuperTrap._name;
	this->_hitPoints = newSuperTrap._hitPoints;
	this->_maxHitPoints = newSuperTrap._maxHitPoints;
	this->_level = newSuperTrap._level;
	this->_meleeAttackDamage = newSuperTrap._meleeAttackDamage;
	this->_rangedAttackDamage = newSuperTrap._rangedAttackDamage;
	this->_armorDamageReduction = newSuperTrap._armorDamageReduction;
	std::cout << "Sup3r-TP assignation operator for " << this->_name << " called" << std::endl;
	return *this;
}

void        SuperTrap::rangedAttack(const std::string &target) {
	FragTrap::rangedAttack(target);
}

void        SuperTrap::meleeAttack(const std::string &target) {
	NinjaTrap::meleeAttack(target);
}

void    SuperTrap::takeDamage(unsigned int amount) {
	amount -= this->_armorDamageReduction;
	std::cout << "Sup3r-TP " << this->_name << " takes "
	          << amount << " damage!" << std::endl;
	ClapTrap::takeDamage(amount);
}

void    SuperTrap::beRepaired(unsigned int amount) {
	std::cout << "Sup3r-TP " << this->_name << " is being repaired by "
	          << amount << std::endl;
	ClapTrap::beRepaired(amount);
}
