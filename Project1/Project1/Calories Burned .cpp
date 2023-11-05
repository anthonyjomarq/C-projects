/*     Calories Burned

Running on a particular treadmill you burn 3.6 calories per minute.Write a program that uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes.*/
#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
	double BURN_CALORIES = 3.6;
	int i;

	cout << fixed << showpoint << setprecision(3);
	cout << "    Minutes    Calories Burned\n";
	for (i = 5; i <= 30; i = i + 5) {
		cout << setw(10) << i << setw(10) << i * BURN_CALORIES << endl;
	}
	system("pause");
	return 0;
}