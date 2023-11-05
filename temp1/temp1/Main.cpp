#include <iostream>
#include "PersonalBestArray.h"
using namespace::std;
int menu();
void addAhlete(PersonalBestArray* ahlete, PersonalBest* jump, int numberOfJumps);
void findAthlete(PersonalBestArray* athlete);
void dropAthlete(PersonalBestArray* athlete);
void displayAthlete(PersonalBestArray* athlete);
int main() {
	PersonalBestArray* athlete;
	int index = 0;
	athlete = new PersonalBestArray[index];
	PersonalBest* jump;
	int numberOfJumps = 3;
	jump = new PersonalBest[numberOfJumps];
	bool status = true;
	while (status) {
		switch (menu()) {
		case 1:
			addAhlete(athlete, jump, numberOfJumps);
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


void addAhlete(PersonalBestArray* athlete, PersonalBest* jump, int numberOfJumps)
{
	PersonalBest temp;
	cin >> temp;
	athlete->addAthlete(temp);
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

void displayAthlete(PersonalBestArray* athlete)
{
	cout << "\n\tDisplaying...";
    athlete->displayAthlete();
}
/*Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 1

Enter the name of the athlete: Anthony
Enter meters: 2.1
Enter the month: 1
Enter the day: 10
Enter the year: 2001

List of Athlete
---------------
        Athlete #1
Name: Anthony
Meters: 2.1
Date: January 10, 2001
---------------
Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 1

Enter the name of the athlete: Joshua
Enter meters: 2
Enter the month: 3
Enter the day: 28
Enter the year: 2001

List of Athlete
---------------
        Athlete #1
Name: Anthony
Meters: 2.1
Date: January 10, 2001

        Athlete #2
Name: Joshua
Meters: 2
Date: March 28, 2001
---------------
Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 1

Enter the name of the athlete: Andrew
Enter meters: 3.3
Enter the month: 1
Enter the day: 2
Enter the year: 2001

List of Athlete
---------------
        Athlete #1
Name: Andrew
Meters: 3.3
Date: January 2, 2001

        Athlete #2
Name: Anthony
Meters: 2.1
Date: January 10, 2001

        Athlete #3
Name: Joshua
Meters: 2
Date: March 28, 2001
---------------
Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 1

Enter the name of the athlete: Hector
Enter meters: 2.05
Enter the month: 3
Enter the day: 24
Enter the year: 1998

List of Athlete
---------------
        Athlete #1
Name: Andrew
Meters: 3.3
Date: January 2, 2001

        Athlete #2
Name: Anthony
Meters: 2.1
Date: January 10, 2001

        Athlete #3
Name: Hector
Meters: 2.05
Date: March 24, 1998

        Athlete #4
Name: Joshua
Meters: 2
Date: March 28, 2001
---------------
Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 3
Enter the name of the athlete you want to find: Anthony
----------------------------------------------------
The athlete named "Anthony" is on the list.
----------------------------------------------------
Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 2
Enter the name of the athlete you want to be removed from the list: Anthony
-----------------------------------------------------------
        Athlete Anthony is getting removed!
-----------------------------------------------------------

List of Athlete
---------------
        Athlete #1
Name: Andrew
Meters: 3.3
Date: January 2, 2001

        Athlete #2
Name: Hector
Meters: 2.05
Date: March 24, 1998

        Athlete #3
Name: Joshua
Meters: 2
Date: March 28, 2001
---------------
Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 2
Enter the name of the athlete you want to be removed from the list: Joshua
-----------------------------------------------------------
        Athlete Joshua is getting removed!
-----------------------------------------------------------

List of Athlete
---------------
        Athlete #1
Name: Andrew
Meters: 3.3
Date: January 2, 2001

        Athlete #2
Name: Hector
Meters: 2.05
Date: March 24, 1998
---------------
Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 2
Enter the name of the athlete you want to be removed from the list: Andrew
-----------------------------------------------------------
        Athlete Andrew is getting removed!
-----------------------------------------------------------

List of Athlete
---------------
        Athlete #1
Name: Hector
Meters: 2.05
Date: March 24, 1998
---------------
Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 2
Enter the name of the athlete you want to be removed from the list: J

List of Athlete
---------------
        Athlete #1
Name: Hector
Meters: 2.05
Date: March 24, 1998
---------------
Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 2
Enter the name of the athlete you want to be removed from the list: Hector
-----------------------------------------------------------
        Athlete Hector is getting removed!
-----------------------------------------------------------

Displaying...
There are no athletes in the list!!
-----------------------------------------------------------
Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 4
Exit Program...
*/