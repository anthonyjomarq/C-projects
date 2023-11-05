//ContactInfo.cpp
#include "ContactInfo.h"

void ContactInfo::initName(char* n) {
	name = new char[strlen(n) + 1];
	strcpy(name, n);
}

void ContactInfo::initPhone(char* p) {
	phone = new char[strlen(p) + 1];
	strcpy(phone, p);
}

ContactInfo::ContactInfo() {
	char tempName[30] = "John Doe";
	char tempPhone[30] = "000-000-0000";
	initName(tempName);
	initPhone(tempPhone);

}

ContactInfo::ContactInfo(char* n, char* p) {
	initName(n); // Initialize the name attribute.
	initPhone(n); // Initialize the phone attribute.
}


char* ContactInfo::getName() const {
	return name;
}

char* ContactInfo::getPhoneNumber() const {
	return phone;
}

void ContactInfo::display() const {
	cout << "=====================" << endl;
	cout << "Name: " << getName() << endl;
	cout << "Phone Number: " << getPhoneNumber() << endl;
	cout << "=====================" << endl;
}

bool ContactInfo::operator==(const ContactInfo& obj) {
	if (*getName() == *obj.getName())
		return true;
	else
		return false;
}

ContactInfo& ContactInfo::operator=(const ContactInfo& obj) {
	initName(obj.getName());
	initPhone(obj.getPhoneNumber());
	return *this;
}

bool ContactInfo::operator > (const ContactInfo& right) // Overloaded >
{
	bool status;
	if (*name > *right.name)
		status = true;
	else
		status = false;
	return status;
}

bool ContactInfo::operator < (const ContactInfo& right) // Overloaded <
{
	bool status;
	if (*name < *right.name)
		status = true;
	else
		status = false;
	return status;
}

ostream& operator<<(ostream& strm, ContactInfo& obj) {
	cout << "=====================" << endl;
	strm << "Name: " << obj.getName() << endl;
	strm << "Phone number: " << obj.getPhoneNumber() << endl;
	cout << "=====================" << endl;
	return strm;
}

istream& operator>>(istream& strm, ContactInfo& obj) {
	const int SIZE = 30;
	char tempName[30];
	char tempPhoneNum[SIZE];

	cin.ignore();
	cout << "Enter your name: ";
	strm.getline(tempName, SIZE);
	obj.initName(tempName);
	cout << endl;

	cout << "Enter your phone number: ";
	strm.getline(tempPhoneNum, SIZE);
	obj.initPhone(tempPhoneNum);
	cout << endl;
	return strm;
}
