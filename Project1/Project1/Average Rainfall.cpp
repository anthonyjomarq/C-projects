#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int years, total =0;
	double average, in;
	do {
		cout << "This program calculates average rain fall.\n"
			<< "What is the number of years you are going to calculate? ";
		cin >> years;
		if (years < 1) {
			cout << "Error, the value cannot be less than 1!" << endl;
		}
	} while (years < 1);
	for (int n = 1; n <= years; n++) {
		cout << "Year: " << n << endl;
		for (int k = 1; k <= 12; k++) {
			do {
				cout << "Enter the inches of rainfall for month " << k << ": ";
				cin >> in;
				if (in < 0) {
					cout << "Error, the value cannot be negative!" << endl;
				}
				else {
					total += in;
				}
			} while (in < 0);
		}
	}
	cout << fixed << showpoint << setprecision(2);
	average = total / (years * 12.0);
	cout << "\nAmount of months calculated: " << years * 12.0 << endl;
	cout << "The total inches of rainfall during this entire period is " << total << endl;
	cout << "The average rainfall per month for the entire period is " << average << "in." << endl;
	system("pause");
	return 0;
}
/*This programa calculates average rain fall.
What is the number of years you are going to calculate? -1
Error, the value cannot be less than 1!
This programa calculates average rain fall.
What is the number of years you are going to calculate? 1
Year: 1
Enter the inches of rainfall for month 1: -2
Error, the value cannot be negative!
Enter the inches of rainfall for month 1: 30
Enter the inches of rainfall for month 2: 35
Enter the inches of rainfall for month 3: 67
Enter the inches of rainfall for month 4: 45
Enter the inches of rainfall for month 5: 46
Enter the inches of rainfall for month 6: 35
Enter the inches of rainfall for month 7: 75
Enter the inches of rainfall for month 8: 43
Enter the inches of rainfall for month 9: 83
Enter the inches of rainfall for month 10: 54
Enter the inches of rainfall for month 11: 50
Enter the inches of rainfall for month 12: 31

Amount of months calculated: 12.00
The total inches of rainfall during this entire period is 594
The average rainfall per month for the entire period is 49.50in.
Press any key to continue . . .*/
/*This programa calculates average rain fall.
What is the number of years you are going to calculate? -1
Error, the value cannot be less than 1!
This programa calculates average rain fall.
What is the number of years you are going to calculate? 1
Year: 1
Enter the inches of rainfall for month 1: 43
Enter the inches of rainfall for month 2: 67
Enter the inches of rainfall for month 3: 43
Enter the inches of rainfall for month 4: 78
Enter the inches of rainfall for month 5: 34
Enter the inches of rainfall for month 6: 67
Enter the inches of rainfall for month 7: 56
Enter the inches of rainfall for month 8: 76
Enter the inches of rainfall for month 9: 78
Enter the inches of rainfall for month 10: 56
Enter the inches of rainfall for month 11: 45
Enter the inches of rainfall for month 12: 32

Amount of months calculated: 12.00
The total inches of rainfall during this entire period is 675
The average rainfall per month for the entire period is 56.25in.
Press any key to continue . . .*/
/*This programa calculates average rain fall.
What is the number of years you are going to calculate? 2
Year: 1
Enter the inches of rainfall for month 1: -4
Error, the value cannot be negative!
Enter the inches of rainfall for month 1: 51
Enter the inches of rainfall for month 2: 65
Enter the inches of rainfall for month 3: 49
Enter the inches of rainfall for month 4: 53
Enter the inches of rainfall for month 5: 70
Enter the inches of rainfall for month 6: 65
Enter the inches of rainfall for month 7: 71
Enter the inches of rainfall for month 8: 45
Enter the inches of rainfall for month 9: 81
Enter the inches of rainfall for month 10: 70
Enter the inches of rainfall for month 11: 55
Enter the inches of rainfall for month 12: 32
Year: 2
Enter the inches of rainfall for month 1: 45
Enter the inches of rainfall for month 2: 47
Enter the inches of rainfall for month 3: 50
Enter the inches of rainfall for month 4: 34
Enter the inches of rainfall for month 5: 72
Enter the inches of rainfall for month 6: 55
Enter the inches of rainfall for month 7: 48
Enter the inches of rainfall for month 8: 68
Enter the inches of rainfall for month 9: 55
Enter the inches of rainfall for month 10: 63
Enter the inches of rainfall for month 11: 32
Enter the inches of rainfall for month 12: 31

Amount of months calculated: 24.00
The total inches of rainfall during this entire period is 1307
The average rainfall per month for the entire period is 54.46in.
Press any key to continue . . .*/