#include<iostream>
#include<string>
using namespace::std;
#include "ContactInfo.h"
int main() {
	ContactInfo std1, std2;
	char* name = nullptr;
	char* phoneNumber = nullptr;
	const int SIZE = 15;
	name = new char[SIZE];
	phoneNumber = new char[SIZE];
	cout << "Entre su nombre:";
	cin.getline(name, SIZE);
	cout << "Entre su numero de telefono:";
	cin.getline(phoneNumber, SIZE);
	std1.setName(name);
	std1.setPhone(phoneNumber);
	std2 = std1;
	std1.display();
	std2.display();
	delete[] name;
	name = nullptr;
	delete[] phoneNumber;
	phoneNumber = nullptr;
	system("pause");
	return 0;
}//end main