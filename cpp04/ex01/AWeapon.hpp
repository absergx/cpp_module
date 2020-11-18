//
// Created by Meldred Emilio on 11/17/20.
//

#ifndef CPP04_AWEAPON_HPP
#define CPP04_AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon {
protected:
	AWeapon();
	std::string         _name;
	int                 _apCost;
	int                 _damage;
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon &);
	virtual ~AWeapon();
	AWeapon&            operator=(const AWeapon &);
	std::string const&  getName() const;
	int                 getAPCost() const;
	int                 getDamage() const;
	virtual void        attack() const = 0;
};

#endif //CPP04_AWEAPON_HPP
