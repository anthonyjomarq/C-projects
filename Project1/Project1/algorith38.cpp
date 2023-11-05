#include <iostream>
using namespace std;

int main()
{
    int i = 0, num, total = 0;

    while (i < 10)
    {
        cout << "Enter a number: ";
        cin >> num;
        while (num < 0) {
            cout << "Error, the value entered can only be positive integers\n";
            cout << "Enter a number: ";
            cin >> num;
        }
        total += num;
        i++;
    }

    cout << "Total: " << total << endl;

    return 0;
}

/*Enter a number: 23
Enter a number: -4
Error, the value entered can only be positive integers
Enter a number: 43
Enter a number: -3
Error, the value entered can only be positive integers
Enter a number: 58
Enter a number: 1
Enter a number: 2
Enter a number: 3
Enter a number: 4
Enter a number: 5
Enter a number: 6
Enter a number: 7
Total: 152

C:\Users\antho\source\repos\Project1\Debug\Project1.exe (process 19980) exited with code 0.
Press any key to close this window . . .
*/