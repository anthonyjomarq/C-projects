#pragma once
// CECS 2223, Computer Programming II Lab
// Spring 2021, Sec. 05
// Date: April 14, 2021
// Topic: Lab 5 - Composition
// File name: Course.h
// YOUR NAME HERE, YOUR ID NUMBER HERE
#pragma once
#include <iostream>
using namespace std;
class Course {
private:
	string courseCode;
	string courseName;
	int credits;
	static int totalCourses;
	string* roster;
	int rosterSize;
	void orderRoster(); // orders the names in alphabetical order
	//void changeRoster(bool);
public:
	// default constructor - initializes numeric attributes 
	// to 0 and text to "", adds 1 to totalCourses, 
	// initializes roster to null pointer
	Course();

	// parameterized constructor - requires course code and name, 
	// initializes credits and rosterSize to 0, adds 1 to totalCourses
	// initializes roster to null pointer
	Course(string, string);

	// parameterized constructor - requires course code, course name,
	// and credits, adds 1 to totalCourses, initializes rosterSize to 0
	// initializes roster to null pointer
	Course(string, string, int);
	~Course();
	// setters
	void setCode(string);
	void setName(string);
	void setCredits(int);

	// getters
	string getCode() const;
	string getName() const;
	int getCredits() const;
	int getTotalCourses() const;

	// the print method displays course information ready for a table
	// the format is credits, course code, course name
	void printCourse() const;

	// should add a student in the format last name, first name, increments rosterSize
	// to register student Pedro Perez add Perez, Pedro to the array
	/*
	   To add a student:
	   1. check that the student is not yet registered -- findStudent()
	   2. create a new array with one more element
	   3. transfer values from "old" array into new one
	   4. add the new student to the end of the new array
	*/
	void registerStudent(string, string);

	//  drops a student from the course, decrements rosterSize
	/*
	   To drop a student from a course :
	   1. check that the student is registered -- findStudent()
	   2. if the student is in the roster, change the name to "zzz", otherwise do nothing
	   3. order the roster alphabetically
	   4. create a new array with one less element
	   5. transfer values from "old" array into new one, without the last element
	*/
	void dropStudent(string, string);

	// print the roster for the course using the format
	// Course Code:
	// Course Name:
	// Course Credits:
	// Roster:
	// 1. last name, first name
	// and so on
	// prints the phrase "No students registered yet" instead of the student list when 
	// no students have been registered
	void printRoster() const;

	// determines if a student is in the roster, returns the position in the array
	// should return -1 if student not in roster
	// this method should be called before adding or dropping a student to/from the roster
	int findStudent(string, string) const;
};