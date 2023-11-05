// This program uses overloaded functions.
#include <iostream>
#include <iomanip>
using namespace std;

int square(int);
double square(double);

int main()
{
    int userInt;
    double userFloat;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter an integer and a floating-point value: ";
    cin >> userInt >> userFloat;

    // Display their squares.
    cout << "Here are their squares: ";
    cout << square(userInt) << " and " << square(userFloat);
    return 0;
}

int square(int number)
{
    return number * number;
}

double square(double number)
{
    return number * number;
}