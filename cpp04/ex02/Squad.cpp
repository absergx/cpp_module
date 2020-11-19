//
// Created by Meldred Emilio on 11/18/20.
//

#include "Squad.hpp"

Squad::Squad() : _count(0), _squad(nullptr) {}

Squad::Squad(const Squad &newSquad) : _count(0), _squad(0) {
	for (int i = 0; i < newSquad.getCount(); i++)
		this->push(newSquad.getUnit(i)->clone());
}

Squad::~Squad() {
	for (int i = 0; i < this->_count; i++)
		delete this->_squad[i];
	delete this->_squad;
}

Squad&  Squad::operator=(const Squad &newSquad) {
	this->_count = newSquad._count;
	for (int i = 0; i < newSquad._count; i++)
		this->push(newSquad.getUnit(i)->clone());
	return *this;
}

int             Squad::getCount() const {return this->_count;}

ISpaceMarine*   Squad::getUnit(int n) const{
	if (!this->_count || n < 0 || n >= this->_count)
		return nullptr;
	return this->_squad[n];
}

int             Squad::push(ISpaceMarine *newISpaceMarine) {
	if (!newISpaceMarine)
		return this->_count;
	if (this->_squad) {
		for (int i = 0; i < this->_count; i++)
			if (this->_squad[i] == newISpaceMarine)
				return this->_count;
		ISpaceMarine **newSquad = new ISpaceMarine*[this->_count + 1];
		for (int i = 0; i < this->_count; i++)
			newSquad[i] = this->_squad[i];
		delete [] this->_squad;
		this->_squad = newSquad;
		this->_squad[this->_count] = newISpaceMarine;
		this->_count += 1;
	} else {
		this->_count = 1;
		this->_squad = new ISpaceMarine*[this->_count];
		this->_squad[this->_count - 1] = newISpaceMarine;
	}
	return this->_count;
}
