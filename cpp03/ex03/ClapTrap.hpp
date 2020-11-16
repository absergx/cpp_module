//
// Created by Meldred Emilio on 11/16/20.
//

#ifndef CPP03_CLAPTRAP_HPP
#define CPP03_CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap {
public:
					ClapTrap(const std::string &, int, int, int, int, int, int, int);
					ClapTrap(const ClapTrap &);
					~ClapTrap();
	ClapTrap&       operator=(const ClapTrap&);
	virtual void    meleeAttack(const std::string &);
	virtual void    rangedAttack(const std::string &);
	virtual void	takeDamage(unsigned int);
	virtual void	beRepaired(unsigned int);
	std::string     getName() const;
	int             getMeleeAttackDamage() const;
	int             getRangedAttackDamage() const;
protected:
	int			    _hitPoints;
	int			    _maxHitPoints;
	int			    _energyPoints;
	int             _maxEnergyPoints;
	int			    _level;
	int 		    _meleeAttackDamage;
	int 		    _rangedAttackDamage;
	int 		    _armorDamageReduction;
	std::string	    _name;
};

#endif //CPP03_CLAPTRAP_HPP
