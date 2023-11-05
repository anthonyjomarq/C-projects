#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double fanhrenheit;
    int n, celsius = 0;
    
    do {
        cout << "Enter the amount of conversions youd like : ";
        cin >> n;
        if (n <= 0) {
            cout << "Error, the number you entered needs to be more than 0. \n";
        }
    } while (n <= 0);
    cout << "Celsius\t\tFahrenheit" << endl;
    cout << "--------------------------------------\n";
  
    while (celsius < n)
    {
        // Calculate Fahrenheit
        celsius++;
        //T(°F) = T(°C) × 9 / 5 + 32
        cout << fixed << showpoint << setprecision(1) << endl;
        fanhrenheit = (celsius * 9.0 )/5.0 + 32;
        cout << setw(2) << celsius << "\t\t" << fanhrenheit << endl;
    }
    cout << "--------------------------------------\n";

    return 0;
}
/*Enter the amount of conversions youd like : -6
Error, the number you entered needs to be more than 0.
Enter the amount of conversions youd like: 0
Error, the number you entered needs to be more than 0.
Enter the amount of conversions youd like: 5
Celsius         Fahrenheit
--------------------------------------

 1              33.8

 2              35.6

 3              37.4

 4              39.2

 5              41.0
--------------------------------------

C:\Users\antho\source\repos\Project1\Debug\Project1.exe (process 21320) exited with code 0.
Press any key to close this window . . .
*/