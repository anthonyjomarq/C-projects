//This program calculates a cylindrical fuel tank
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float volume, r, b;

    cout << "What is the radious of the tank?: ";
    cin >> r;

    // Get the height of the tank
    cout << "What is the height of the tank?: ";
    cin >> b;

    volume = 3.1415 * pow(r, 2.0) * b;
    cout << fixed << showpoint << setprecision(4);


    //Display volume
    cout << "The volume of the cylindrical fuel tank is " << volume << endl;
    system("pause");
    return 0;
}
/* What is the radious of the tank?: 5.2
What is the height of the tank?: 12.42
The volume of the cylindrical fuel tank is 1055.0313
Press any key to continue . . . */
