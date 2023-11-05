#include<iostream>
#include<iomanip>
using namespace std;
//Programa que calcula 
//CECS2200 09 Anthony Colon Dominguez #108365
int main()
{
    float  price, profit, totalprice;

    cout << "Enter price of the item: $";
    cin >> price;

    cout << "Enter the wanted profit percentage:";
    cin >> profit;

    /* if (price < 0 || profit < 0 )
   {
       cout << "Error only positive numbers!" << endl;
   }*/
    if (price > 0) {
        if (profit > 0) {
            totalprice = (price * profit) / 100.0 + price;
            cout << setprecision(2) << fixed << showpoint;
            cout << "The total price for the item is : $" << totalprice << endl;

        }
    }
    if (price < 0) {
        cout << "Error the price can only be positive numbers!" << endl;
    }
    if (profit < 0) {
        cout << "Error the profit can only be positive numbers!" << endl;
    }
    system("pause");
    return 0;
}
/*Enter price of the item: $14.95
Enter the wanted profit percentage:35
The total price for the item is : $20.18
Press any key to continue . . .*/

/*Enter price of the item: $-14.95
Enter the wanted profit percentage:35
Error the price can only be positive numbers!
Press any key to continue . . .*/

/*Enter price of the item: $14.95
Enter the wanted profit percentage:-35
Error the profit can only be positive numbers!
Press any key to continue . . .*/