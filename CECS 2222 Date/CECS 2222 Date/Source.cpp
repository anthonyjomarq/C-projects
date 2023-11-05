#include<iostream>
using namespace::std;
#include "_Date.h"
int main() {
	Date date1, date2(8, 12, 2020);
	cin >> date1;
	if (date1 == date2)
		cout << "Las fechas son iguales\n";
	else
		cout << "Las fechas no son iguales\n";
	system("pause");
	return 0;
}//end main