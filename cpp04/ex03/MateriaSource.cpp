//
// Created by Meldred Emilio on 11/19/20.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &other) : _count(other._count) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = i < this->_count ? other._inventory[i]->clone() : nullptr;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < this->_count; i++)
		delete this->_inventory[i];
}

MateriaSource&      MateriaSource::operator=(const MateriaSource &other) {
	for (int i = 0; i < this->_count; i++)
		delete this->_inventory[i];
	this->_count = other._count;
	for (int i = 0; i < this->_count; i++)
		this->_inventory[i] = other._inventory[i]->clone();
	return *this;
}

void                MateriaSource::learnMateria(AMateria *materia) {
	if (this->_count == 4 || materia == nullptr)
		return ;
	for (int i = 0; i < this->_count; i++)
		if (this->_inventory[i] == materia)
			return ;
	this->_inventory[this->_count] = materia;
	this->_count += 1;
}

AMateria*           MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < this->_count; i++)
		if (this->_inventory[i]->getType() == type)
			return this->_inventory[i]->clone();
	return nullptr;
}
