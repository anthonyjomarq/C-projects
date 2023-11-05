#include <iostream>
#include <cstdlib>
using namespace::std;
#include "Population.h"

//Constructor function
Population::Population(int aPopulation, int aBirths, int aDeaths) {
	this->setPopulation(aPopulation);
	this->setBirth(aBirths);
	this->setDeaths(aDeaths);
}
Population::Population(const Population& obj) {
	(*this).setPopulation(obj.getPopulation());
	(*this).setBirth(obj.getBirth());
	(*this).setDeaths(obj.getDeaths());
}
//Destructor function
Population::~Population() {
	cout << "Destruyendo objectos del tipo Population\n";
	exit(EXIT_FAILURE);
}
//Mutators functions
Population & Population::setPopulation(int aPopulation) {
	if (aPopulation >= 0) {
		this->population = aPopulation;
	}
	else {
		cout << " Error la poblacion no puede ser menor que 0!" << endl;
		exit(EXIT_FAILURE);
	}//end else 
	return *this;
	
}
Population & Population::setBirth(int aBirths) {
	if (aBirths >= 0) {
		(*this).births = aBirths;
	}
	else {
		cout << " Error la poblacion no puede ser menor que 0!" << endl;
		exit(EXIT_FAILURE);
	}//end else 
	return *this;
}
Population & Population::setDeaths(int aDeaths) {
	if (aDeaths >= 0) {
		this->deaths = aDeaths;
	}
	else {
		cout << " Error el numero de muerte no puede ser menor que 0!" << endl;
		exit(EXIT_FAILURE);
	}//end else 
	return *this;
}
//Accesor function 
int Population::getPopulation() const {
	return population;
}
int Population::getBirth() const {
	return births;
}  
int Population::getDeaths() const {
	return deaths;
}
//Member functions
double Population::getBirthRate() const {
	return (getBirth() / (double)getPopulation());
}
double Population::getDeathRate() const {
	return (getDeaths() / (double)getPopulation());

}
void Population::display() const {
	cout << " Birth Rate:" << getBirthRate() << endl;
	cout << " Deaths Rate: " << getDeathRate() << endl;

}