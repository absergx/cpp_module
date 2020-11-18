//
// Created by Meldred Emilio on 11/17/20.
//

#include "Enemy.hpp"

Enemy::Enemy() : _hp(0), _type(std::string()) {}

Enemy::Enemy(int hp, const std::string &type) : _hp(hp), _type(type) {}

Enemy::Enemy(const Enemy &newEnemy) : _hp(newEnemy._hp), _type(newEnemy._type) {}

Enemy::~Enemy() {}

Enemy&  Enemy::operator=(const Enemy &newEnemy) {
	this->_hp = newEnemy._hp;
	this->_type = newEnemy._type;
	return *this;
}

std::string const&   Enemy::getType() const {return this->_type;}

int                  Enemy::getHP() const {return this->_hp;}

void                 Enemy::takeDamage(int amount) {
	if (amount >= 0)
		this->_hp -= amount;
}
