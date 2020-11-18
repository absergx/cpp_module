//
// Created by Meldred Emilio on 11/17/20.
//

#ifndef CPP04_CHARACTER_HPP
#define CPP04_CHARACTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
private:
	std::string         _name;
	int                 _ap;
	AWeapon             *_aWeapon;
public:
	Character();
	Character(std::string const& name);
	Character(const Character &);
	virtual ~Character();
	Character&          operator=(const Character &);
	void                recoverAP();
	void                equip(AWeapon*);
	void                attack(Enemy*);
	std::string const&  getName() const;
	int                 getAp() const;
	AWeapon*            getAWeapon() const;
};

std::ostream    &operator<<(std::ostream &out, Character const &character);

#endif //CPP04_CHARACTER_HPP
