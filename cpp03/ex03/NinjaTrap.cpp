//
// Created by Meldred Emilio on 11/16/20.
//

#include "NinjaTrap.hpp"

const std::string NinjaTrap::randomSpecialAttacks[5] = {
		"Water Shuriken",
		"Shadow Sneak",
		"Hydro Pump",
		"Substitute",
		"Secret Ninja Attack"
};

				NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name, 60, 60, 120, 120, 60, 5, 0) {
	std::cout << "Default constructor NinjaTrap for " << this->_name << " called" << std::endl;
}

				NinjaTrap::NinjaTrap(const NinjaTrap &newNinjaTrap) : ClapTrap(newNinjaTrap) {
	*this = newNinjaTrap;
	std::cout << "Copy constructor NinjaTrap for " << this->_name << " called" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "Destructor NinjaTrap for " << this->_name << " called" << std::endl;
}

NinjaTrap&      NinjaTrap::operator=(const NinjaTrap &newNinjaTrap) {
	this->_name = newNinjaTrap._name;
	this->_hitPoints = newNinjaTrap._hitPoints;
	this->_maxHitPoints = newNinjaTrap._maxHitPoints;
	this->_energyPoints = newNinjaTrap._energyPoints;
	this->_maxEnergyPoints = newNinjaTrap._maxEnergyPoints;
	this->_level = newNinjaTrap._level;
	this->_meleeAttackDamage = newNinjaTrap._meleeAttackDamage;
	this->_rangedAttackDamage = newNinjaTrap._rangedAttackDamage;
	this->_armorDamageReduction = newNinjaTrap._armorDamageReduction;
	return *this;
}

void            NinjaTrap::meleeAttack(const std::string &target) {
	std::cout << "NinjaTrap " << this->_name << " attacks " << target
	          << " at melee, causing " << this->_meleeAttackDamage
	          << " points of damage" << std::endl;
}

void            NinjaTrap::rangedAttack(const std::string &target) {
	std::cout << "NinjaTrap " << this->_name << " attacks " << target
	          << " at range, causing " << this->_rangedAttackDamage
	          << " points of damage" << std::endl;
}

void	        NinjaTrap::takeDamage(unsigned int amount) {
	amount -= this->_armorDamageReduction;
	std::cout << "NinjaTrap " << this->_name << " takes "
	          << amount << " damage!" << std::endl;
	ClapTrap::takeDamage(amount);
}

void            NinjaTrap::beRepaired(unsigned int amount) {
	std::cout << "NinjaTrap " << this->_name << " is being repaired by "
	          << amount << std::endl;
	ClapTrap::beRepaired(amount);
}

void            NinjaTrap::ninjaShoebox(NinjaTrap &opponent) {
	if (this->_energyPoints < 25)
		std::cout << "NinjaTrap " << this->_name
			<< " has not enough energy points to random action" << std::endl;
	else {
		this->_energyPoints -= 25;
		std::cout << "NinjaTrap " << this->_name << " makes "
			<< NinjaTrap::randomSpecialAttacks[std::rand() % 5] << " to "
			<< opponent.getName() << std::endl;
		opponent.takeDamage(std::rand() % 30);
	}
}

void            NinjaTrap::ninjaShoebox(FragTrap &opponent) {
	if (this->_energyPoints < 25)
		std::cout << "NinjaTrap " << this->_name
		          << " has not enough energy points to random action" << std::endl;
	else {
		this->_energyPoints -= 25;
		std::cout << "NinjaTrap " << this->_name << " makes "
		          << NinjaTrap::randomSpecialAttacks[std::rand() % 5] << " to "
		          << opponent.getName() << std::endl;
		opponent.takeDamage(std::rand() % 25);
	}
}

void            NinjaTrap::ninjaShoebox(ClapTrap &opponent) {
	if (this->_energyPoints < 25)
		std::cout << "NinjaTrap " << this->_name
		          << " has not enough energy points to random action" << std::endl;
	else {
		this->_energyPoints -= 25;
		std::cout << "NinjaTrap " << this->_name << " makes "
		          << NinjaTrap::randomSpecialAttacks[std::rand() % 5] << " to "
		          << opponent.getName() << std::endl;
		opponent.takeDamage(std::rand() % 20);
	}
}

void            NinjaTrap::ninjaShoebox(ScavTrap &opponent) {
	if (this->_energyPoints < 25)
		std::cout << "NinjaTrap " << this->_name
		          << " has not enough energy points to random action" << std::endl;
	else {
		this->_energyPoints -= 25;
		std::cout << "NinjaTrap " << this->_name << " makes "
		          << NinjaTrap::randomSpecialAttacks[std::rand() % 5] << " to "
		          << opponent.getName() << std::endl;
		opponent.takeDamage(std::rand() % 15);
	}
}