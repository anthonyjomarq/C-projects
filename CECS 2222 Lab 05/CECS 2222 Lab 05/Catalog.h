#pragma once
/*
	CECS 2223, Computer Programming II Lab
	Spring 2021, Sec. 05
	Date: April 14, 2021
	Topic: Lab 5 - Composition
	File name: Catalog.h
		Name: Anthony J. Colon Dominguez, ID#108365
	Complete the C++ code as required
*/
#include "Course.h"
class Catalog {
private:
	string universityName;
	int count;
	Course* courses;
public:
	Catalog();
	Catalog(string);
	~Catalog();
	void setName(string);
	int getCount() const;
	string getName() const;
	int findCourse(string) ;
	void addCourse(Course);
	void dropCourse(string);
	void orderCatalog();
	void printCatalog() const;
};
