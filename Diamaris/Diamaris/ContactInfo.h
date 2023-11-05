//ContactInfo.h
#pragma warning(disable : 4996)
// Contact class specification file (version 2)
#ifndef CONTACTINFO_H
#define CONTACTINFO_H
#include <iostream>
#include <cstring> // Needed for strlen and strcpy
using namespace std;

// ContactInfo class declaration.
class ContactInfo {
private:
	char* name; // The contact's name
	char* phone; // The contact's phone number

	// Private member function: initName
	// This function initializes the name attribute.
	void initName(char* n);

	// Private member function: initPhone
	// This function initializes the phone attribute.
	void initPhone(char* p);

public:
	ContactInfo();
	ContactInfo(char* n, char* p); // Constructor

	char* getName() const;
	char* getPhoneNumber() const;

	void display() const;

	bool operator==(const ContactInfo& obj);
	ContactInfo& operator=(const ContactInfo& obj);

	bool operator > (const ContactInfo&); // Overloaded >
	bool operator < (const ContactInfo&); // Overloaded <
	friend ostream& operator << (ostream& strm, ContactInfo& obj);
	friend istream& operator >> (istream& strm, ContactInfo& obj);

};
#endif
