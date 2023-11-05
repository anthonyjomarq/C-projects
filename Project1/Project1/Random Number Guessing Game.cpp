#include <iostream>   
#include <cstdlib>   // For rand and srand   
#include <ctime>     // For the time function   
using namespace std;

int main() {

	const int MIN_VALUE = 0;  // Minimum value 
	const int MAX_VALUE = 9;  // Maximum value 
	int n, num;
	char again;

	do {
		do {
			// Get the system time. 
			unsigned seed = time(0);

			// Seed the random number generator. 
			srand(seed);

			cout << "Generating random number..." << endl;
			n = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
			cout << "Guess the number (0-9): ";
			cin >> num;
			if (num > n) {
				cout << "Too high, try again. " << endl;
			}
			else if (num < n) {
				cout << "Too low, try again. " << endl;
			}
			else {
				cout << "You are correct!" << endl;
			}
		} while (num > n || num < n);
		cout << "Do you want to rerun the program?(Y/N) ";
		cin >> again;
	} while (again == 'Y' || again == 'y');
	system("pause");
	return 0;

}
/*Generating random number...
Guess the number (0-9): 1
Too low, try again.
Generating random number...
Guess the number (0-9): 4
Too low, try again.
Generating random number...
Guess the number (0-9): 3
Too high, try again.
Generating random number...
Guess the number (0-9): 5
You are correct!
Do you want to rerun the program? N
Press any key to continue . . .*/


/*Generating random number...
Guess the number (0-9): 2
Too low, try again.
Generating random number...
Guess the number (0-9): 4
Too low, try again.
Generating random number...
Guess the number (0-9): 6
Too low, try again.
Generating random number...
Guess the number (0-9): 9
Too high, try again.
Generating random number...
Guess the number (0-9): 5
Too low, try again.
Generating random number...
Guess the number (0-9): 6
Too low, try again.
Generating random number...
Guess the number (0-9): 7
Too high, try again.
Generating random number...
Guess the number (0-9): 8
Too high, try again.
Generating random number...
Guess the number (0-9): 9
Too high, try again.
Generating random number...
Guess the number (0-9): 4
Too high, try again.
Generating random number...
Guess the number (0-9): 3
Too low, try again.
Generating random number...
Guess the number (0-9): 2
Too high, try again.
Generating random number...
Guess the number (0-9): 1
Too low, try again.
Generating random number...
Guess the number (0-9): 6
Too low, try again.
Generating random number...
Guess the number (0-9): 5
Too high, try again.
Generating random number...
Guess the number (0-9): 4
You are correct!
Do you want to rerun the program? N
Press any key to continue . . .*/