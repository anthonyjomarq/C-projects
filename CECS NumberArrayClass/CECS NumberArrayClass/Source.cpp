#include "NumberArray.h"
#include <iostream>
using namespace::std;
string booltostr(bool con);
void print_with_subscript(NumberArray& obj);
int main() {
	cout << "Initializing arrays..." << endl;
	NumberArray arr1;
	arr1.initArray(5);
	arr1.setElement(0, 1).setElement(1, 2).setElement(2, 3).setElement(3,
		4).setElement(4, 5);
	NumberArray arr2 = arr1; //ASSIGNMENT DEMO
	NumberArray arr3(3);
	arr3.setElement(0, 2).setElement(1, 3).setElement(2, 1);
	// OSTREAM DEMO
	cout << "Array#1 : Original : " << arr1 << endl;
	cout << "Array#2 : Copy : " << arr2 << endl;
	cout << "Array#3 : Random : " << arr3 << endl << endl;
	cout << endl;
	cout << "RELATIONAL TESTS" << endl << endl;
	cout << "Original == Original: " << booltostr(arr1 == arr1) << endl;
	cout << "Original == Copy : " << booltostr(arr1 == arr2) << endl;
	cout << "Original == Random : " << booltostr(arr1 == arr3) << endl;
	cout << "Original != Original: " << booltostr(arr1 != arr1) << endl;
	cout << "Original != Copy : " << booltostr(arr1 != arr2) << endl;
	cout << "Original != Random : " << booltostr(arr1 != arr3) << endl << endl;
	cout << endl << "Modifying Original..." << endl << endl;
	cin >> arr1; // ISTREAM DEMO
	cout << "Array#1 : Original : " << arr1 << endl;
	cout << "Array#2 : Copy : " << arr2 << endl;
	cout << "Array#3 : Random : " << arr3 << endl << endl;//Subscript Operator Demo
	cout << "Printing Array#1 with subscript access..." << endl;
	print_with_subscript(arr1);
	return 0;
}
//Util: Prints bools as a string rather than as int, the normal case for << for bools
string booltostr(bool con) {
	if (con) { return "True"; }
	else { return "False"; }
}
//Prints elements individually by accessing through subscript
void print_with_subscript(NumberArray& obj) {
	for (int i = 0; i < obj.getSize(); i++) {
		cout << "Index : " << i << " : Element : " << obj[i] << endl;
	}
}