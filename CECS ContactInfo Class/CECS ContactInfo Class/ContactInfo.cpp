#include<iostream>
using namespace::std;
#include "ContactInfo.h"
ContactInfo::ContactInfo() {
	char tempName[20] = "Jose Rivera";
	char tempPhone[20] = "000-000-0000";
	setName(tempName);
	setPhone(tempPhone);
}
//Constructor
ContactInfo::ContactInfo(char* n, char* p)
{ // Initialize the name attribute.
	setName(n);
	// Initialize the phone attribute.
	setPhone(p);
}
// Destructor
ContactInfo::~ContactInfo()
{
	delete[] name;
	delete[] phone;
}
void ContactInfo::setName(char* n)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
// Private member function: initPhone
// This function initializes the phone attribute.
void ContactInfo::setPhone(char* p)
{
	phone = new char[strlen(p) + 1];
	strcpy_s(phone, strlen(p) + 1, p);
}
const char* ContactInfo::getName() const
{
	return name;
}
const char* ContactInfo::getPhoneNumber() const
{
	return phone;
}
void ContactInfo::display() const {
	cout << "Nombre:" << getName() << endl;
	cout << "Telephono:" << getPhoneNumber() << endl;
};
void ContactInfo::operator=(const ContactInfo& obj) {
	setName(obj.getName());
	setPhone(obj.getPhoneNumber());
	return *this;
	
}
istream &operator >> (istream& strm, ContactInfo& obj)
{
	const int SIZE = 15;
	char tempName[SIZE];
	char tempPhone[SIZE];
	/*if (obj.name != nullptr) delete[] obj.name;
	obj.name = new char[15];
	if (obj.phone != nullptr) delete[] obj.phone;
	obj.phone = new char[15];
	cout << "Entre su nombre: ";
	strm >> obj.name;
	cout << "Entre el numero del telefono: ";
	strm >> obj.phone;
	return strm;*/
}
ostream& operator << (ostream& strm, ContactInfo& obj) {
	strm << "Nombre:" << obj.getName() << endl;
	strm << "Telephono:" << obj.getPhoneNumber() << endl;
	return strm;
}