#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
	int account;
	float newbalance, balance, charges, limit, used;

	do {
		cout << fixed << showpoint << setprecision(2);
		cout << "\n\tCredit limit program\n"
			<< "Enter the account number(Enter -1 to end):";
		cin >> account;
		if (account != -1) {
			cout << "\nEnter the balance at the beginning of the month: $";
			cin >> balance;
			cout << "\nEnter total of charges this month: $";
			cin >> charges;
			cout << "\nEnter total of credit applied to the account this month: $";
			cin >> used;
			cout << "\n Enter the allowed credit limit: $";
			cin >> limit;
			newbalance = balance + charges - used;
			if (newbalance > limit) {
				cout << "Account number: #" << account << endl;
				cout << "Credit limit: $" << limit << endl;
				cout << "New balance: $" << newbalance << endl;
				cout << "Credit Limit Exceeded." << endl;
			}
			else {
				cout << "Account number: #" << account << endl;
				cout << "Credit limit: $" << limit << endl;
				cout << "New balance: $" << newbalance << endl;
			}
		}
		else {
			cout << "Bye!!" << endl;

		}
	} while (account != -1);
	system("pause");
	return 0;
}
/*Credit limit program
Enter the account number(Enter -1 to end):1

Enter the balance at the beginning of the month: $40

Enter total of charges this month: $10

Enter total of creddit applied to the account this month: $30

 Enter the allowed credit limit: $100
Account number: #1
Credit limit: $100.00
New balance: $20.00

        Credit limit program
Enter the account number(Enter -1 to end):-1
Bye!!
Press any key to continue . . .*/