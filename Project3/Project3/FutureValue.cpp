#include <iostream>
#include <cmath>
#include <iomanip>
using namespace::std;

void futureValue(double, double, double);

int main() {
	double t, p, i, future_Value;
	char again;
	do {
		cout << "This program will calculate the future value of an account after coumpound monthly interest." << endl;
		do {
			cout << "Enter the account's present value: $";
			cin >> p;
			if (p <= 0) {
				cout << "Error, the account's present value cannot be less than 0 or negative!\n";
			}
		} while (p <= 0);
		do {
			cout << "Enter montly interest rate: ";
			cin >> i;
			if (i <= 0) {
				cout << "Error, the account montly interest cannot be less than 0 or negative!\n";
			}
		} while (i <= 0);
		do {
			cout << "Enter the amount of months that the money will be left in the account: ";
			cin >> t;
			if (t <= 0) {
				cout << "Error, the amount of months cannot be less than 0 or negative!\n";
			}
		} while (t <= 0);
		futureValue(p, i, t);
		cout << "----------------------------------\n";
		cout << "Do you want to redo the program? (Y/N) ";
		cin >> again;
	} while (again == 'Y' || again == 'y');
	return 0;
}
	void futureValue(double p, double i, double t)
	{
		cout << setprecision(2) << fixed << showpoint;
		i *= .01;
		p *= pow((1 + i), t);
		cout << "The account's future value is: $" << p << endl;
	}
	/*This program will calculate the future value of an account after coumpound monthly interest.
Enter the account's present value: $100
Enter montly interest rate: 3.5
Enter the amount of months that the money will be left in the account: 3
The account's future value is: $110.87
----------------------------------
Do you want to redo the program? (Y/N) Y
This program will calculate the future value of an account after coumpound monthly interest.
Enter the account's present value: $15675
Enter montly interest rate: 3.5
Enter the amount of months that the money will be left in the account: 4
The account's future value is: $17987.42
----------------------------------
Do you want to redo the program? (Y/N) N

C:\Users\antho\source\repos\Project3\Debug\Project3.exe (process 21056) exited with code 0.
Press any key to close this window . . .
*/
	