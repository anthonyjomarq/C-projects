/*CECS2223 Computer Programming II Lab
Spring 2021, Sec. 05
Date: March 8, 2021
Topic: Review
File name: review.cpp
Anthony J. Colon Dominguez, #108365*/
#include "Circle.h"
int main() {
	//declare a Circle object name circleOne using the default constructor
	Circle circleOne; // after this instruction the value of the radius is 0
	printf("Printing the default values for circleOne...\n");
	// set the radius of circleOne to  5.25
	circleOne.setRadius(5.25);
	// print the values for cicleOne
	printf("pring the values for cicleOne...\n");
	circleOne.printCircle();
	// declara a Circle object name circleTwo, with radius 3.75
	Circle circleTwo(3.75); //Invoking the parameterized constructor
	// after the previous instruction the value of radius 3.75
	printf("\nprinting the values for circleTwo...\n");
	//print the values for circleTwo
	circleTwo.printCircle();
	printf("\nprinting the values for circleTwo...\n");
	circleTwo.setRadius(1.9658);
	printf("\Printing the values for circleTwo...\n");
	circleTwo.printCircle();
	return 0;
}