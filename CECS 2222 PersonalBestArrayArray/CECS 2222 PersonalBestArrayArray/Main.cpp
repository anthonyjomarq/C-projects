//File Main.cpp
#include <iostream>
#include <string>
#include "PersonalBest.h"
//#include "PersonalBestArrayArray.h"
using namespace::std;

int menu();
void addAthlete(PersonalBest* jump, int numberOfJumps);
//void findAthlete(PersonalBestArray* athlete);
//void dropAthlete(PersonalBestArray* athlete);
//void displayAthlete(PersonalBestArray* athlete);
int main() {
	int index = 0;
	int numberOfJumps = 3;
	//PersonalBestArray* athlete;
	//athlete = new PersonalBestArray[index];
	PersonalBest* jump;
	jump = new PersonalBest[numberOfJumps];
	bool status = true;
	while (status) {
		switch (menu()) {
		case 1:
			addAthlete(jump, numberOfJumps);
			break;
		case 2:
			//dropAthlete(athlete);
			break;
		case 3:
			//findAthlete(athlete);

			break;
		case 4:
			status = false;
			cout << "Exit Program...\n";
			/*delete[] athlete;
			athlete = nullptr;*/
			delete[] jump;
			jump = nullptr;
			break;
		}
	}
	return 0;
}
int menu()
{
	int option = 0;
	cout << "Select one of the following options:\n";
	cout << "\t1. Add a athlete\n";
	cout << "\t2. Remove the athlete\n";
	cout << "\t3. Find the athlete\n";
	cout << "\t4. Exit the program\n";
	cout << "\nYour selection: ";
	cin >> option;
	return option;
}
void addAthlete(PersonalBest* jump, int numberOfJumps)
{
	MyString name;
	cout << "Enter the name of the athlete: ";
	cin >> name;
	jump->setName(name);
	//athlete->addAthlete();
	for (int i = 0; i < numberOfJumps; i++) {
		double meters;
		Date temp;
		do {
			cout << "Enter meters: ";
			cin >> meters;
			if (meters < 2 || meters> 5) {
				cout << "Error! The measuremente in meters cannot be less than 2 or more than 5.\n";
			}
		} while (meters < 2 || meters> 5);
		cin >> temp;
		jump->addJump(meters, temp);
		jump->displayJump();
	}
}
