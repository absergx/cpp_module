//
// Created by Meldred Emilio on 11/17/20.
//

#ifndef CPP04_ENEMY_HPP
#define CPP04_ENEMY_HPP

#include <iostream>
#include <string>

class Enemy {
protected:
	int                 _hp;
	std::string         _type;
public:
	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy &);
	virtual ~Enemy();
	Enemy&              operator=(const Enemy &);
	std::string const&  getType() const;
	int                 getHP() const;
	virtual void        takeDamage(int);
};

#endif //CPP04_ENEMY_HPP
