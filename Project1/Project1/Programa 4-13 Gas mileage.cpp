#include <iostream>
#include <iomanip>

using namespace::std;

int main() {
	float milles, gallons, MPG, sumMPG = 0, sumGl = 0, totalMPG;

	cout << "Enter miles driven (-1 to quit): ";
	cin >> milles;
	while (milles != -1.0) {
		cout << "Enter gallons used: ";
		cin >> gallons;
		MPG = milles / gallons;
		cout << "MPG this trip: " << MPG << endl;
		sumMPG += milles;
		sumGl += gallons;
		totalMPG = sumMPG / sumGl;
		cout << "Total MPG: " << totalMPG << endl;
		cout << "\nEnter miles driven (-1 to quit): ";
		cin >> milles;
	}
	system("pause");
	return 0;
}