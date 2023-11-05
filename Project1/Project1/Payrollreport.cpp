/*Payroll Report

Write a program that displays a weekly payroll report.A loop in the program should ask the user for the employee number, gross pay, state tax, 
federal tax, and FICA withholdings.The loop will terminate when 0 is entered for the employee number. After the data is entered, the program should display totals for gross pay, state tax, federal tax, FICA withholdings, and net pay.*/
#include <iostream>
#include <iomanip>
using namespace::std;

int main()
{
	int number; 
    double grosspay, statetax, federaltax, FICA, net;

	do {
		cout << fixed << showpoint << setprecision(2);
		cout << "\tPayroll Report\n";
		cout << "Enter employee # (Enter 0 to end): ";
		cin >> number;
		if (number != 0) {
			cout << "\nEnter gross pay: $";
			cin >> grosspay;
			cout << "\nEnter state tax: ";
			cin >> statetax;
			cout << "\nEnter federal tax: ";
			cin >> federaltax;
			cout << "\nEnter FICA withholdings: ";
			cin >> FICA;
			cout << "Gross pay: $" << grosspay << endl;
			statetax = statetax * grosspay / 100.0;
			cout << "-State tax: -$" << statetax << endl;
			federaltax = federaltax * grosspay / 100.0;
			cout << "-Federal tax: -$" << federaltax << endl;
			FICA = grosspay * FICA / 100.0;
			cout << "-FICA withholdings: -$" << FICA << endl;
			net = grosspay - statetax - federaltax - FICA;
			cout << "Net pay: = $" << net << endl;
		}
		else {
			cout << "Bye!!" << endl;
		}
	} while (number != 0);
	system("pause");
	return 0;
}
/*        Payroll Report
Enter employee # (Enter 0 to end): 500

Enter gross pay: $500

Enter state tax: 2

Enter federal tax: 2

Enter FICA withholdings: 1
Gross pay: $500.00
-State tax : -$10.00
-Federal tax : -$10.00
-FICA withholdings : -$5.00
Net pay: = $475.00
        Payroll Report
Enter employee # (Enter 0 to end): 0
Bye!!
Press any key to continue . . .*/