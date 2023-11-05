#include <iostream>
using namespace::std;
int main() {
	int test, student = 1, total = 0, numTests = 3;
	do {
		double score;
		test = 1;
		cout << "Enter score " << test << " for ";
		cout << "student " << student << ": ";
		cin >> score;
		total += score;
		test++;
	} while (test <= numTests);
	return 0;
}
