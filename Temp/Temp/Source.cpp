#include <iostream>
#include <ctime>
#include <time.h>

using namespace std;
bool isLeap(int year) {
    bool leap = false;
    // if any year is divisable by 4 than there are many chances for leap
    // year except few
    if (year % 4 == 0) {
        // if it is divisable by 100 than it shoud also divisable by 400
        // like 2000 etc
        if (year % 100 == 0) {
            // year is divisible by 400, so the year is a leap year
            if (year % 400 == 0)
                leap = true;
            else
                leap = false;
        }
        else
            leap = true;
    }
    else
        leap = false;
    return leap;
}


int getDays(int mm, int aYy) {
    int res = -1;
    switch (mm) {
    case 1:
        res = 31;
        break;
    case 2:
        if (isLeap(aYy))
            res = 29;
        else
            res = 28;
        break;
    case 3:
        res = 31;
        break;
    case 4:
        res = 30;
        break;
    case 5:
        res = 31;
        break;
    case 6:
        res = 30;
        break;
    case 7:
        res = 31;
        break;
    case 8:
        res = 31;
        break;
    case 9:
        res = 30;
        break;
    case 10:
        res = 31;
        break;
    case 11:
        res = 30;
        break;
    case 12:
        res = 31;
        break;

    }
    return res;
}

int main()
{
    int month, year;
    string arr[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September",
               "October", "November", "December" };

    cout << "\n\t*{Hello there, This program will determine the number of days in a month for a specified month and year}*\n" << endl;
    cout << "Enter the month you want to know the days: " << endl;
    cin >> month;
    cout << "Enter the year you want to know the days: " << endl;
    cin >> year;
    cout << "\n****Information****" << endl;

    cout << "The month " << month << " of " << year << " had ";
    cout << getDays(month, year) << " days" << endl;
    /*time_t theTime = time(NULL);
    struct tm* aTime = localtime(&theTime);
    month = aTime->tm_mon + 1; // Month is 0 - 11, add 1 to get a jan-dec 1-12 concept
    year = aTime->tm_year + 1900;*/
    month = 10;
    year = 2020;
    cout << "The current month, " << arr[month - 1] << " " << year << ", " << "has " << getDays(month + 1, year) << " days." << endl;

    cout << "\n***********" << endl;
    return 0;
}