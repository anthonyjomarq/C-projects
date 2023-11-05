#include "Date.h"


Date::Date(int aDay, int aMonth, int aYear)
{
	setAll(aDay, aMonth, aYear);
}

Date::~Date()
{
}

void Date::setDay(int aDay)
{
	if (aDay < 32 && aDay > 0)
	{
		day = aDay;
	}
	else
	{
		day = 1;
	}

}

void Date::setMonth(int aMonth)
{
	if (aMonth < 13 && aMonth > 0)
	{
		month = aMonth;
	}
	else
	{
		month = 1;
	}

}

void Date::setYear(int aYear)
{
	if (aYear > 0)
	{
		year = aYear;
	}
	else
	{
		year = 1753;
	}

}

void Date::setAll(int aDay, int aMonth, int aYear)
{
	setDay(aDay);
	setMonth(aMonth);
	setYear(aYear);
}

int Date::getDay() const
{
	return day;
}

int Date::getMonth() const
{
	return month;
}

int Date::getYear() const
{
	return year;
}

std::string Date::getDate()
{
	std::string date;
	if (isValidDate())
	{
		std::string someDay = std::to_string(day); //makes a string of day
		std::string someMonth = std::to_string(month); //makes a string of month
		std::string someYear = std::to_string(year); //makes a string of year
		date = someDay + '/' + someMonth + '/' + someYear; //creates a string with the date
	}
	else
	{
		date = "Invalid date";
	}

	return date;
}

std::string Date::getAnyDate()
{
	std::string date;
	std::string someDay = std::to_string(day); //makes a string of day
	std::string someMonth = std::to_string(month); //makes a string of month
	std::string someYear = std::to_string(year); //makes a string of year
	date = someDay + '/' + someMonth + '/' + someYear; //creates a string with the date

	return date;

}

bool Date::isValidDate()
{
	if (year >= 1753)
	{
		if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 0 && day <= 31)
		{
			return 1;
		}

		else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 0 && day <= 30)
		{
			return 1;
		}

		else if (month == 2)
		{
			if (isLeapYear())
			{
				if (day > 0 && day <= 29)
				{
					return 1;
				}
			}
			else if (day > 0 && day <= 28)
			{
				return 1;
			}
		}
	}


	return 0;
}

bool Date::isLeapYear()
{
	if ((year % 4 == 0) && (year % 100 != 0))
	{
		return 1;
	}
	else if ((year % 100 == 0) && (year % 400 == 0))
	{
		return 1;
	}
	else if (year % 400 == 0)
	{
		return 1;
	}

	return 0;
}

bool Date::operator==(Date& right)
{
	if (right.getYear() != year)
	{
		return false;
	}
	else if (right.getMonth() != month)
	{
		return false;
	}
	else if (right.getDay() != day)
	{
		return false;
	}

	return true;
}

Date Date::operator-(Date& right)
{
	Date temp;

	if (year < right.year)
	{
		temp.day = right.day - day;

		temp.month = right.month - month;

		temp.year = right.year - year;


	}
	else if (year > right.year)
	{
		temp.day = day - right.day;

		temp.month = month - right.month;

		temp.year = year - right.year;
	}
	else
	{
		if (month < right.month)
		{
			temp.year = 0;
			temp.month = right.month - month;
			temp.day = right.day - day;
		}
		else if (month > right.month)
		{
			temp.year = 0;
			temp.month = month - right.month;
			temp.day = day - right.day;
		}
		else
		{
			if (day < right.day)
			{
				temp.year = 0;
				temp.month = 0;
				temp.day = right.day - day;
			}
			else if (day < right.day)
			{
				temp.year = 0;
				temp.month = 0;
				temp.day = day - right.day;
			}
			else
			{
				temp.year = 0;
				temp.month = 0;
				temp.day = 0;
			}

		}
	}


	if (temp.day < 0)
	{
		if (temp.month == 1 || temp.month == 3 || temp.month == 5 || temp.month == 7 || temp.month == 8
			|| temp.month == 10 || temp.month == 12 || temp.month + 12 == 1 || temp.month + 12 == 3 || temp.month + 12 == 5
			|| temp.month + 12 == 7 || temp.month + 12 == 8 || temp.month + 12 == 10 || temp.month + 12 == 12)
		{
			temp.month--;
			temp.day += 31;

		}
		else if (temp.month == 4 || temp.month == 6 || temp.month == 9 || temp.month == 11
			|| temp.month + 12 == 4 || temp.month + 12 == 6 || temp.month + 12 == 9 || temp.month + 12 == 11)
		{
			temp.month--;
			temp.day += 30;
		}
		else if (temp.month == 2 || temp.month + 12 == 2)
		{
			if (temp.isLeapYear())
			{
				temp.month--;
				temp.day += 29;
			}
			else
			{
				temp.month--;
				temp.day += 28;
			}
		}
	}

	if (temp.month < 0)
	{
		temp.year--;
		temp.month += 12;
	}

	return temp;
}

Date Date::operator++(int n)
{
	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == 31)
	{
		month++;
		day = 1;
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 0 && day == 30)
	{
		month++;
		day = 1;
	}
	else if (month == 2)
	{
		if (isLeapYear())
		{
			if (day == 29)
			{
				month++;
				day = 1;
			}
		}
		else if (day == 28)
		{
			month++;
			day = 1;
		}
	}
	else if (month == 12 && day == 31)
	{
		year++;
		month = 1;
		day = 1;
	}
	else
	{
		day++;
	}

	return *this;

}

Date Date::operator++()
{
	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == 31)
	{
		++month;
		day = 1;
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 0 && day == 30)
	{
		++month;
		day = 1;
	}
	else if (month == 2)
	{
		if (isLeapYear())
		{
			if (day == 29)
			{
				++month;
				day = 1;
			}
		}
		else if (day == 28)
		{
			++month;
			day = 1;
		}
	}
	else if (month == 12 && day == 31)
	{
		++year;
		month = 1;
		day = 1;
	}
	else
	{
		++day;
	}

	return *this;
}
