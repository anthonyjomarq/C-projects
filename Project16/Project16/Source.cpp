#include <iostream>
#include "PersonalBestArray.h"
using namespace::std;
int menu();
void addAhlete(PersonalBestArray* athlete);
void findAthlete(PersonalBestArray* athlete);
void dropAthlete(PersonalBestArray* athlete);
int main() {
	PersonalBestArray* athlete;
	int numberOfAthlete = 1;
	athlete = new PersonalBestArray[numberOfAthlete];
	bool status = true;
	while (status) {
		switch (menu()) {
		case 1:
			addAhlete(athlete);
			break;
		case 2:
			dropAthlete(athlete);
			break;
		case 3:
			findAthlete(athlete);

			break;
		case 4:
			status = false;
			cout << "Exit Program...\n";
			delete[] athlete;
			athlete = nullptr;
			break;
		}
	}
	return 0;
}
int menu() {
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


void addAhlete(PersonalBestArray* athlete)
{
	PersonalBest temp;
	cin >> temp;
	athlete->addAthlete(temp);
	athlete->displayAthlete();
}

void findAthlete(PersonalBestArray* athlete)
{
	MyString temp;
	cout << "Enter the name of the athlete you want to find: ";
	cin >> temp;
	if (athlete->findAthlete(temp) == -1) {
		cout << "-------------------------------\n";
		cout << "The athlete is not in the list.\n";
		cout << "-------------------------------\n";
	}
	else {
		cout << "----------------------------------------------------\n";
		cout << "The athlete named \"" << temp << "\" is on the list.\n";
		cout << "----------------------------------------------------\n";
	}
}

void dropAthlete(PersonalBestArray* athlete)
{
	MyString temp;
	cout << "Enter the name of the athlete you want to be removed from the list: ";
	cin >> temp;
	athlete->dropAthlete(temp);
	athlete->displayAthlete();
}

