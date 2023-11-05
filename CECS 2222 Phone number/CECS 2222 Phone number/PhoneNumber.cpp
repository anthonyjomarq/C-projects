// Fig. 11.4: PhoneNumber.cpp
// Overloaded stream insertion and stream extraction operators
// for class PhoneNumber.
#include <iomanip>
using namespace std;
#include "PhoneNumber.h"
#include "MyString.h"
// overloaded stream insertion operator; cannot be
// a member function if we would like to invoke it with
// cout << somePhoneNumber;
ostream& operator<<(ostream& output, const PhoneNumber& number)
{
	output << "(" << number.areaCode << ") " << number.exchange << "-" << number.line;
	return output; // enables cout << a << b << c;
} // end function operator<<
// overloaded stream extraction operator; cannot be
// a member function if we would like to invoke it with
// cin >> somePhoneNumber;
istream& operator>>(istream& input, PhoneNumber& number)
{
	input.ignore(); // skip (
	input >> setw(3) >> number.areaCode; // input area code
	input.ignore(2); // skip ) and space
	input >> setw(3) >> number.exchange; // input exchange
	input.ignore(); // skip dash (-)
	input >> setw(4) >> number.line; // input line
	return input; // enables cin >> a >> b >> c;
} // end function operator>>
PhoneNumber::PhoneNumber() {
	setAreaCode("");
	setExchange("");
	setLine("");
}
PhoneNumber::PhoneNumber(MyString anAreaCode, MyString anExchange, MyString anLine) {
	setAreaCode(anAreaCode);
	setExchange(anExchange);
	setLine(anLine);
}
PhoneNumber::PhoneNumber(const PhoneNumber& anPhoneNumber) {
	setAreaCode(anPhoneNumber.getAreaCode());
	setExchange(anPhoneNumber.getExchange());
	setLine(anPhoneNumber.getLine());
}
void PhoneNumber::setAreaCode(MyString anAreaCode) {
	areaCode = anAreaCode;
}
void PhoneNumber::setExchange(MyString anExchange) {
	exchange = anExchange;
}
void PhoneNumber::setLine(MyString anLine) {
	line = anLine;
}
MyString PhoneNumber::getAreaCode() const {
	return areaCode;
}
MyString PhoneNumber::getExchange() const {
	return exchange;
}
MyString PhoneNumber::getLine() const {
	return line;
}
PhoneNumber& PhoneNumber::operator=(const PhoneNumber& tempPhone) {
	this->areaCode = tempPhone.getAreaCode();
	this->exchange = tempPhone.getExchange();
	this->line = tempPhone.getLine();
	return *this;
}//end operator =