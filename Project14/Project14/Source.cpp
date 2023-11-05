#include "MovieData.h"
#include <cmath>
#include <iomanip>
#include <iostream>

void fillMovieArray(MovieData* arr, int size);
void printMovieArray(MovieData* arr, int size);

int main() {
	int size;
	cout << "Enter the amount of Movies to enter : ";
	cin >> size;
	MovieData* movie_list = new MovieData[size];
	fillMovieArray(movie_list, size);
	printMovieArray(movie_list, size);
	system("pause");
	return 0;
}

void fillMovieArray(MovieData* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << endl << "Enter the movie #" << i + 1 << endl;
		MovieData& ref = *(arr + i);
		cin >> ref;
		cout << endl;
	}
}

void printMovieArray(MovieData* arr, int size)
{
	for (int i = 0; i < size; i++) {
		MovieData& ref = *(arr + i);
		ref.display();
	}
}

/*
Enter the amount of Movies to enter : 2

Enter the movie #1
Entre the film's Title        : Star-Wars
Enter the Director's name     : George-Lucas
Enter the year of release     : 1977
Enter the duration in minutes : 121
Enter the Production Cost     : 11000000
Enter the 1st Year Revenue    : 230000000


Enter the movie #2
Entre the film's Title        : Predator
Enter the Director's name     : John-McTierrnan
Enter the year of release     : 1989
Enter the duration in minutes : 101
Enter the Production Cost     : 8000000
Enter the 1st Year Revenue    : 75000000

Title    : Star-Wars
Director : George-Lucas
Released : 1977
Duration : George-Lucas minutes
Production Cost  : $11000000.00
1st Year Revenue : $230000000.00
Title    : Predator
Director : John-McTierrnan
Released : 1989
Duration : John-McTierrnan minutes
Production Cost  : $8000000.00
1st Year Revenue : $75000000.00
Press any key to continue . . .
*/
