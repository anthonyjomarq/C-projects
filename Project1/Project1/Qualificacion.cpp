//This program demonstrates a variable defined in an inner block.
#include <iostream>   
using namespace std;

int main()
{
    // Constants for minimum income and years 
    const double MIN_INCOME = 35000.0;
    const int MIN_YEARS = 5;
    double income;

    do {
        // Get the annual income. 
        cout << "What is your annual income? ";
        cin >> income;
        if (income <= 0) {
            cout << "Error only positive values!\n";
        }

    } while (income <= 0);
    if (income >= MIN_INCOME)
    {
        // Get the number of years at the current job. 
        cout << "How many years have you worked at your current job? ";
        int years;  // Variable definition 
        cin >> years;
        while (years < 0) {
            cout << "Error, the years must be positive numbers!\n";
            cout << "How many years have you worked at your current job? ";
            cin >> years;
        }
        if (years >= 0) {
            if (years > MIN_YEARS) {
                cout << "You qualify.\n";
            }
            else
            {
                cout << "You must have been employed for more than " << MIN_YEARS << " years to qualify.\n";
            }
        }
        else
        {
            cout << "You must earn at least $" << MIN_INCOME << " to qualify.\n";
        }
    }
    system("pause");
    return 0;

    
}
    

