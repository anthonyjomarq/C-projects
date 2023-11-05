//This program calculates the distance traveled.
#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
	int hours, n, count;
	float speed, distance;

	do {
		cout << "Enter the speed of the vehicle (in miles per hour):";
		cin >> speed;
		if (speed < 0) {
			cout << "Error, the speed cannot be negative!\n";
		}
	} while (speed < 0);
	do {
		cout << "Enter number of hours it has traveled: ";
		cin >> hours;
		if (hours < 1) {
			cout << "Error, the hours need to be more than 1!\n";
		}
	} while (hours < 1);
	cout << "Hour\t Distance Traveled\n";
	cout << "----------------------------------\n";
	count = 0;
	do {
		count++;
		distance = speed * count;
		cout << setw(2) << count << "\t" << setw(8) << distance << endl;

	} while (count < hours);
	system("pause");
	return 0;


}
/*Enter the speed of the vehicle (in miles per hour):-40
Error, the speed cannot be negative!
Enter the speed of the vehicle (in miles per hour):40
Enter number of hours it has traveled: 0
Error, the hours need to be more than 1!
Enter number of hours it has traveled: 3
Hour     Distance Traveled
----------------------------------
 1            40
 2            80
 3           120
Press any key to continue . . .*/