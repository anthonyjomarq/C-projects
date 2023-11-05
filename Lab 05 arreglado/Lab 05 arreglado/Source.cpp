/*
	CECS 2223, Computer Programming II Lab
	Spring 2021, Sec. 05
	Date: April 14, 2021
	Topic: Lab 5 - Composition
	File name: lab05.cpp
	Name: Anthony J. Colon Dominguez, ID#108365
	Complete the C++ code as required
*/
#include <iostream>
#include "Course.h"
#include "Catalog.h"
using namespace::std;
int main() {
	// create the catalog for Polytechnic University
	Catalog PolytechnicUniversity("Polytechnic University");
	// add the following courses to the catalog:
	// CECS 2222 Computer Programming II, 4 credits
	// CECS 2233 Computer Programming II Lab, 0 credits
	// EE 1130 Freshman Design for Electrical and Computer Engineers, 3 credits
	// MATH 1350 Calculus I, 4 credits
	PolytechnicUniversity.setName("Polytechnic University");
	PolytechnicUniversity.addCourse(Course("CECS 2222", "Computer Programming II", 4));
	PolytechnicUniversity.addCourse(Course("CECS 2223", "Computer Programming II Lab", 0));
	PolytechnicUniversity.addCourse(Course("EE 1130", "Freshman Design for Electrical and Computer Engineers", 3));
	PolytechnicUniversity.addCourse(Course("MATH 1350", "Calculus I", 4));
	// print the catalog to show all courses added
	PolytechnicUniversity.printCatalog();
	// drop the course EE 1130
	cout << "\t\nAfter removing the course EE 1130 the catalog will look like this.\n";
	PolytechnicUniversity.dropCourse("EE 1130");
	// print the catalog to show all courses
	PolytechnicUniversity.printCatalog();

	// print the phrase "Program developed by YOUR NAME, YOUR ID#"
	cout << "Program developed by Anthony J. Colon Dominguez, ID#108365" << endl;
	// with your personal information.
	return 0;
}