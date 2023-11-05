#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
	int checks;
    const double twentyless = .10, twentytothirtynine = .08, fortytofiftynine = .06, sixtymore = .04, under = 15;
    double balance, monthly = 10 ;

    cout << "What is the balance of the account? ";
    cin >> balance;
    cout << "Enter the number of checks written: ";
    cin >> checks;

    if (balance < 0) {
        cout << "URGENT MESSAGE: the account is overdrawn.\n";
    }
    if (balance < 400) {
        monthly += under;
    }
    if (checks < 0) {
        cout << "Error only positive numbers of checks written.\n";
    }
    else {
        cout << setprecision(2) << fixed << showpoint << endl;
        if (checks >= 0 && checks < 20) {
            monthly += (checks * twentyless);
        }
        else {
            if (checks >= 20 && checks <= 39) {
                monthly += (checks * twentytothirtynine);
            }
            else {
                if (checks >= 40 && checks <= 59) {
                    monthly += (checks * fortytofiftynine);
                }
                else {
                    if (checks >= 60) {
                        monthly += (checks * sixtymore);
                    }
                }
            }
        }
        cout << "The bank’s service fees for the month is $ " << monthly << endl; 
        system("pause");
        return 0;
    }
}
/*What is the balance of the account? 395
Enter the number of checks written: 10

The bankÆs service fees for the month is $ 26.00
Press any key to continue . . .*/

/*What is the balance of the account? 400
Enter the number of checks written: 30

The bankÆs service fees for the month is $ 12.40
Press any key to continue . . .*/

/*What is the balance of the account? 400
Enter the number of checks written: 50

The bankÆs service fees for the month is $ 13.00
Press any key to continue . . .*/

/*What is the balance of the account? 400
Enter the number of checks written: 80

The bankÆs service fees for the month is $ 13.20
Press any key to continue . . .*/

