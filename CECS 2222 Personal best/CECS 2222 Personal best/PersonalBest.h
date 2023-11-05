//File PersonalBest.h
#pragma once
#include <string>
#include "Date.h"
using namespace::std;
class PersonalBest
{
private:
	string name; //Name of the pole vaulter
	double* meters;
	Date* date;
	int jumps;

public:
	//Constructor
	PersonalBest();
	PersonalBest(string aName, double aMeters, int aMonth, int aDay, int aYear);
	//Copy Constructor
	PersonalBest(const PersonalBest& obj);
	~PersonalBest();
	//Mutators
	void setAthlete(string aName, double aMeters, int aMonth, int aDay, int aYear);
	void setDate(const Date& obj);
	void setDate(int dMonth, int dDay, int dYear);
	void setName(string aName);
	void setMeters(double aMeters);
	//Accessor
	string getName() const;
	double getMeters() const;
	Date getDate() const;
	int getDay() const;
	int getMonths() const;
	int getYears() const;
	void addJump(double aMeters, Date aDate);
	void displayJump() const;
	void orderJump();
	// Friends
	friend ostream& operator << (ostream&, PersonalBest&);
	friend istream& operator >> (istream&, PersonalBest&);
};