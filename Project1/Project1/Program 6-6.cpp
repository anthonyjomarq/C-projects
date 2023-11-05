// This program demonstrates a function with a parameter.
#include <iostream>
using namespace std;

// Function Prototype
void displayValue(int);

int main()
{
    cout << "I am passing 5 to displayValue.\n";
    displayValue(5); // Call displayValue with argument 5
    cout << "Now I am back in main.\n";
    return 0;
}
void displayValue(int num)
{
    cout << "The value is " << num << endl;
}

 /*I am passing 5 to displayValue.
The value is 5
Now I am back in main.

C:\Users\antho\source\repos\Project1\Debug\Project1.exe (process 11548) exited with code 0.
Press any key to close this window . . .
*/