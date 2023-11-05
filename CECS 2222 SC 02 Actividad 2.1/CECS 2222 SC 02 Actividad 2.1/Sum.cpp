#include<iostream>
using namespace::std;
int main() {
	int count;
	int* num1 = nullptr, 
	   * dem1 = nullptr, 
	   * num2 = nullptr,
	   * dem2 = nullptr,
	   * num3 = nullptr,
	   * dem3 = nullptr;
	num1 = new int;
	num2 = new int;
	num3 = new int;
	dem1 = new int;
	dem2 = new int;
	dem3 = new int;
	cout << "Entre el numerador y denumerador de la segunda fraccion: ";
	cin >> *num1 >> *dem1;
	cout << "Entre el numerador y denumerador de la segunda fraccion: ";
	cin >> *num2 >> *dem2;
	*num3 = ((*num1 * *dem2) + (*dem1 * *num2));
	*dem3 = *dem1 * *dem2;
	cout << "La suma de " << *num1 << "/" << *dem1 << " + " << *num2 << "/" << *dem2
		 << " = " << *num3 << "/" << *dem3 << endl;
	delete num1;
	delete num2;
	delete dem1;
	delete dem2;
	delete num3;
	delete dem3;
	system("pause");
	return 0;
}/*Entre el numerador y denumerador de la segunda fraccion: 1
3
Entre el numerador y denumerador de la segunda fraccion: 2
9
La suma de 1/3 + 2/9 = 15/27
Press any key to continue . . .*/