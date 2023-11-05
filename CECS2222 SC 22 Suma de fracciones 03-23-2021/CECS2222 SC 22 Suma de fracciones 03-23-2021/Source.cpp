#include <iostream>
#include <string>
using namespace std;
// Function prototype
void isValid(int, int);

int main()
{
    int num1, den1, num2, den2, num3, den3; //Dos fracciones
    bool tryAgain;

    cout << "Entre el numerador de la primera fraccion: ";
    cin >> num1;
    cout << "Entre el denominador de la primera fraccion:";
    cin >> den1;
    tryAgain = true;
    while (tryAgain)
    {
        try
        {
            isValid(num1, den1);
            tryAgain = false;
        }
        catch (string exceptionString)
        {
            cout << exceptionString;
            cout << "Entre el denominador de la primera fraccion:";
            cin >> den1;
        }
    } //end While

    cout << "Entre el numerador de la segunda fraccion: ";
    cin >> num2;
    cout << "Entre el denominador de la segunda fraccion:";
    cin >> den2;
    tryAgain = true;
    while (tryAgain)
    {
        try
        {
            isValid(num2, den2);
            tryAgain = false;
        }
        catch (string exceptionString)
        {
            cout << exceptionString;
            cout << "Entre el denominador de la segunda fraccion:";
            cin >> den2;
        }
    } //end while

     //Sumando dos fracciones
    num3 = num1 * den2 + den1 * num2;
    den3 = den1 * den2;
    cout << num1 << "/" << den1 << " + " << num2 << "/" << den2 << " = " << num3 << "/" << den3 << endl;

    system("pause");
    return 0;
}


//*********************************************
//  If the denominator is  zero, the function throws an exception. *
  //*********************************************

void isValid(int numerator, int denominator)
{
    if (denominator == 0) {
        string exceptionString = "ERROR: Cannot divide by zero.\n";
        throw exceptionString;
    } //end if
}

/*Entre el numerador de la primera fraccion: 3
Entre el denominador de la primera fraccion:0
ERROR: Cannot divide by zero.
Entre el denominador de la primera fraccion:4
Entre el numerador de la segunda fraccion: 3
Entre el denominador de la segunda fraccion:0
ERROR: Cannot divide by zero.
Entre el denominador de la segunda fraccion:8
3/4 + 3/8 = 36/32
Press any key to continue . . .*/