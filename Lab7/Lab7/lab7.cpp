#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// This program will demonstrate the scope rules.
// Anthony J. Colon Dominguez

const double PI = 3.14;
const double RATE = 0.25;
void findArea(float, float&);
void findCircumference(float, float&);
int main()
{
	cout << fixed << showpoint << setprecision(2);
	float radius = 12;

	cout << " Main function outer block" << endl;
	cout << "radius are active here" << endl << endl;
	{
		float area;
		cout << "Main function first inner block" << endl;
		cout << "area, radius, findArea are active here" << endl << endl;

		// Fill in the code to call findArea here
		findArea(radius, area);
		cout << "The radius = " << radius << endl;
		cout << "The area = " << area << endl << endl;
	}
	{
		float radius = 10;
		float circumference;
		cout << "Main function second inner block" << endl;
		cout << "radius, circumference, findCircumference are active here" << endl << endl;
		// Fill in the code to call findCircumference here
		findCircumference(radius, circumference);
		cout << "The radius = " << radius << endl;
		cout << "The circumference = " << circumference << endl << endl;
	}
	cout << "Main function after all the calls" << endl;
	cout << "radius, circumference, findCircumference, findArea are active here" << endl << endl;
	return 0;
}
// *********************************************************************
//                          findArea
//
// task: This function finds the area of a circle given its radius
// data in: radius of a circle
// data out: answer (which alters the corresponding actual parameter)
//
// ********************************************************************
void findArea(float rad, float& answer)
{
	cout << "AREA FUNCTION" << endl << endl;
	cout << "rad, answer, PI are active here" << endl << endl;
	// FILL in the code, given that parameter rad contains the radius, that
	// will find the area to be stored in answer
	answer = PI * pow(rad, 2.0);
}
// ******************************************************************************
//                      findCircumference
//
// task: This function finds the circumference of a circle given its radius
// data in: radius of a circle
// data out: distance (which alters the corresponding actual parameter)
//
// *****************************************************************************
void findCircumference(float length, float& distance)
{
	cout << "CIRCUMFERENCE FUNCTION" << endl << endl;
	cout << "lenght, distance, PI are active here" << endl << endl;
	// FILL in the code, given that parameter length contains the radius,
	// that will find the circumference to be stored in distance
	distance = 2 * PI * length;
}
/*Exercise 4: Before compiling and running the program, write out what you
expect the output to be.
Pienso que la area va a ser 452.16
Pienso que la circumferencia va a ser 62.80
What value for radius will be passed by main (first inner block) to the
findArea function?
12
What value for radius will be passed by main function (second inner
block) to the findCircumference function?
10*/
/*Exercise 5: Compile and run your program.Your instructor may ask to see the
program run or obtain a hard copy.*/
/* Main function outer block
radius are active here

Main function first inner block
area, radius, findArea are active here

AREA FUNCTION

rad, answer, PI are active here

The radius = 12.00
The area = 452.16

Main function second inner block
radius, circumference, findCircumference are active here

CIRCUMFERENCE FUNCTION

lenght, distance, PI are active here

The radius = 10.00
The circumference = 62.80

Main function after all the calls
radius, circumference, findCircumference, findArea are active here


C:\Users\antho\source\repos\Lab7\Debug\Lab7.exe (process 9620) exited with code 0.
Press any key to close this window . . .
*/