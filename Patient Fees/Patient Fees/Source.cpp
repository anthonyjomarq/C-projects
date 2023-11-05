#include<iostream>
using namespace::std;
//Anthony J. Colon Domignguez #108365
class PatientAccount {
public:
    float rate;
    int days;
    float patientcharges(float rate, int days) {
        int cost;
        cost = rate * days;
        return cost;
    }
};
class Surgery {
public:
    int arr[5] = { 2300,16500,13000,20000,24000 };
};
class Pharmacy {
public:
    float phar[5] = { 2,5,4,4,5 };
};
int main() {
    float totalcharge, pharcharge = 0, surcharge = 0;
    char option;
    int choice;
    PatientAccount P; 
    Surgery S; 
    Pharmacy Ph; 
    
    do{
        cout << "\t\tHospital\n";
        cout << "Choose the type of Surgery from the list below:\n"
            << "1)Cataract Removal\n"
            << "2)Joint Replacement\n"
            << "3)Hysterectomy\n"
            << "4)Angioplasty\n"
            << "5)Gallbladder Removal\n";
        cout << "Enter choice:";
        cin >> choice;
        if (choice < 1 || choice > 5) {
            cout << "The choice must be between 1 and 5." << endl;
        }
    } while (choice < 1 || choice > 5);
    surcharge = S.arr[choice - 1];
    do {
        cout << "\nChoose the type of medication from the list below:\n"
            << "1)Vicodin\n"
            << "2)Simvastatin\n"
            << "3)Lisinopril\n"
            << "4)Levothyroxine\n"
            << "5)Azithromycin\n";
        cout << "Enter choice:";
        cin >> choice;
        if (choice < 1 || choice > 5) {
            cout << "The choice must be between 1 and 5." << endl;
        }
    } while (choice < 1 || choice > 5);
    pharcharge = Ph.phar[choice - 1];

    cout << "\nEnter the rate per day of the hospital: $";
    cin >> P.rate;
    cout << "Enter the number of days the patient stays at the hospital: ";
    cin >> P.days;

    cout << "\nDoes the patient want to check out or not(Y/N): ";
    cin >> option;
    if (option == 'Y' || option == 'y')
    {
        totalcharge = P.patientcharges(P.rate, P.days);
        totalcharge = totalcharge + pharcharge + surcharge;
        cout << "The total charge of the hospital is: $" << totalcharge; 
    }
    else
    {
        cout << " The Patient does not want to check out now..."; 
        return 0;
    }

    return 0;
}