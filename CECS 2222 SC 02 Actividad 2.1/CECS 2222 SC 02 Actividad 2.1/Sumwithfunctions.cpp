#include<iostream>
using namespace::std;

int* getNum();
int* getDen();
void getSum(int* num1, int* dem1, int* num2, int* dem2, int* num3, int* dem3);
void display(int* num1, int* dem1, int* num2, int* dem2, int* num3, int* dem3);
int main() {
	int* num1 = nullptr,
		* dem1 = nullptr,
		* num2 = nullptr,
		* dem2 = nullptr,
		* num3 = nullptr,
		* dem3 = nullptr,
	    *sum = nullptr;
	num1 = new int;
	num2 = new int;
	num3 = new int;
	dem1 = new int;
	dem2 = new int;
	dem3 = new int;

	num1 = getNum();
	dem1 = getDen();
	num2 = getNum();
	dem2 = getDen();
    getSum(num1, dem1, num2, dem2, num3, dem3);
	display(num1, dem1, num2, dem2, num3, dem3);
	
	delete num1;
	delete num2;
	delete dem1;
	delete dem2;
	delete num3;
	delete dem3;
	system("pause");
	return 0;
}
		<< " = " << *num3 << "/" << *dem3 << endl;
Entre el denumerador: 2
Entre el numerador: 1
Entre el denumerador: 4
La suma de 1/2 + 1/4 = 6/8
Press any key to continue . . .*/