/* Aleks McCormick
 * UAF CS 202
 * Lab 3
 * 01/26/2021
 */
#include <iostream>
#include <string>
#include <vector>
#include "Monster.hpp"
#include <memory>
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::unique_ptr;
using std::make_unique;
using std::shared_ptr;
using std::make_shared;
using std::move;



int main() {
	cout<<"Creating a raw pointer\n";
	Monster *dragon = new Monster;
	cout<<endl;

	cout<<"Creating a unique_ptr\n";
	unique_ptr<Monster> gnome = make_unique<Monster>("gnome");
	cout<<endl;

	cout<<"Transfering ownership of unique_ptr\n";
	unique_ptr<Monster> evolvedGnome = move(gnome);


	cout<<"Change the species of the new unique_ptr using a member function\n";
	evolvedGnome -> setSpecies("Gremlin");
	cout<<evolvedGnome -> getSpecies();
	cout<<endl<<endl;

	cout<<"Creating a shared_ptr\n";
	shared_ptr<Monster> bees = make_shared<Monster>("bees");
	{
		cout<<"Creating another shared_ptr pointing at the same object in a diffrent scope\n";
		shared_ptr<Monster> hive = bees;
	}
}
