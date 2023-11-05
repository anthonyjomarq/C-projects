#include "PersonalBest.h"
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
	athlete->findAthleteAndDisplay(temp);
}

void dropAthlete(PersonalBestArray* athlete)
{
	MyString temp;
	cout << "Enter the name of the athlete you want to be removed from the list: ";
	cin >> temp;
	athlete->dropAthlete(temp);
	athlete->displayAthlete();
}
/*Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 1
Enter the name of the vaulter athlete: Anthony

List of Jumps
---------------
Jump #1
Enter meters: 3.3
Enter the month: 2
Enter the day: 1
Enter the year: 10
Error! Invalid year!
Enter the year: 2001

Jump #2
Enter meters: 4.4
Enter the month: 3
Enter the day: 2
Enter the year: 2001

Jump #3
Enter meters: 3.1
Enter the month: 7
Enter the day: 8
Enter the year: 2004
---------------

List of Athlete
---------------
Athlete #1
Name: Anthony
Jumps of the vaulter
----------------------
Jump #1

Meters: 4.4
March 2, 2001


Jump #2

Meters: 3.3
February 1, 2001


Jump #3

Meters: 3.1
July 8, 2004

----------------------
---------------
Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 1
Enter the name of the vaulter athlete: Joshua

List of Jumps
---------------
Jump #1
Enter meters: 2.7
Enter the month: 6
Enter the day: 9
Enter the year: 2001

Jump #2
Enter meters: 4.9
Enter the month: 3
Enter the day: 1
Enter the year: 2015

Jump #3
Enter meters: 3
Enter the month: 9
Enter the day: 6
Enter the year: 2003
---------------

List of Athlete
---------------
Athlete #1
Name: Joshua
Jumps of the vaulter
----------------------
Jump #1

Meters: 4.9
March 1, 2015


Jump #2

Meters: 3
September 6, 2003


Jump #3

Meters: 2.7
June 9, 2001

----------------------

Athlete #2
Name: Anthony
Jumps of the vaulter
----------------------
Jump #1

Meters: 4.4
March 2, 2001


Jump #2

Meters: 3.3
February 1, 2001


Jump #3

Meters: 3.1
July 8, 2004

----------------------
---------------
Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 1
Enter the name of the vaulter athlete: Carlos

List of Jumps
---------------
Jump #1
Enter meters: 4.5
Enter the month: 5
Enter the day: 2
Enter the year: 2001

Jump #2
Enter meters: 3.3
Enter the month: 9
Enter the day: 8
Enter the year: 2014

Jump #3
Enter meters: 2.9
Enter the month: 12
Enter the day: 9
Enter the year: 2003
---------------

List of Athlete
---------------
Athlete #1
Name: Joshua
Jumps of the vaulter
----------------------
Jump #1

Meters: 4.9
March 1, 2015


Jump #2

Meters: 3
September 6, 2003


Jump #3

Meters: 2.7
June 9, 2001

----------------------

Athlete #2
Name: Carlos
Jumps of the vaulter
----------------------
Jump #1

Meters: 4.5
May 2, 2001


Jump #2

Meters: 3.3
September 8, 2014


Jump #3

Meters: 2.9
December 9, 2003

----------------------

Athlete #3
Name: Anthony
Jumps of the vaulter
----------------------
Jump #1

Meters: 4.4
March 2, 2001


Jump #2

Meters: 3.3
February 1, 2001


Jump #3

Meters: 3.1
July 8, 2004

----------------------
---------------
Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 3
Enter the name of the athlete you want to find: Joshua
-----------------------------------------------------------
Displaying Athlete Joshua...
Athlete #1
Name: Joshua
Jumps of the vaulter
----------------------
Jump #1

Meters: 4.9
March 1, 2015


Jump #2

Meters: 3
September 6, 2003


Jump #3

Meters: 2.7
June 9, 2001

----------------------
-----------------------------------------------------------
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
Name: Carlos
Jumps of the vaulter
----------------------
Jump #1

Meters: 4.5
May 2, 2001


Jump #2

Meters: 3.3
September 8, 2014


Jump #3

Meters: 2.9
December 9, 2003

----------------------

Athlete #2
Name: Anthony
Jumps of the vaulter
----------------------
Jump #1

Meters: 4.4
March 2, 2001


Jump #2

Meters: 3.3
February 1, 2001


Jump #3

Meters: 3.1
July 8, 2004

----------------------
---------------
Select one of the following options:
        1. Add a athlete
        2. Remove the athlete
        3. Find the athlete
        4. Exit the program

Your selection: 2
Enter the name of the athlete you want to be removed from the list: Carlos
-----------------------------------------------------------
        Athlete Carlos is getting removed!
-----------------------------------------------------------

List of Athlete
---------------
Athlete #1
Name: Anthony
Jumps of the vaulter
----------------------
Jump #1

Meters: 4.4
March 2, 2001


Jump #2

Meters: 3.3
February 1, 2001


Jump #3

Meters: 3.1
July 8, 2004

----------------------
---------------
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
