#include<iostream>
#include<string>
using namespace::std;
#include "MagicDate.h"
MagicDate::MagicDate(int month, int day, int yeary) :date(month, day, yeary) {}
int MagicDate::getYear() const {
	//cambio a do digito
	int twoDigitsYear;
	string yyyy;
	yyyy = to_string(date.getYear());
	char yyTemp[3];
	yyTemp[0] = yyyy[2];
	yyTemp[1] = yyyy[3];
	yyTemp[2] = '\0';
	twoDigitsYear = atoi(yyTemp);
	return twoDigitsYear;
}
bool MagicDate::getMagicDay() const {
	if (date.getMonth() * date.getDay() == getYear())
		return true;
	else
		return false;
}
Date MagicDate::getDate() const {
	return date;
}
ostream& operator << (ostream& strm, const MagicDate &obj) {
	if (obj.getMagicDay()) {
		cout << "The " << obj.getDate() << " is a magic date\n";
	}
	else {
		cout << "The " << obj.getDate() << " is not magic date\n";
	}
	return strm;
}
istream& operator >> (istream& strm, MagicDate& obj) {
	strm >> obj.date;
	return strm;
}
/*void MagicDate::display() const {
	if (getMagicDay()) {
		cout << "The " << date << " is a magic date\n";
	}
	else {
		cout << "The " << date << " is not magic date\n";
	}
}*/