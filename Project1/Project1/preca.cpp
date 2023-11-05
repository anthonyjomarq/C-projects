#include <iostream>
#include <iomanip>
#include <cmath>

using namespace ::std;

int main() {
	float f, x;
	cout << "Enter the value of x: ";
	cin >> x;
	cout << setprecision(5) << fixed << showpoint;
	f = pow(x, 3.0) + 2 * pow(x, 2.0) - 8 * x - 3;
	cout << "F(x) = " << f << endl;
	system("pause");
	return 0;
}