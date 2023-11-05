// This program uses a function template.
#include <iostream>
#include <iomanip>
using namespace std;

// Template definition for square function.
template < class T>
T square(T number)
{
    return number * number;
}

template < class T>
void display(T myArray[], int n) {
    for (int index = 0; index < n; index++) {
        cout << myArray[index] << ".";
    }
    cout << endl;
}

int main()
{
    //int userInt; // To hold integer input
    //double userDouble; // To hold double input
    //
    //cout << setprecision(5);
    //cout << "Enter an integer and a floating-point value: ";
    //cin >> userInt >> userDouble;
    //cout << "Here are their squares: ";
    //cout << square(userInt) << " and " << square(userDouble) << endl;

    int myArrayInteger[] = { 5, 4, 3, 8, 9 };
    float MyArrayFloat[] = { 45.8, 23.6, 12.3, 8.9, 1.23 };
    char myArrayChar[] = { 'a', 'e', 'i', 'o', 'u' };
    string myArrayString[] = { "Hola", "mi", "nombre", "es", "Carlos" };

    display(myArrayInteger, 5);
    display(MyArrayFloat, 5);
    display(myArrayChar, 5);
    display(myArrayString, 5);

    return 0;
}