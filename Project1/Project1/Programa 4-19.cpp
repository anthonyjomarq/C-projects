//This program demonstrates a variable defined in an inner block.
#include <iostream>   
using namespace std;

int main()
{
    // Constants for minimum income and years   
    const double MIN_INCOME = 35000.0;
    const int MIN_YEARS = 5;
    double income;
    int years;

    do {
        // Get the annual income. 
        cout << "What is your annual income? ";
        cin >> income;
        if (income <= 0) {
            cout << "Error, the years can't be negative or zero!\n";
        }
    } while (income <= 0);
    if (income >= MIN_INCOME)
    {
        do {
            // Get the number of years at the current job. 
            cout << "How many years have you worked at your current job? ";
            cin >> years;
            if (years <= 0) {
                cout << "Error, years can't be negative or zero!\n";
            }
        } while (years <= 0);
        if (years > MIN_YEARS)
        {
            cout << "You qualify.\n";
        }
        else {
            cout << "You must have been employed for more than " << MIN_YEARS << " years to qualify.\n";
        }
    }
    else
    {
        cout << "You must earn at least $" << MIN_INCOME << " to qualify.\n";
    }
    system("pause");
    return 0;
}
/*What is your annual income? -90
Error, the years can't be negative or zero!
What is your annual income? 34000
You must earn at least $35000 to qualify.
Press any key to continue . . .*/

/*What is your annual income? 36000
How many years have you worked at your current job? -94
Error, years can't be negative or zero!
How many years have you worked at your current job? 4
You must have been employed for more than 5 years to qualify.
Press any key to continue . . .*/

/*What is your annual income? 36000
How many years have you worked at your current job? -90
Error, years can't be negative or zero!
How many years have you worked at your current job? 6
You qualify.
Press any key to continue . . .*/
