#include <iostream>
#include "SavingsAccount.h"
using namespace::std;
int main()
{
    char choice = 'y';
    int d, c;
    cout << "Input the initial dollars: $";
    cin >> d;
    cout << "Input the initial cents: ¢";
    cin >> c;
    SavingsAccount a(d, c);
    cout << "Would you like to make a deposit(Y or y for yes)?";
    cin >> choice;
    while (choice == 'y' || choice == 'Y')
    {
        cout << "Input the dollars to be deposited: $";
        cin >> d;
        cout << "Input the cents to be deposited: ¢";
        cin >> c;
        a.deposit(d, c);
        a.showBalance();
        cout << "Would you like to make another deposit(Y or y for yes)?";
        cin >> choice;
    }
    cout << "Would you like to make a withdrawal(Y or y for yes)?";
    cin >> choice;
    while (choice == 'y' || choice == 'Y')
    {
        cout << "Input the dollars to be withdrawn: $";
        cin >> d;
        cout << "Input the cents to be withdrawn: ¢";
        cin >> c;
        a.withdrawal(d, c);
        cout << "Would you like to make another withdrawal(Y or y for yes)?";
        cin >> choice;
    }
    cout << "Balance: ";
    a.showBalance();

    system("pause");
    return 0;
}