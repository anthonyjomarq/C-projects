#include<iostream>
#include<iomanip>
using namespace std;
//Programa que calcular cantidad de ingredientes para hacer x galletas
//CECS2200 09 Anthony Colon Dominguez #108365
int main()
{
    float  cookies, sugar, butter, flour;
    const int COOKIES = 48;
    cout << "How many cookies do you want to make?";
    cin >> cookies;
    if (cookies > 0) {
        sugar = (1.5 * cookies) / COOKIES;
        butter = (1 * cookies) / COOKIES;
        flour = (2.75 * cookies) / COOKIES;
        cout << fixed << showpoint << setprecision(3);

        cout << "The amount of cups needed of sugar is " << sugar << endl;
        cout << "The amount of cups needed of butter is " << butter << endl;
        cout << "The amount of cups needed of flour is " << flour << endl;
    } //end if
    if (cookies <= 0) {
        cout << "Error the amount of cookies can only be possitive numbers!" << endl;
    } //end if 
    system("pause");
    return 0;
}
/*How many cookies do you want to make?46
The amount of cups needed of sugar is 1.44
The amount of cups needed of butter is 0.96
The amount of cups needed of flour is 2.64
Press any key to continue . . .

How many cookies do you want to make?-23
Error the amount of cookies can only be possitive numbers!
Press any key to continue . . .

How many cookies do you want to make ? 0
Error the amount of cookies can only be possitive numbers!
Press any key to continue . . .*/