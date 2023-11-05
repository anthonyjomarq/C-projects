#pragma once
#include "PersonalBestArray.h"
class PersonalBestArrayArray
{
private:
	PersonalBestArray personalbestarray;
	PersonalBest* personalbest;//Pointer to the array.
	int getSize() const; //Number of Elements
	bool isValid(int) const;
public:
	//mutators
	//void setPersonal(PersonalBest);
	void setElement(int index, PersonalBest personalb);
	//accesors
	PersonalBest getElement(int) const; // Returns an element.
	void subscriptError();
	// Overloaded operator functions
	//bool operator > (const PersonalBestArrayArray& obj); // Overloaded >
	//bool operator < (const PersonalBestArrayArray& obj); // Overloaded <
	PersonalBest& operator[](const int& sub);
	PersonalBest operator[](int subscript) const;
	//Friends
	friend ostream& operator << (ostream&, PersonalBestArrayArray&);
	friend istream& operator >> (istream&, PersonalBestArrayArray&);
};

