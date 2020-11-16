//
// Created by Meldred Emilio on 11/16/20.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name, int hitPoints = 100, int maxHitPoints = 100,
				   int energyPoints = 100, int maxEnergyPoints = 100,
				   int meleeAttackDamage = 50, int rangedAttackDamage = 50, int armorDamageReduction = 5) {
	this->_name = name;
	this->_hitPoints = hitPoints;
	this->_maxHitPoints = maxHitPoints;
	this->_energyPoints = energyPoints;
	this->_maxEnergyPoints = maxEnergyPoints;
	this->_level = 1;
	this->_meleeAttackDamage = meleeAttackDamage;
	this->_rangedAttackDamage = rangedAttackDamage;
	this->_armorDamageReduction = armorDamageReduction;
	(void)_maxEnergyPoints;
	std::cout << "Default constructor CL4P-TP for " << this->_name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &newClapTrap) {
	*this = newClapTrap;
	std::cout << "Copy constructor CL4P-TP for " << this->_name << " called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor CL4P-TP for " << this->_name << " called" << std::endl;
}

ClapTrap&       ClapTrap::operator=(const ClapTrap &newClapTrap) {
	this->_name = newClapTrap._name;
	this->_hitPoints = newClapTrap._hitPoints;
	this->_maxHitPoints = newClapTrap._maxHitPoints;
	this->_energyPoints = newClapTrap._energyPoints;
	this->_maxEnergyPoints = newClapTrap._maxEnergyPoints;
	this->_level = newClapTrap._level;
	this->_meleeAttackDamage = newClapTrap._meleeAttackDamage;
	this->_rangedAttackDamage = newClapTrap._rangedAttackDamage;
	this->_armorDamageReduction = newClapTrap._armorDamageReduction;
	(void)_maxEnergyPoints;
	std::cout << "Assignation operator CL4P-TP for " << this->_name << " called" << std::endl;
	return *this;
}

void    ClapTrap::meleeAttack(const std::string &target) {
	std::cout << "CL4P-TP " << this->_name << " attacks " << target
	          << " at melee, causing " << this->_meleeAttackDamage
	          << " points of damage" << std::endl;
}

void    ClapTrap::rangedAttack(const std::string &target) {
	std::cout << "CL4P-TP " << this->_name << " attacks " << target
	          << " at range, causing " << this->_rangedAttackDamage
	          << " points of damage" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
	amount -= this->_armorDamageReduction;
	if ((int)amount > 0) {
		std::cout << "CL4P-TP " << this->_name << " takes "
		          << amount << " damage!" << std::endl;
		this->_hitPoints -= (int) amount;
	} else
		std::cout << "CL4P-TP " << this->_name
		          << " avoid damage with armor" << std::endl;
	if (this->_hitPoints <= 0)
		this->_hitPoints = 1;
	std::cout << "Now his hit points is " << this->_hitPoints << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "CL4P-TP " << this->_name << " is being repaired by "
	          << amount << std::endl;
	this->_hitPoints = ((int)amount + this->_hitPoints >= this->_maxHitPoints) ? this->_maxHitPoints : (this->_hitPoints + (int)amount);
	std::cout << "Now his hit points is " << this->_hitPoints << std::endl;
}

std::string     ClapTrap::getName() const {return this->_name;}

int             ClapTrap::getMeleeAttackDamage() const {return this->_meleeAttackDamage;}

int             ClapTrap::getRangedAttackDamage() const {return this->_rangedAttackDamage;}
