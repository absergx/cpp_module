//
// Created by Meldred Emilio on 11/16/20.
//

#ifndef CPP03_SUPERTRAP_HPP
#define CPP03_SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap(const std::string &);
	SuperTrap(const SuperTrap &);
	~SuperTrap();
	SuperTrap&   operator=(const SuperTrap&);
	virtual void	rangedAttack(const std::string &);
	virtual void	meleeAttack(const std::string &);
	virtual void	takeDamage(unsigned int);
	virtual void	beRepaired(unsigned int);
};

#endif //CPP03_SUPERTRAP_HPP
