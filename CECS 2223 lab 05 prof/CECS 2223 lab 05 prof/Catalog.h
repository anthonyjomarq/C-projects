#pragma once
/*
	CECS 2223, Computer Programming II Lab
	Spring 2021, Sec. 05
	Date: April 14, 2021
	Topic: Lab 5 - Composition
	File name: Catalog.h
	Name: [YOUR NAME HERE], ID#[YOUR ID NUMBER HERE]
	Complete the C++ code as required
*/
#include "Course.h"
class Catalog {
private:
	string universityName;
	int count; // 04/26 is now a count of pointers to Course objects in the courses array
	Course** courses; // 04/26 changed to a pointer array
public:
	Catalog();
	Catalog(string);
	~Catalog();
	void setName(string);
	int getCount() const;
	string getName() const;
	bool findCourse(string) const;
	void addCourse(string, string, int);
	void dropCourse(string);
	void orderCatalog();
	void printCatalog() const;
};