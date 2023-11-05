// CECS 2223, Computer Programming II Lab
// Spring 2021, Sec. 05
// Date: April 7, 2021
// Lab 4
// File name: lab04.cpp
// Anthony J. Colon Dominguez #108365
#include <iostream>
#include "Course.h"

int main() {
	// declare an integer constant named COURSES which will store the amount of courses in the array, initialize to 3
	const int COURSES = 3;
	// declare a Course array, named courses, with COURSES as its size
	Course courses[COURSES];
	// Add the following courses to the array: 
	// CECS 2222, Computer Programming II, 4 credits
	courses[0].setCode("CECS 2222");
	courses[0].setName("Computer Programming II");
	courses[0].setCredits(4);
	// CECS 2223, Computer Programming II Lab, 0 credits
	courses[1].setCode("CECS 2223");
	courses[1].setName("Computer Programming II Lab");
	courses[1].setCredits(0);
	// COE 4330, Computer Networks, 3 credits
	courses[2].setCode("COE 4330");
	courses[2].setName("Computer Networks");
	courses[2].setCredits(3);
	// print the list of courses in the array
	cout << "These are the following courses in the log: \n";
	for (int i = 0; i < COURSES; i++)
		courses[i].printCourse();
	// Add three students to each course
	courses[0].registerStudent("Jomar", "Anthony");
	courses[0].registerStudent("Gonzales", "Andrew");
	courses[0].registerStudent("Lugo", "Joshua");

	courses[1].registerStudent("Rivera", "Carlos");
	courses[1].registerStudent("Martinez", "George");
	courses[1].registerStudent("Dominguez", "Maria");

	courses[2].registerStudent("Lorez", "Faber");
	courses[2].registerStudent("Colon", "Nicole");
	courses[2].registerStudent("Sanchez", "Chrismairy");
	// print the roster for each course 
	courses[0].printRoster();
	courses[1].printRoster();
	courses[2].printRoster();
	// drop 1 student from each course
	courses[0].dropStudent("Gonzales", "Andrew");
	courses[1].dropStudent("Martinez", "George");
	courses[2].dropStudent("Lorez", "Faber");
	// print the roster for each course
	cout << "\nAfter dropping Andrew, George and Faber the classes will look like this..." << endl;
	courses[0].printRoster();
	courses[1].printRoster();
	courses[2].printRoster();
	/* print the following statement "Program developed by [YOUR NAME], ID #[ID NUMBER]", where [text] is to be subtituted for the correct values.*/
	cout << "Program developed by Anthony J. Colon Dominguez, ID#108365";
	system("pause"); // use only for Visual Studio
	return 0;
}