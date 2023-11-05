// This program uses the modulus operator to determine 
// if a number is odd or even. If the number is evenly divisible 
// by 2, it is an even number. A remainder indicates it is odd. 
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer and I will tell you if it\n";
    cout << "is odd or even. ";
    cin >> number;
    if (number % 2 == 0) {
        cout << number << " is even.\n";
    }
    else {
        cout << number << " is odd.\n";
    }
    system("pause");
    return 0;
}
/*Enter an integer and I will tell you if it
is odd or even. 17
17 is odd.
Press any key to continue . . .*/

/*Enter an integer and I will tell you if it
is odd or even. 20
20 is even.
Press any key to continue . . .*/