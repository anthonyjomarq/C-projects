#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace::std;

class Date
{
private:
    int month;
    int day;
    int year;
public:
    string monthNames[12] = { "January", "February", "March",
                        "April", "May", "June",
                        "July", "August", "September",
                        "October", "November", "December" };
    Date(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }
    void format1() {
        cout << month << "/" << day << "/" << year;
        cout << endl;
    }

    void format2() {

        cout << monthNames[month - 1] << " ";
        cout << day << ", " << year;
        cout << endl;
    }

    void format3() {
        cout << day << " " << monthNames[month - 1];
        cout << " " << year;
        cout << endl;
    }

};

#endif
