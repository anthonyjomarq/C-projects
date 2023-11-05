/*
	CECS 2223, Computer Programming II Lab
	Spring 2021, Sec. 05
	Date: April 14, 2021
	Topic: Lab 5 - Composition
	File name: Catalog.cpp
	Name: [YOUR NAME HERE], ID#[YOUR ID NUMBER HERE]
	Complete the C++ code as required
*/
#include "Catalog.h"

// the default constructor assigns the empty string, "", to strings and 0 to count
// the Course ponter is initialized to nullptr
Catalog::Catalog() {
	universityName = "";
	count = 0;
	courses = nullptr;
}

Catalog::Catalog(string name) {
	universityName = name;
	count = 0;
	courses = nullptr;
}

// the destructor prints the phrase
// "Catalog for [name] has been destroyed"
Catalog::~Catalog() {
	cout << "\nCourses in the catalog for " << universityName << " are being destroyed...\n\n";
	for (int i = 0; i < count; i++) {
		cout << "\t.....";
		courses[i]->~Course(); // invoking the destructor for each Course object
	}
	cout << "\nCatalog for " << universityName << " has been destroyed.\n" << endl;
}

void Catalog::setName(string name) {
	universityName = name;
}

int Catalog::getCount() const {
	return count;
}
string Catalog::getName() const {
	return universityName;
}

// returns false if course in catalog, true otherwise
bool Catalog::findCourse(string code) const {
	if (count < 1)
		return true;
	else {
		for (int i = 0; i < count; i++)
			if (courses[i]->getCode().compare(code) == 0)
				return false;
	}
	return true;
}

// adds a course to the catalog
// the course object 
void Catalog::addCourse(string code, string name, int credits) {
	//1. check that the course is not yet in catalog -- findCourse()
	if (count < 1) { // there are no courses in the array
		count++;
		courses = new Course * [count]; // creat the new array, count will be 1
		courses[0] = new Course(code, name, credits); // will always be index 0
	}
	else if (findCourse(code)) { // course not in catalog, can be added
		Course** temp = courses; // temporary array, assign handle to courses, now a pointer array
		//2. create a new array with one more element
		count++;
		courses = new Course * [count];// create the new array with one more element
		if (count > 1) { // there are courses in catalog
			//3. transfer values from "old" array into new one
			for (int i = 0; i < count - 1; i++)
				courses[i] = temp[i];
			delete[] temp;
		}
		// now add the new course to the catalog
		if (count > 0)
			courses[count - 1] = new Course(code, name, credits);
		// 4. add the data for new course to the end of the new array
		/*courses[index].setCode(code);
		courses[index].setName(name);
		courses[index].setCredits(credits);*/
		// 04/26 - changed to add a new Course object
		orderCatalog();
	}
	else
		cout << "Course " << code << ", " << name << " is already in catalog!\n";
}

// drops a course from the catalog
// invokes the object's destructor
void Catalog::dropCourse(string code) {
	int index = -1;
	if (findCourse(code))
		cout << "Course " << code << " not in catalog!" << endl;
	else { // find the course
		for (int i = 0; i < count; i++)
			if (courses[i]->getCode().compare(code) == 0) {
				index = i;
				break;
			}
		courses[index]->setCode("zzzz"); // change the code
		orderCatalog(); // order so that course is last in catalog
	}
	count--; // decrease the size of the course counter
	Course** temp = courses; // temporary array, assign handle to courses
	courses = new Course * [count]; // changed to create a new pointer array
	if (count > 1) { // there are courses in catalog
			//3. transfer values from "old" array into new one
		for (int i = 0; i < count; i++)
			courses[i] = temp[i];
	}
	temp[count]->~Course(); // invoke the Course destructor for the course to be removed
	delete[] temp;
}

// orders courses alphabetically by code
void Catalog::orderCatalog() {
	if (count > 1) { // can only order when more than 1 value in array
		int lowest = 0; // the index number where the lowest string is located
		bool swap = false;
		for (int i = 0; i < count - 1; i++) {
			lowest = i;
			for (int j = i + 1; j < count; j++) {
				if (courses[lowest]->getCode().compare(courses[j]->getCode()) > 0) {  // changed to pointer dereference operator
					lowest = j;
					swap = true;
				}
			}
			if (swap) {
				Course* temp = courses[i]; // this is now a pointer
				courses[i] = courses[lowest];
				courses[lowest] = temp;
				swap = false;
				//cout << "completed swap in orderCatalog...\n";
			}
		}
	}
}

// prints the list of all courses in the catalog
// starts with the phrase
// "The courses listed for [name] are:"
void Catalog::printCatalog() const {
	if (count < 1)
		cout << "There are no courses in the catalog!" << endl;
	else {
		cout << "\nThe courses listed for " << universityName << " are:" << endl;
		printf("%-8s%-12s%s\n", "Credits", "Course Code", "Course Name");
		for (int i = 0; i < count; i++) {
			//cout << "printing data for " << courses[i].getCode() << endl;
			courses[i]->printCourse(); // changed to pointer dereference operator
		}
	}
}