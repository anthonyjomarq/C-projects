#include<iostream>
#include<iomanip>

using namespace::std;

int main()
{
    int choice;
    double distance, time;
    const double AIR = 1100,
        WATER = 4900,
        STEEL = 16400;

    const int AIR_CHOICE = 1,
        WATER_CHOICE = 2,
        STEEL_CHOICE = 3,
        QUIT_CHOICE = 4;
    cout << "\t\tThe speed of sound: Medium Menu\n\n"
        << "1. Air medium\n"
        << "2. Water medium\n"
        << "3. Steel medium\n"
        << "4. Quit the program\n\n"
        << "Enter your choice: ";
    cin >> choice;
    cout << setprecision(4) << fixed << showpoint;
    switch (choice) {
         case AIR_CHOICE:
            cout << "Enter the distance in feet that the sound will be traveled in the selected medium: ";
            cin >> distance;
            if (distance >= 0)
            {
                time = distance / AIR;
                cout << "The sound wave will take " << time;
                cout << " seconds to travel." << endl;
            }
            else
            {
                cout << "Error, the distance can not be less than 0!" << endl;
            }
            break;
         case WATER_CHOICE:
             cout << "Enter the distance in feet a sound will traveled in the selecected medium: ";
             cin >> distance;
             if (distance >= 0)
             {
                 time = distance / WATER;
                 cout << "The sound wave will take " << time;
                 cout << " seconds to travel." << endl;
             }
             else
             {
                 cout << "Error, the distance can not be less than 0!" << endl;
             }
             break;
         case STEEL_CHOICE:
             cout << "Enter the distance in feet a sound will traveled in the selecected medium: ";
             cin >> distance;
             if (distance >= 0)
             {
                 time = distance / STEEL;
                 cout << "The sound wave will take " << time;
                 cout << " seconds to travel." << endl;
             }
             else
             {
                 cout << "Error, the distance can not be less than 0!" << endl;
             }
             break;
         case QUIT_CHOICE:
             cout << "Program ending.\n";
             break;
         default:
             cout << "The valid choices are 1 through 4. Run the\n"
                  << "program again and select one of those.\n\n";


    }
    system("pause");
    return 0;
}
/*                The speed of sound: Medium Menu

1. Air medium
2. Water medium
3. Steel medium
4. Quit the program

Enter your choice: 1
Enter the distance in feet that the sound will traveled in the selected medium: 10
The sound wave will take 0.0091 seconds to travel.
Press any key to continue . . .*/

/*                The speed of sound: Medium Menu

1. Air medium
2. Water medium
3. Steel medium
4. Quit the program

Enter your choice: 5
The valid choices are 1 through 4. Run the
program again and select one of those.

Press any key to continue . . .*/

/*                The speed of sound: Medium Menu

1. Air medium
2. Water medium
3. Steel medium
4. Quit the program

Enter your choice: 1
Enter the distance in feet that the sound will traveled in the selected medium: -10
Error, the distance can not be less than 0!
Press any key to continue . . .*/

/*                The speed of sound: Medium Menu

1. Air medium
2. Water medium
3. Steel medium
4. Quit the program

Enter your choice: 2
Enter the distance in feet a sound will traveled in the selecected medium: 10
The sound wave will take 0.0020 seconds to travel.
Press any key to continue . . .*/