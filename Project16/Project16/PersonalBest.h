//File PersonalBest.h
#pragma once
#include <string>
#include "Date.h"
#include "Mystring.h"
using namespace::std;
class PersonalBest
{
private:
	MyString name; //Name of the pole vaulter
	double* meters;
	Date* date;

public:
	//Constructor
	PersonalBest();
	PersonalBest(MyString aName, double aMeters, int aMonth, int aDay, int aYear);
	//Copy Constructor
	/*PersonalBest(const PersonalBest& obj);*/
	~PersonalBest();
	//Mutators
	//void setAthlete(MyString aName, double aMeters, int aMonth, int aDay, int aYear);
	void setName(MyString aName);
	void setDate(const Date& obj);
	void setDate(int dMonth, int dDay, int dYear);
	void setMeters(double aMeters);
	//Accessor
	MyString getName() const;
	double getMeters() const;
	Date* getDate() const;
	int getDay() const;
	int getMonths() const;
	int getYears() const;
	// Friends
	friend ostream& operator << (ostream&, PersonalBest&);
	friend istream& operator >> (istream&, PersonalBest&);
};