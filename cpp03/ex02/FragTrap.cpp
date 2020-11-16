//
// Created by Meldred Emilio on 11/15/20.
//

#include "FragTrap.hpp"

const std::string FragTrap::_randomAttackValues[5] = {
		"trap attack",
		"laser attack",
		"tickling-tickling attack",
		"mega-nova attack",
		"laser inferno attack"
};

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100, 100, 100, 100, 30, 20, 5) {
	std::cout << "Default constructor FR4G-TP for " << this->_name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &newFragTrap) : ClapTrap(newFragTrap) {
	*this = newFragTrap;
	std::cout << "Copy constructor FR4G-TP for " << this->_name << " called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor FR4G-TP for " << this->_name << " called" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap &newFragTrap) {
	this->_name = newFragTrap._name;
	this->_hitPoints = newFragTrap._hitPoints;
	this->_maxHitPoints = newFragTrap._maxHitPoints;
	this->_level = newFragTrap._level;
	this->_meleeAttackDamage = newFragTrap._meleeAttackDamage;
	this->_rangedAttackDamage = newFragTrap._rangedAttackDamage;
	this->_armorDamageReduction = newFragTrap._armorDamageReduction;
	std::cout << "FR4G-TP assignation operator for " << this->_name << " called" << std::endl;
	return *this;
}

void    FragTrap::rangedAttack(const std::string &target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target
		<< " at range, causing " << this->_rangedAttackDamage
		<< " points of damage" << std::endl;
}

void    FragTrap::meleeAttack(const std::string &target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target
		<< " at melee, causing " << this->_meleeAttackDamage
		<< " points of damage" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount) {
	amount -= this->_armorDamageReduction;
	std::cout << "FR4G-TP " << this->_name << " takes "
			<< amount << " damage!" << std::endl;
	ClapTrap::takeDamage(amount);
}

void    FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FR4G-TP " << this->_name << " is being repaired by "
		<< amount << std::endl;
	ClapTrap::beRepaired(amount);
}

void    FragTrap::vaulthunterDotExe(const std::string &target) {
	if (this->_energyPoints < 25)
		std::cout << "FR4G-TP " << this->_name << " has not enough energy to attack";
	else {
		this->_energyPoints -= 25;
		std::cout << "FR4G-TP " << this->_name << " makes "
			<< FragTrap::_randomAttackValues[std::rand() % 5] << " to "
			<< target << std::endl;
	}
}
