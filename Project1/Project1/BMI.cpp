#include<iostream>
#include <iomanip>
#include <cmath>
using namespace::std;

int main() {
	float weight, height, BMI, feets, inches;
	cout << "What is your weight in pounds?:";
	cin >> weight;
	cout << "Enter the height.\n";
	cout << "Enter the height in feet: ";
    cin >> feets;
	cout << "Enter the inches: ";
	cin >> inches;
	height = 12 * feets + inches;
	BMI = weight * 703 / pow(height, 2.0);
	cout << setprecision(2) << fixed << showpoint;
	cout << "Your BMI is: " << BMI << endl;
	if (BMI < 18.5) {
		cout << "You are underweight.\n";
	}
	if (18.5 <= BMI) {
		if (BMI <= 25) {
			cout << "You are average weight.\n";
		}
	}
	if (BMI > 25) {
		cout << "You are overweight.\n";
	}
	system("pause");
	return 0;
}
/*What is your weight in pounds?:122
Enter the height.
Enter the height in feet: 5
Enter the inches: 8
Your BMI is: 18.55
You are average weight.
Press any key to continue . . .*/
