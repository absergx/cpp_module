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

int             Squad::push(ISpaceMarine *newISpaceMarine) const {
	if (!newISpaceMarine)
		return this->_count;

}
