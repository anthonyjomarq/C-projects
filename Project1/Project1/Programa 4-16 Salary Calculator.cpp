#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
	double rate, grossPay, hours;
	cout << "Enter hours worked (-1 to end): ";
	cin >> hours;
	while (hours != -1.0) {
		cout << fixed << showpoint << setprecision(2);
		cout << "Enter hourly rate of the employee ($00.00): ";
		cin >> rate;
		if (hours <= 40) {
			grossPay = hours * rate;
			cout << "Salary is: $" << grossPay << "\n" << endl;
			cout << "Enter hours worked (-1 to end): ";
			cin >> hours;
		}
		else {
			grossPay = (hours - 40) * (1.5 * rate) + (40 * rate);
			cout << "Salary is: $" << grossPay << "\n" << endl;
		    cout << "Enter hours worked (-1 to end): ";
			cin >> hours;
		}
	}
	if (hours == -1.0) {
		cout << "Bye!!" << endl;
	}
	system("pause");
	return 0;
}
/*Enter hours worked (-1 to end): 39
Enter hourly rate of the employee ($00.00): 10.00
Salary is: $390.00

Enter hours worked (-1 to end): 40
Enter hourly rate of the employee ($00.00): 10.00
Salary is: $400.00

Enter hours worked (-1 to end): 41
Enter hourly rate of the employee ($00.00): 10.00
Salary is: $415.00

Enter hours worked (-1 to end): -1
Press any key to continue . . .*/