#include<iostream>
#include<iomanip>
using namespace std;
//Programa que calcula el tax en una compra
//CECS2200 09 Anthony Colon Dominguez #108365
int main()
{
    float  price_of_purchase, state_tax, county_tax, total_sales_tax;

    cout << "Enter total price of purchase:";
    cin >> price_of_purchase;

    cout << "Enter state sales tax:";
    cin >> state_tax;

    cout << "Enter county salex tax:";
    cin >> county_tax;
    /* if (price_of_purchase < 0 || state_tax < 0 || county_tax  < 0)
   {
       cout << "Error only positive numbers!" << endl;
   }*/
    if (price_of_purchase > 0) {
        if (state_tax > 0) {
            if (county_tax > 0) {
                total_sales_tax = price_of_purchase * (county_tax + state_tax) / 100.0;
                cout << setprecision(2) << fixed << showpoint;
                cout << "The total tax is: $" << total_sales_tax << endl;
            }
        }
    }
    if (price_of_purchase < 0) {
        cout << "Error price of the purchase can only be positive numbers!" << endl;
    }
    if (state_tax < 0) {
        cout << "Error the state tax only be positive numbers!" << endl;
    }
    if (county_tax < 0){
        cout << "Error the county tax can only be positive numbers!" << endl;
        
    }

    system("pause");
    return 0; 
}
/*Enter total price of purchase:95
Enter state sales tax:4
Enter county salex tax:2
The total tax is: $5.70
Press any key to continue . . .*/

/*Enter total price of purchase:-95
Enter state sales tax:4
Enter county salex tax:2
Error price of the purchase can only be positive numbers!
Press any key to continue . . .*/

/*Enter total price of purchase:95
Enter state sales tax:-4
Enter county salex tax:2
Error the state tax only be positive numbers!
Press any key to continue . . .*/

/*Enter total price of purchase:95
Enter state sales tax:-4
Enter county salex tax:2
Error the state tax only be positive numbers!
Press any key to continue . . .*/