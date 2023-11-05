#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    string runner1, runner2, runner3;
    float time1, time2, time3;

    cout << "\nEnter the name of runner #1: ";
    cin >> runner1;

    cout << "\nHow much time in seconds did it take for " << runner1 << " to finish: ";
    cin >> time1;

    cout << "\nEnter the name of runner #2: ";
    cin >> runner2;

    cout << "\nHow much time in seconds did it take for " << runner2 << " to finish: ";
    cin >> time2;

    cout << "\nEnter the first name of runner #3: ";
    cin >> runner3;

    cout << "\nHow much time in seconds dit it take for " << runner3 << " to finish: " << endl;
    cin >> time3;

    if (time1 < 0 or time2 < 0 or time3 < 0) {
        cout << "Error. The times must be 0 or greater." << endl;
    }
    //Runner 1 first place
    else {
        if (time1 < time2 and time1 < time3)
        {
            cout << "First place: " << runner1 << endl;
            if (time2 < time3)
            {
                cout << "Second place: " << runner2 << endl;
                cout << "Third place: " << runner3 << endl;
            }
            else
            {
                cout << "Second place: " << runner3 << endl;
                cout << "Third place: " << runner2 << endl;

            }
        }
        //Runner 2 first place
        else if (time2 < time1 and time2 < time3)
        {
            cout << "First place: " << runner2 << endl;
            if (time1 < time3)
            {
                cout << "Second place: " << runner1 << endl;
                cout << "Third place: " << runner3 << endl;
            }
            else
            {
                cout << "Second place: " << runner3 << endl;
                cout << "Third place: " << runner1 << endl;

            }
        }
        //Runner 3 first place
        else
        {
            cout << "First place: " << runner3 << endl;
            if (time1 < time2)
            {
                cout << "Second place: " << runner1 << endl;
                cout << "Third place: " << runner2 << endl;
            }
            else
            {
                cout << "Second place: " << runner2 << endl;
                cout << "Third place: " << runner1 << endl;

            }
        }
    }
    system("pause");
    return 0;
}
/*Enter the name of runner #1: Talavera

How much time in seconds did it take for Talavera to finish: 40

Enter the name of runner #2: Andrew

How much time in seconds did it take for Andrew to finish: 41

Enter the first name of runner #3: Anthony

How much time in seconds dit it take for Anthony to finish:
42
First place: Talavera
Second place: Andrew
Third place: Anthony
Press any key to continue . . .*/

/*Enter the name of runner #1: Talavera

How much time in seconds did it take for Talavera to finish: 41

Enter the name of runner #2: Andrew

How much time in seconds did it take for Andrew to finish: 40

Enter the first name of runner #3: Anthony

How much time in seconds dit it take for Anthony to finish:
42
First place: Andrew
Second place: Talavera
Third place: Anthony
Press any key to continue . . .*/

/*Enter the name of runner #1: Talavera

How much time in seconds did it take for Talavera to finish: 42

Enter the name of runner #2: Andrew

How much time in seconds did it take for Andrew to finish: 41

Enter the first name of runner #3: Anthony

How much time in seconds dit it take for Anthony to finish:
40
First place: Anthony
Second place: Andrew
Third place: Talavera
Press any key to continue . . .*/