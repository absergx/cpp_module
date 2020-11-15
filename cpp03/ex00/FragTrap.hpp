//
// Created by Meldred Emilio on 11/15/20.
//

#ifndef CPP03_FRAGTRAP_HPP
#define CPP03_FRAGTRAP_HPP

# include <string>
# include <iostream>

class FragTrap {
public:
				FragTrap(const std::string &);
				FragTrap(const FragTrap &);
				~FragTrap();
	FragTrap&   operator=(const FragTrap&);
	void 		rangedAttack(std::string const & target);
	void 		meleeAttack(std::string const & target);
	void 		takeDamage(unsigned int amount);
	void 		beRepaired(unsigned int amount);
	void        vaulthunterDotExe(std::string const & target);
	std::string getName() const;
	int         getMeleeAttackDamage() const;
	int         getRangedAttackDamage() const;
private:
	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int         _maxEnergyPoints;
	int			_level;
	int 		_meleeAttackDamage;
	int 		_rangedAttackDamage;
	int 		_armorDamageReduction;
	std::string	_name;
	const static std::string _randomAttackValues[5];
};

#endif //CPP03_FRAGTRAP_HPP
