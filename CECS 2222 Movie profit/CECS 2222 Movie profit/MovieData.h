#pragma once
//File MovieData.h
#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>
using namespace::std;
class MovieData
{
private:
	char* title;
	char* director;
	int year_released;
	double running_minutes;
	double production_cost;
	double first_year_revenue;

	double validate(double num);

public:
	//Constructors & Destructors
	MovieData(
		char* title_name = nullptr,
		char* director_name = nullptr,
		int release_year = 0,
		double total_minutes = 0,
		double cost_to_produce = 0,
		double revenue_first_year = 0
		);

	MovieData(const MovieData& obj);
	~MovieData();

	//Mutators
	void setTitle(const char* title_name);
	void setDirector(const char* director_name);
	void setYear(int release_year);
	void setDuration(double duration);
	void setProductionCost(double cost);
	void setFirstYearRevenue(double revenue);

	//Accesors
	string getTitle() const;
	string getDirector() const;
	int getRelease() const;
	double getDuration() const;
	double getProductionCost() const;
	double getFirstYearRevenue() const;

	//Utils
	void display() const;

	/*++++OVERLOADS+++++*/

	//Asignment Operator
	void operator = (MovieData& obj);

	// I/O Stream Operators
	friend ostream& operator << (ostream& out, MovieData& obj);
	friend istream& operator >> (istream& inp, MovieData& obj);

};


