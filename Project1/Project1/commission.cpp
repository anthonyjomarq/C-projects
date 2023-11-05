#include<iostream>
using namespace std;
int main()
{
    float sales;
    cout << "Enter the value of sales: $";
    cin >> sales;
    if (sales >= 0) {
        if (sales < 10000) {
            cout << "Commission Rate is 10%.\n";
        }
        else if (sales >= 10000 && sales <= 15000) {
            cout << "Commission Rate is 15%.\n";
        }
        else {
            cout << "commission Rate is 20%.\n";
        }
    }
    else {
        cout << "Error only positive numbers.\n";
    }
    system("pause");
    return 0;
}
/*Enter the value of sales: $-4300
Error only positive numbers.
Press any key to continue . . .*/

/*Enter the value of sales: $9750.56
Commission Rate is 10%.
Press any key to continue . . .*/

/*Enter the value of sales: $12362.42
Commission Rate is 15%.
Press any key to continue . . .*/

/*Enter the value of sales: $16758.33
commission Rate is 20%.
Press any key to continue . . .*/