#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>
#include <string>
using namespace std;
#include<iostream>
using namespace::std;
#include "MyString.h"
class PhoneNumber
{
	friend ostream& operator<<(ostream&, const PhoneNumber&);
	friend istream& operator>>(istream&, PhoneNumber&);
private:
	MyString areaCode; // 3-digit area code
	MyString exchange; // 3-digit exchange
	MyString line; // 4-digit line
public:
	PhoneNumber();
	PhoneNumber(MyString, MyString, MyString);
	PhoneNumber(const PhoneNumber&);
	void setAreaCode(MyString areaCodeTemp);
	void setExchange(MyString exchangeTemp);
	void setLine(MyString lineTemp);
	MyString getAreaCode() const;
	MyString getExchange() const;
	MyString getLine() const;
	//PhoneNumber& PhoneNumber::operator=( PhoneNumber& tempPhone);
}; // end class PhoneNumber
#endif

