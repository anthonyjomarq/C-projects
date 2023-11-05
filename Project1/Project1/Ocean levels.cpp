#include<iostream>
#include<iomanip>
using namespace std;
//Programa que calcula cuanto el mar va a subir en 5, 7 y 10 años
//CECS2200 09 Anthony Colon Dominguez #108365
int main() {
    
    float rise = 1.5;

    cout << "The ocen will rise " << rise * 5;
    cout << " millimeters after 5 years." << endl;
    cout << "The ocean will rise " << rise * 7;
    cout << " millimeters after 7 years." << endl;
    cout << "The ocean will rise " << rise * 10;
    cout << " millimeters after 10 years." << endl;
    cout << endl;

    system("pause");
    return 0;
}
/*The ocen will rise 7.5 millimeters after 5 years.
The ocean will rise 10.5 millimeters after 7 years.
The ocean will rise 15 millimeters after 10 years.

Press any key to continue . . .*/