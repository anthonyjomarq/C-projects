#include<iostream>
#include<iomanip>
using namespace::std;
//Programa que calcula el credito disponible del cliente
//CECS2200 09 Anthony Colon Dominguez #108365

int main() {
	float customers_maximun_credit, the_customers_credit_used, available_credit;

	cout << "Enter the customer's maximun credit:";
	cin >> customers_maximun_credit;
	cout << "Enter the amount of credit used by the customer:";
	cin >> the_customers_credit_used;
	available_credit = customers_maximun_credit - the_customers_credit_used;
	cout << "The customer's available crdit is:" << available_credit << endl;
	cout << fixed << showpoint << setprecision(2);
	system("pause");
	return 0;
}
/*Enter the customer's maximun credit:13
Enter the amount of credit used by the customer:5
The customer's available crdit is:8
Press any key to continue . . .*/

