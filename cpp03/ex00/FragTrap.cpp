//
// Created by Meldred Emilio on 11/15/20.
//

#include "FragTrap.hpp"

const std::string FragTrap::_randomAttackValues[5] = {
		"bi-i-bip",
		"kus-kus",
		"tickling-tickling",
		"poooooooow",
		"meooooow"
};

FragTrap::FragTrap(const std::string & name) : _name(name) {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	(void)_maxEnergyPoints;
	std::cout << "Default constructor for " << this->_name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &newFragTrap) {
	*this = newFragTrap;
	std::cout << "Copy constructor for " << this->_name << " called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor for " << this->_name << " called" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap &newFragTrap) {
	this->_name = newFragTrap._name;
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
	if ((int)amount > 0)
		this->_hitPoints -= (int)amount;
	if (this->_hitPoints <= 0)
		this->_hitPoints = 1;
	std::cout << "Now his hit points is " << this->_hitPoints << std::endl;
}

void    FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FR4G-TP " << this->_name << " is being repaired by "
		<< amount << std::endl;
	this->_hitPoints = ((int)amount + this->_hitPoints >= this->_maxHitPoints) ? this->_maxHitPoints : (this->_hitPoints + (int)amount);
	std::cout << "Now his hit points is " << this->_hitPoints << std::endl;
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

std::string FragTrap::getName() const {return this->_name;}

int         FragTrap::getMeleeAttackDamage() const {return this->_meleeAttackDamage;}
int         FragTrap::getRangedAttackDamage() const {return this->_rangedAttackDamage;}
