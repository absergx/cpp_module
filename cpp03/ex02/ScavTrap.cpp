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

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100, 100, 50, 50, 20, 15, 3) {
	std::cout << "Default constructor SC4V-TP for " << this->_name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &newScavTrap) : ClapTrap(newScavTrap) {
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
	std::cout << "SC4V-TP " << this->_name << " takes "
		          << amount << " damage!" << std::endl;
	ClapTrap::takeDamage(amount);
}

void        ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "SC4V-TP " << this->_name << " is being repaired by "
	          << amount << std::endl;
	ClapTrap::beRepaired(amount);
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
