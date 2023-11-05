//This program will help an elementary school student learn multiplication.
//Anthony J. Colon Dominguez #108365
#include <iostream>   
#include <cstdlib>   // For rand and srand   
#include <ctime>     // For the time function   
using namespace std;
int randNum();//Function of the random value generator 

//Global variables
const int MIN_VALUE = 0;  // Minimum value 
const int MAX_VALUE = 9;  // Maximum value 

int main() {
	// Local variables
	int count = 5; // Amount of times multiplication questions will be asked
	int a, b, num, answer;
	char again;

	// Get the system time. 
	unsigned seed = time(0);

	// Seed the random number generator. 
	srand(seed);
	cout << "Enter the right answer of the multiplication :)" << endl;
	// This Do/while will repeat if the user inputs "Y" or "y".
	// Sentinental controlled looped
	do {
		// For loop for amount of times multiplication questions will be asked
		for (int i = 0; i < count; i++)
		{
			//Positive one-digit integers
			a = randNum();
			b = randNum();

			answer = a * b;
			// This do/while will repeat with the same question if the user inputs the wrong answer. 
			do {
				cout << "How much is " << a << " x " << b << "? ";
				cin >> num;
				if (answer == num) {
					cout << "Very good! You are correct! " << endl;
				}
				else {
					cout << "The answer is not correct. Please try again." << endl;
				}

			} while (num != answer); 

		}
		cout << "Do you want to rerun the program?(Y/N) ";
		cin >> again;
		cout << "--------------------------------------" << endl;
	} while (again == 'Y' || again == 'y'); // Arguments of the do/while loop
	cout << "Program ending...\n";
	cout << "Have a great day!" << endl;
	system("pause");
	return 0;
}
int randNum() // Function of the random value generator 
{	
	return (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
}