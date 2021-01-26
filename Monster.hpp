//
// Created by aleks on 01/26/21.
//

#ifndef LAB3_MONSTER_HPP
#define LAB3_MONSTER_HPP
#include <string>

using std::string;


class Monster {
public:
	Monster();
	Monster(const Monster &);
	Monster(const string &speciType);
	~Monster();

	string getSpecies() const;
	void setSpecies(const string &speciType);

private:
	string species_;
};


#endif //LAB3_MONSTER_HPP
