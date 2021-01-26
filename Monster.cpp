//
// Created by aleks on 01/26/21.
//

#include "Monster.hpp"
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

Monster::Monster():species_("Default species") {
	cout << "Constructed a Monster of species type " << species_<< endl;
}

Monster::Monster(const Monster &orig):species_(orig.species_) {
	cout << "Constructed a copy Monster of species type " << species_<< endl;
}

Monster::Monster(const string &speciType):species_(speciType) {
	cout << "Constructed a Monster of species type " << species_<< endl;
}

Monster::~Monster() {
	cout << "Destroied a Monster of species type " << species_<< endl;
}

string Monster::getSpecies() const {
	return species_;
}

void Monster::setSpecies(const string &speciType){
	species_ = speciType;
}
