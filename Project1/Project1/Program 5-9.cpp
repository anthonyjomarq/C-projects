#include <iostream>
using namespace::std;
\
int main() {
	const int MIN_NUMBER = 1,
		      MAX_NUMBER = 10;
	int num;

	cout << "Number Number Squared\n";
	cout << "---------------------";

	for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
		cout << num << "\t\t" << (num * num) << endl;
	return 0;
}