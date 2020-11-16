//
// Created by Meldred Emilio on 11/15/20.
//

#ifndef CPP03_SCAVTRAP_HPP
#define CPP03_SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
				ScavTrap(const std::string &);
				ScavTrap(const ScavTrap &);
				~ScavTrap();
	ScavTrap&   operator=(const ScavTrap&);
	virtual void    meleeAttack(const std::string &);
	virtual void    rangedAttack(const std::string &);
	virtual void	takeDamage(unsigned int);
	virtual void	beRepaired(unsigned int);
	void        challengeNewcomer();
private:
	const static std::string _randomChallengeValues[5];
};

#endif //CPP03_SCAVTRAP_HPP
