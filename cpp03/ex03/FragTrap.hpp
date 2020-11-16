//
// Created by Meldred Emilio on 11/15/20.
//

#ifndef CPP03_FRAGTRAP_HPP
#define CPP03_FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
				FragTrap(const std::string &);
				FragTrap(const FragTrap &);
				~FragTrap();
	FragTrap&   operator=(const FragTrap&);
	virtual void    meleeAttack(const std::string &);
	virtual void    rangedAttack(const std::string &);
	virtual void	takeDamage(unsigned int);
	virtual void	beRepaired(unsigned int);
	void        vaulthunterDotExe(std::string const & target);
private:
	const static std::string _randomAttackValues[5];
};

#endif //CPP03_FRAGTRAP_HPP
