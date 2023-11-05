/*
	CECS 2223, Computer Programming II Lab
	Spring 2021, Sec. 05
	Date: April 14, 2021
	Topic: Lab 5 - Composition
	File name: lab05.cpp
	Name: [YOUR NAME HERE], ID#[YOUR ID NUMBER HERE]
	Complete the C++ code as required
*/
#include "Catalog.h"

int main() {
	// create the catalog for Polytechnic University
	Catalog pupr("Polytechnic University");
	// add the following courses to the catalog:
	// MATH 1350 Calculus I, 4 credits
	cout << "Adding MATH 1350 to catalog..." << endl;
	pupr.addCourse("MATH 1350", "Calculus I", 4);
	pupr.printCatalog();
	cout << endl;
	// CECS 2222 Computer Programming II, 4 credits
	cout << "Adding CECS 2222 to catalog..." << endl;
	pupr.addCourse("CECS 2222", "Computer Programming II", 4);
	pupr.printCatalog();
	cout << endl;
	/*pupr.dropCourse("MATH 1350");
	pupr.printCatalog();
	cout << endl;*/
	// EE 1130 Freshman Design for Electrical and Computer Engineers, 3 credits
	cout << "Adding EE 1130 to catalog..." << endl;
	pupr.addCourse("EE 1130", "Freshman Design for Electrical and Computer Engineers", 3);
	pupr.printCatalog();
	cout << endl;
	// CECS 2233 Computer Programming II Lab, 0 credits
	cout << "Adding CECS 2223 to catalog..." << endl;
	pupr.addCourse("CECS 2223", "Computer Programming II Lab", 0);
	// print the catalog to show all courses added
	pupr.printCatalog();
	cout << endl;
	// drop the course EE 1130
	cout << "Dropping course EE 1130..." << endl << endl;
	pupr.dropCourse("EE 1130");
	// print the catalog to show all courses
	pupr.printCatalog();
	// drop the course CECS 2223
	cout << "Dropping course CECS 2223..." << endl << endl;
	pupr.dropCourse("CECS 2223");
	// print the catalog to show all courses
	pupr.printCatalog();
	// print the phrase "Program developed by YOUR NAME, YOUR ID#"
	// with your personal information.
	return 0;
}