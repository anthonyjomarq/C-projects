#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    int month, day, year;
    cout << "This program will display a date in 3 different formats." << endl;
    do {
        cout << "Enter month: ";
        cin >> month;
        if (month < 1 || month > 12) 
            cout << "Error, the value cannot be more than 12 or less than 1!" << endl;
    } while (month < 1 || month > 12);
    do {
        cout << "Enter day: ";
        cin >> day;
        if (day < 1 || day > 31)
            cout << "Error, the value cannot be less than 1 or more than 31!" << endl;
    } while (day < 1 || day > 31);
    cout << "Enter year: ";
    cin >> year;
    Date a(month, day, year);
    a.format1();
    a.format2();
    a.format3();
       
    return 0;
}