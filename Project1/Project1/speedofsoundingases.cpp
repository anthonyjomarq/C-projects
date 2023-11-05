#include<iostream>
#include<iomanip>

using namespace::std;

int main()
{
    int choice;
    double distance, time;
    const double CARBON = 258.0,
                 AIR = 331.5,
                 HELIUM = 972.0,
                 HYDROGEN = 1270.0;

    const int CARBON_CHOICE = 1,
        AIR_CHOICE = 2,
        HELIUM_CHOICE = 3,
        HYDROGEN_CHOICE = 4,
        QUIT_CHOICE = 5;
    cout << "\t\tThe speed of sound in gases: Medium Menu\n\n"
        << "1. Carbon Dioxide medium\n"
        << "2. Air medium\n"
        << "3. Helium medium\n"
        << "4. Hydrogen medium\n"
        << "5. Quit the program\n\n"
        << "Enter your choice: ";
    cin >> choice;
    cout << setprecision(4) << fixed << showpoint;
    switch (choice){
        case CARBON_CHOICE:
            cout << "Enter the time in seconds that the sound traveled in the selected medium: ";
            cin >> time;
            if (time >= 0 && time <= 30)
            {
                distance = time * CARBON;
                cout << "The sound wave will take " << distance;
                cout << " meters to travel to the end point." << endl;
            }
            else
            {
                cout << "Error, the time can not be less than 0 and more than 30!" << endl;
            }
            break;

        case AIR_CHOICE:
            cout << "Enter the time in seconds that the sound traveled in the selected medium: ";
            cin >> time;
            if (time >= 0 && time <= 30)
            {
                distance = time * AIR;
                cout << "The sound wave will take " << distance;
                cout << " meters to travel to the end point." << endl;
            }
            else
            {
                cout << "Error, the time can not be less than 0!" << endl;
            }
            break;
        case HELIUM_CHOICE:
            cout << "Enter the time in seconds that the sound traveled in the selected medium: ";
            cin >> time;
            if (time >= 0 && time <= 30)
            {
                distance = time * HELIUM;
                cout << "The sound wave will take " << distance;
                cout << " meters to travel to the end point." << endl;
            }
            else
            {
                cout << "Error, the time can not be less than 0!" << endl;
            }
            break;
        case HYDROGEN_CHOICE:
            cout << "Enter the time in seconds that the sound traveled in the selected medium: ";
            cin >> time;
            if (time >= 0 && time <= 30)
            {
                distance = time * HYDROGEN;
                cout << "The sound wave will take " << distance;
                cout << " meters to travel to the end point." << endl;
            }
            else
            {
                cout << "Error, the time can not be less than 0!" << endl;
            }
            break;
        case QUIT_CHOICE:
            cout << "Program ending.\n";
            break;
        default:
            cout << "The valid choices are 1 through 5. Run the\n"
                 << "program again and select one of those.\n\n";
            break;
 
    }
    system("pause");
    return 0;
}