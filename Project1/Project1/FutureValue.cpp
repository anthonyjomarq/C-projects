#include <iostream>
#include <cmath>
#include <iomanip>
using namespace::std;

void futureValue(double, double, double);

int main() {
	double t, p, i, future_Value;

	cout << "This program will calculate the future value of an account after coumpound monthly interest." << endl;
	cout << "Enter the account's present value: ";
	cin >> p;
	cout << "Enter montly interest rate: ";
	cin >> i;
	cout << "Enter the amount of months that the money will be left in the account: ";
	cin >> t;
	futureValue(p, i ,t);
	return 0;
}
void futureValue(double p, double i, double t)
{
	cout << setprecision(2) << fixed << showpoint;
	i *= .01;
	p *= pow((1 + i), t);
	cout << "The account's future value is: $" << p << endl;
}