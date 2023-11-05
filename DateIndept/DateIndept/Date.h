#include <iostream>
#include <string>

#ifndef DATE_H
#define DATE_H

class Date
{
private:
	int day;
	int month;
	int year;

	bool isLeapYear();


public:
	Date(int = 1, int = 1, int = 1);
	~Date();
	bool isValidDate();
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void setAll(int, int, int);
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	std::string getDate();
	std::string getAnyDate();

	bool operator== (Date&);
	Date operator++(int);
	Date operator++();
	Date operator-(Date&);

};
#endif
