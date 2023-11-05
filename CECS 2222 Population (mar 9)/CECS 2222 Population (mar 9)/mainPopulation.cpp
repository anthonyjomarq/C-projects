/* 9. Population 
In a population, the birth rate and death rate are calculated as follows: 
Birth Rate = Number of Births ÷ Population 
Death Rate = Number of Deaths ÷ Population 
For example, in a population of 100,000 that has 8,000 births and 6,000 deaths per 
year, the birth rate and death rate are: 
Birth Rate = 8,000 ÷ 100,000 = 0.08 
Death Rate = 6,000 ÷ 100,000 = 0.06 
Design a Population class that stores a population, number of births, and number of 
deaths for a period of time. Member functions should return the birth rate and death 
rate. Implement the class in a program. 
Input Validation: Do not accept population figures less than 1, or birth or death numbers less than 0.*/
#include<iostream>
#include<iomanip>
#include<string>
using namespace::std;
#include "Population.h"

void getValues(Population Municipios[], int numberOfMunicipios);
void displayValues(Population Municipios[], int numberOfMunicipios);
int main() {
	const int MAX_MUNICIPIOS = 78;
	Population Municipios[MAX_MUNICIPIOS];
	int numberOfMunicipios;

	Population SanJuan;
	int numberOfBirths, numberOfDeaths, population;


	cout << "Entre la poblacion: ";
	cin >> population;
	SanJuan.setPopulation(population);
	cout << "Entre la cantidad de nacimientos: ";
	cin >> numberOfBirths;
	SanJuan.setBirth(numberOfBirths);
	cout << "Entre el numero de fallecimientos: ";
	cin >> numberOfDeaths;
	SanJuan.setPopulation(population).setBirth(numberOfBirths).setDeaths(numberOfDeaths);

	Population RioPiedras(SanJuan);
	SanJuan.display();
	RioPiedras.display();

	/*cout << "Entre la cantidad de municipios de la isla: ";
	cin >> numberOfMunicipios;
	getValues(Municipios, numberOfMunicipios);
	displayValues(Municipios, numberOfMunicipios);*/
	return 0;
}//end main
void getValues(Population Municipios[], int numberOfMunicipios){
	int numberOfBirths, numberOfDeaths, population;
	string municipioNombre;
	for (int i = 0; i < numberOfMunicipios; i++) {
		cin.ignore();
		cout << "Entre el nombre de Municipio: ";
		getline(cin, municipioNombre);
		cout << "Entre la poblacion: ";
		cin >> population;
		Municipios[i].setPopulation(population);
		cout << "Entre la cantidad de nacimientos: ";
		cin >> numberOfBirths;
		Municipios[i].setBirth(numberOfBirths);
		cout << "Entre el numero de fallecimientos: ";
		cin >> numberOfDeaths;
		Municipios[i].setDeaths(numberOfDeaths);
		Municipios[i].display();
		
	}
}
void displayValues(Population Municipios[], int numberOfMunicipios) {
	string municipioNombre[78];
	for (int i = 0; i < numberOfMunicipios; i++) {
		cout << "Los datos del municipio de " << municipioNombre[i] << endl;
		Municipios[i].display();
	}

}