//
// Created by Meldred Emilio on 11/15/20.
//

#ifndef CPP03_SCAVTRAP_HPP
#define CPP03_SCAVTRAP_HPP

# include <string>
# include <iostream>

class ScavTrap {
public:
				ScavTrap(const std::string &);
				ScavTrap(const ScavTrap &);
				~ScavTrap();
private:
	int         _hitPoints;
	int         _maxHitPoints;
	int         _energyPoints;
	int         _maxEnergyPoints;
	int         _level;
	int         _meleeAttackDamage;
	int         _rangedAttackDamage;
	int         _armorDamageReduction;
	std::string _name;
};

#endif //CPP03_SCAVTRAP_HPP
