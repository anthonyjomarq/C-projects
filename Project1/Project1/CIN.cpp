// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.
// Anthony J. Colon Dominguez #108365 CECS2203-21
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int quantity; // contains the amount of items purchased
    float itemPrice; // contains the price of each item
    float totalBill; // contains the total bill.

    cout << setprecision(2) << fixed << showpoint; // formatted output
    cout << "Please input the number of items bought: " << endl;
    // Fill in the input statement to bring in the quantity.
    cin >> quantity;
    // Fill in the prompt to ask for the price.
    cout << "What is the price of the item? $";
    // Fill in the input statement to bring in the price of each item.
    cin >> itemPrice;
    // Fill in the assignment statement to determine the total bill.
    totalBill = quantity * itemPrice;
    // Fill in the output statement to print total bill,
    // with a label to the screen.
    cout << "Total bill: $" << totalBill << endl;
    return 0;
}
//Primeros resultados
/*Please input the number of items bought:
22
What is the price of the item? $10.98
Total bill: $241.56

C:\Users\antho\source\repos\Project1\Debug\Project1.exe (process 15824) exited with code 0.
Press any key to close this window . . .
//Segundo resultados
/*Please input the number of items bought:
22
What is the price of the item? $10.98
Total bill: $2.4e+02

C:\Users\antho\source\repos\Project1\Debug\Project1.exe (process 9860) exited with code 0.
Press any key to close this window . . .
*/
//What do you think the fixed attribute in the cout statement does?
/*Well, as we can see the fixed atrribute in the cout statement changes the result and shows the exact digits in the decimal part specified by the setprecision. */
//Terceros resultados
/*Please input the number of items bought:
22
What is the price of the item? $10.98
Total bill: $241.5600

C:\Users\antho\source\repos\Project1\Debug\Project1.exe (process 10652) exited with code 0.
Press any key to close this window . . .
//What do you think the setprecision( ) attribute in the cout statement does?
/*The setprecision attribute makes the results show the desired amout of decimals in the results.*/