//
// Created by Meldred Emilio on 11/16/20.
//

#ifndef CPP03_NINJATRAP_HPP
#define CPP03_NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {
public:
					NinjaTrap(const std::string &);
					NinjaTrap(const NinjaTrap &);
					~NinjaTrap();
	NinjaTrap       &operator=(const NinjaTrap &);
	virtual void    meleeAttack(const std::string &);
	virtual void    rangedAttack(const std::string &);
	virtual void	takeDamage(unsigned int);
	virtual void	beRepaired(unsigned int);
	void            ninjaShoebox(NinjaTrap &);
	void            ninjaShoebox(FragTrap &);
	void            ninjaShoebox(ClapTrap &);
	void            ninjaShoebox(ScavTrap &);
private:
	static const std::string randomSpecialAttacks[5];
};

#endif //CPP03_NINJATRAP_HPP
