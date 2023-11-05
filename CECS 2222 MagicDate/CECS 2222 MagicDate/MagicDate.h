#ifndef _MAGIC_DATE_H
#define _MAGIC_DATE_H
#include<iostream>
using namespace::std;
#include "Date.h";
class MagicDate {
private:
	Date date;
public:
	MagicDate(int month = 1, int day = 1 , int year = 2021);
	int getYear() const;
	Date getDate() const;
	bool getMagicDay() const;
	//void display() const;
	friend ostream& operator << (ostream& strm, const MagicDate& obj);
	friend istream& operator >> (istream& strm, MagicDate& obj);
};
#endif

