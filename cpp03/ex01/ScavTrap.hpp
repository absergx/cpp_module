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
	ScavTrap&   operator=(const ScavTrap&);
	void 		rangedAttack(std::string const & target);
	void 		meleeAttack(std::string const & target);
	void 		takeDamage(unsigned int amount);
	void 		beRepaired(unsigned int amount);
	void        challengeNewcomer();
	std::string getName() const;
	int         getMeleeAttackDamage() const;
	int         getRangedAttackDamage() const;
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
	const static std::string _randomChallengeValues[5];
};

#endif //CPP03_SCAVTRAP_HPP
