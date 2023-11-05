/*
	CECS 2223, Computer Programming II Lab
	Spring 2021, Sec. 05
	Date: April 14, 2021
	Topic: Lab 5 - Composition
	File name: Catalog.cpp
	Name: Anthony J. Colon Dominguez, ID#108365
	Complete the C++ code as required
*/
#include "Catalog.h"
#include "Course.h"
#include <iostream>
using namespace::std;
// the default constructor assigns the empty string, "", to strings and -1 to count
// the Course ponter is initialized to nullptr
Catalog::Catalog() {
	universityName = "";
	count = 0;
	courses = nullptr;
}
Catalog::Catalog(string aName) {
	universityName = aName;
	count = 0;
	courses = nullptr;
}
// the destructor prints the phrase
// "Course [name] has been destroyed"
Catalog::~Catalog() {
	cout << "Catalog for " << universityName << " has been destroyed" << endl;
	if (courses != nullptr)
	{
		delete[] courses;
	}
}
void Catalog::setName(string aName) {
	universityName = aName;
}
int Catalog::getCount() const {
	return count;
}
string Catalog::getName() const {
	return universityName;
}
int Catalog::findCourse(string code)
{
	for (int i = 0; i < count; ++i)
	{
		if (courses[i].getCode() == code)
		{
			return i;
		}
	}
	return -1;
}
// adds a course to the catalog
// the course object 
void Catalog::addCourse(Course course) {
	{
		int index = 0;// variable to store the index number
		if (findCourse(course.getCode()) == -1)
		{
			Course* temp = courses;
			courses = new Course[++count];
			if (count > 1)
			{
				for (int i = 0; i < count - 1; i++)
					courses[i] = temp[i];
				index = count - 1;
				delete[] temp;
			}

			courses[index] = course;
		}
		else
		{
			cout << "Course " << course.getCode() << " is already added!\n";
		}
		orderCatalog();
	}
}
// drops a course from the catalog
// invokes the object's destructor
void Catalog::dropCourse(string code) {
	int location = findCourse(code);
	if (findCourse(code) != -1){
		courses[location].setCode("null");
		orderCatalog();

		Course* temp = courses;

		courses = new Course[--count];
		for (int i = 0; i < count; i++)
			courses[i] = temp[i];
		delete[] temp;
	}
}

// orders courses alphabetically by code
void Catalog::orderCatalog() {
	if (count > 1){// can only order when more than 1 value in array
		int lowest = 0;// the index number where the lowest string is located
		bool swap = false;
		for (int i = 0; i < count - 1; i++)
		{
			lowest = i;
			for (int j = i + 1; j < count; j++)
			{
				if (courses[lowest].getCode().compare(courses[j].getCode()) > 0)
				{
					lowest = j;
					swap = true;
				}
			}
			if (swap){
				Course temp = courses[i];
				courses[i] = courses[lowest];
				courses[lowest] = temp;
				swap = false;
			}
		}
	}
}
// prints the list of all courses in the catalog
// starts with the phrase
// "The courses listed for [name] are:"
void Catalog::printCatalog() const
{
  cout << "The courses listed for " << this->universityName << " are:" << endl;
  for(int i = 0; i < count; ++i)
  {
	  cout << "\nCode: " << courses[i].getCode();
	  cout << "\nCourse Name: " << courses[i].getName();
	  cout << "\nCredits: " << courses[i].getCredits();
	  cout << endl;
  }
}
	