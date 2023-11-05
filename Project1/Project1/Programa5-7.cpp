// This program averages 3 test scores. It repeats as 
  // many times as the user wishes. 
#include <iostream>
using namespace std;


int main()
{
	int score1, score2, score3; // Three scores 
	double average;            // Average score 
	char again;                // To hold Y or N input 


	do
	{
		do {
			cout << "Enter scores #1: ";
			cin >> score1;
			if (score1 < 0 || score1> 100) {
				cout << "Error, valor de la puntuacion esta fuera del intervalo [0. 100]." << endl;
			}
		} while (score1 < 0 || score1> 100);
		do {
			cout << "Enter scores #2: ";
			cin >> score2;
			if (score2 < 0 || score2> 100) {
				cout << "Error, valor de la puntuacion esta fuera del intervalo [0. 100]." << endl;
			}
		} while (score2 < 0 || score2> 100);
		do {
			cout << "Enter scores #3: ";
			cin >> score3;
			if (score3 < 0 || score3> 100) {
				cout << "Error, valor de la puntuacion esta fuera del intervalo [0. 100]." << endl;
			}
		} while (score3 < 0 || score3> 100);



		// Calculate and display the average. 
		average = (score1 + score2 + score3) / 3.0;
		cout << "The average is " << average << ".\n";


		// Does the user want to average another set? 
		cout << "Do you want to average another set? (Y/N) ";
		cin >> again;
	} while (again == 'Y' || again == 'y');
	system("pause");
	return 0;
}
