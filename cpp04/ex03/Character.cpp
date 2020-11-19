//
// Created by Meldred Emilio on 11/19/20.
//

#include "Character.hpp"

Character::Character(const std::string &name) : _name(name), _count(0) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
}

Character::Character(const Character &newCharacter) : _name(newCharacter._name), _count(newCharacter._count) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = i < newCharacter._count ? newCharacter._inventory[i]->clone() : nullptr;
}

Character::~Character() {
	for (int i = 0; i < this->_count; i++)
		delete this->_inventory[i];
}

Character&      Character::operator=(const Character &other) {
	this->_name = other._name;
	for (int i = 0; i < this->_count; i++)
		delete this->_inventory[i];
	this->_count = other._count;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = i < this->_count ? other._inventory[i]->clone() : nullptr;
	return *this;
}

std::string const&  Character::getName() const {return this->_name;}

void                Character::equip(AMateria *m) {
	if (this->_count == 4 || !m)
		return ;
	for (int i = 0; i < this->_count; i++)
		if (this->_inventory[i] == m)
			return ;
	this->_inventory[this->_count] = m;
	this->_count += 1;
}

void                Character::unequip(int idx) {
	if (idx < 0 || idx >= this->_count || this->_inventory[idx] == nullptr)
		return ;
	for (int i = idx; i < this->_count - 1; i++)
		this->_inventory[i] = this->_inventory[i + 1];
	this->_inventory[this->_count - 1] = nullptr;
	this->_count -= 1;
}

void                Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= this->_count || this->_inventory[idx] == nullptr)
		return ;
	this->_inventory[idx]->use(target);
}
