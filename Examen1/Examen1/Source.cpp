#include <iostream>
using namespace::std;

void displayValue(int);

int main() {
	int v = 5;
	displayValue(v);

	return 0;
}

void displayValue(int num) {
	cout << "The value is " << num << endl;
}