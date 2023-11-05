#include<iostream>
using namespace::std;
#include "Date.h"

const int Date::days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

Date::Date() {
	month = 1;
	day = 1;
	year = 2000;
}
Date::Date(int aMonth, int aDay, int aYear) {
	setMonth(aMonth);
	setDay(aDay);
	setYear(aYear);
}
//Copy Constructor
Date::Date(const Date& aDate) {
	setMonth(aDate.getMonth());
	setDay(aDate.getDay());
	setYear(aDate.getYear());
}
Date::~Date() {
	//	cout << "Destroying object of type Date\n";
}
//Mutators
void Date::set(int aMonth, int aDay, int aYear) {
	setMonth(aMonth);
	setDay(aDay);
	setYear(aYear);
}
void Date::setMonth(int aMonth) {
	month = aMonth;
}
void Date::setDay(int aDay) {
	day = aDay;
}
void Date::setYear(int aYear) {
	this->year = aYear;
}
//Accessor
int Date::getMonth() const {
	return month;
}
int Date::getDay() const {
	return day;
}
int Date::getYear() const {
	return year;
}
// determine whether the day is the last day of the month
bool Date::endOfMonth(int testDay)
{
	if (getMonth() == 2 && leapYear(getYear()))
		return testDay == 29; // last day of Feb. in leap year
	else
		return testDay == days[month];
} // end function endOfMonth

bool Date::leapYear(int testYear)
{
	if (testYear % 400 == 0 || (testYear % 100 != 0 && testYear % 4 == 0))
		return true; // a leap year
	else
		return false; // not a leap year
} // end function leapYear
// function to help increment the date
void Date::helpIncrement()
{
	// day is not end of month
	if (!endOfMonth(day))
		++day; // increment day
	else
		if (month < 12) // day is end of month and month < 12
		{
			++month; // increment month
			day = 1; // first day of new month
		} // end if
		else // last day of year
		{
			++year; // increment year
			month = 1; // first month of new year
			day = 1; // first day of new month
		} // end else
} // end function helpIncrement
Date& Date::operator++()
{
	helpIncrement(); // increment date
	return *this; // reference return to create an lvalue
} // end function operator++
// overloaded postfix increment operator; note that the
// dummy integer parameter does not have a parameter name
Date Date::operator++(int)

{
	Date temp = *this; // hold current state of object
	helpIncrement();
	// return unincremented, saved, temporary object
	return temp; // value return; not a reference return
} // end function operator++
bool Date::operator==(const Date& obj) {

	if (getMonth() == obj.getMonth() && getDay() == obj.getDay() && getYear() == obj.getYear())
		return true;
	else
		return false;
}

Date& Date::operator=(const Date& obj) {
	this->month = obj.getMonth();
	this->day = obj.getDay();
	this->year = obj.getYear();
	return *this;
}//end operator

ostream& operator << (ostream& strm, const Date& obj)
{
	strm << obj.getMonth() << "/" << obj.getDay() << "/" << obj.getYear();
	return strm;
}


istream& operator >> (istream& strm, Date& obj)
{
	int tempMonth, tempDay, tempYear;
	cout << "Month (MM): ";
	strm >> tempMonth;
	while (tempMonth < 1 || tempMonth > 12) {
		cout << "Error, Invalid Month, Re-Enter the month\n";
		cout << "Month (MM): ";
		strm >> tempMonth;
	}//end while 
	obj.month = tempMonth;
	cout << "Day (DD): ";
	strm >> tempDay;
	while (tempDay < 0 || tempDay >31) {
		cout << "Error, Invalid Day, Re-Enter the day\n";
		cout << "Day (DD): ";
		strm >> tempDay;
	}//end while 
	obj.day = tempDay;
	cout << "Year (YYYY): ";
	strm >> tempYear;
	while (tempYear < 1900 || tempMonth > 2050) {
		cout << "Error, Invalid Year, Re-Enter the year\n";
		cout << "Year (YYYY): ";
		strm >> tempYear;
	}//end while 
	obj.year = tempYear;
	return strm;
}