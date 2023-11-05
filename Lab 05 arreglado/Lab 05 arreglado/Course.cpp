// CECS 2223, Computer Programming II Lab
// Spring 2021, Sec. 05
// Date: April 14, 2021
// Topic: Lab 5 - Composition
// File name: Course.cpp
// 	Name: Anthony J. Colon Dominguez, ID#108365

#include "Course.h"

// Implement the Course class 
int Course::totalCourses = 0;

// orders the names in alphabetical order
void Course::orderRoster() {
	if (rosterSize > 1) { // can only order when more than 1 value in array
		int lowest = 0; // the index number where the lowest string is located
		bool swap = false;
		for (int i = 0; i < rosterSize - 1; i++) {
			lowest = i;
			for (int j = i + 1; j < rosterSize; j++) {
				if (roster[lowest].compare(roster[j]) > 0) {
					lowest = j;
					swap = true;
				}
			}
			if (swap) {
				string temp = roster[i];
				roster[i] = roster[lowest];
				roster[lowest] = temp;
				swap = false;
			}
		}
	}
}

// default constructor - initializes numeric attributes 
// to 0 and text to "", adds 1 to totalCourses, 
// initializes roster to null pointer
Course::Course() {
	courseCode = "";
	courseName = "";
	credits = 0;
	totalCourses++;
	roster = nullptr;
	rosterSize = 0;
}

// parameterized constructor - requires course code and name, 
// initializes credits and rosterSize to 0, adds 1 to totalCourses
// initializes roster to null pointer
Course::Course(string code, string name) {
	courseCode = code;
	courseName = name;
	credits = 0;
	totalCourses++;
	roster = nullptr;
	rosterSize = 0;
}

// parameterized constructor - requires course code, course name,
// and credits, adds 1 to totalCourses, initializes rosterSize to 0
// initializes roster to null pointer
Course::Course(string code, string name, int credits) {
	courseCode = code;
	courseName = name;
	this->credits = credits;
	totalCourses++;
	roster = nullptr;
	rosterSize = 0;
}

void Course::setCode(string code) {
	courseCode = code;
}

void Course::setName(string name) {
	courseName = name;
}

void Course::setCredits(int credits) {
	this->credits = credits;
}

string Course::getCode() const {
	return courseCode;
}

string Course::getName() const {
	return courseName;
}

int Course::getCredits() const {
	return credits;
}

int Course::getTotalCourses() const {
	return totalCourses;
}

// the print method displays course information ready for a table
// the format is credits, course code, course name
void Course::printCourse() const {
	printf("%-8d%-10s%s\n", getCredits(), getCode().c_str(), getName().c_str());
}

/* should add a student in the format last name, first name, increments rosterSize
   to register student Pedro Perez add Perez, Pedro to the array
	   To add a student:
	   1. check that the student is not yet registered -- findStudent()
	   2. create a new array with one more element
	   3. transfer values from "old" array into new one
	   4. add the new student to the end of the new array
*/
void Course::registerStudent(string first, string last) {
	int index = 0; // variable to store the index number
	//1. check that the student is not yet registered -- findStudent()
	if (findStudent(first, last) == -1) { // student not in roster, can be added
		string* temp = roster; // temporary array, assign handle to roster
		//2. create a new array with one more element
		roster = new string[++rosterSize];// create the new array with one more element
		if (rosterSize > 1) { // there are students registered yet
			//3. transfer values from "old" array into new one
			for (int i = 0; i < rosterSize - 1; i++)
				roster[i] = temp[i];
			index = rosterSize - 1;
			delete[] temp;
		}
		// 4. add the new student to the end of the new array
		roster[index] = last + ", " + first; // add student to roster
	}
	else
		cout << "Student " << last << ", " << first << " is registered!\n";
	orderRoster();
}

/*  drops a student from the course, decrements rosterSize
	   To drop a student from a course :
	   1. check that the student is registered -- findStudent()
	   2. if the student is in the roster, change the name to "zzz", otherwise do nothing
	   3. order the roster alphabetically
	   4. create a new array with one less element
	   5. transfer values from "old" array into new one, without the last element
*/
void Course::dropStudent(string first, string last) {
	//1. check that the student is registered -- findStudent()
	if (findStudent(first, last) != -1) { // can only drop registered students
		// 2. if the student is in the roster, change the name to "zzz"
		roster[findStudent(first, last)] = "zzz";
		// 3. order the roster alphabetically
		orderRoster();
		// 4. create a new array with one less element
		string* temp = roster; // temporary array, assign handle to roster
		roster = new string[--rosterSize];
		// 5. transfer values from "old" array into new one, without the last element
		for (int i = 0; i < rosterSize; i++)
			roster[i] = temp[i];
		delete[] temp;
	}
}

// print the roster for the course using the format
// Course Code:
// Course Name:
// Course Credits:
// Roster:
// 1. last name, first name
// and so on
// prints the phrase "No students registered yet" instead of the student list when 
// no students have been registered
void Course::printRoster() const {
	cout << "\nCourse Code: " << getCode() << endl;
	cout << "Course Name: " << getName() << endl;
	cout << "Course Credits: " << getCredits() << endl;
	cout << "Roster: " << endl;
	if (rosterSize == 0)
		cout << "No students registered yet!" << endl;
	else {
		for (int i = 0; i < rosterSize; i++)
			cout << i + 1 << ". " << roster[i] << endl;
	}
}

// determines if a student is in the roster, returns the position in the array
// should return -1 if student not in roster
// this method should be called before adding or dropping a student to/from the roster
int Course::findStudent(string first, string last) const {
	string name = last + ", " + first;
	for (int i = 0; i < rosterSize; i++) {
		if (roster[i].compare(name) == 0)
			return i; // index where student located in array
	}
	return -1; // student not in roster
}

