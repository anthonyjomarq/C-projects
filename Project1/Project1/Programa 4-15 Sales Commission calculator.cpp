#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
	float sales, salary;

	cout << "Enter sales in dollars (-1 to end): $";
	cin >> sales;
	while (sales != -1) {
		cout << fixed << showpoint << setprecision(2) << endl;
		salary = 200 + (9.0 / 100.0) * sales;
		cout << "Salary is: $" << salary << endl;
		cout << "Enter sales in dollars (-1 to end): $";
		cin >> sales;
	}
	system("pause");
	return 0; 
}
