//
// Created by Meldred Emilio on 11/19/20.
//

#ifndef CPP04_CHARACTER_HPP
#define CPP04_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string     _name;
	int             _count;
	AMateria*       _inventory[4];
public:
	Character(std::string const & name);
	Character(const Character &);
	virtual ~Character();
	Character&          operator=(const Character &);
	std::string const&  getName() const;
	void                equip(AMateria* m);
	void                unequip(int idx);
	void                use(int idx, ICharacter& target);
};

#endif //CPP04_CHARACTER_HPP
