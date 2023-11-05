//File Source.h
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
	MovieData movie1, movie2;
	cout << "-------------------------\n";
	cout << "Operator de input/output\n";
	cin >> movie1;
	cout << endl;
	cin >> movie2;
	cout << movie1;
	cout << endl;
	cout << movie2;
	cout << "--------------------------------------------------------------------------------------------\n";
	cout << "\nUtilizing the operator of asigning to copy the second data to the first:\n";
	movie1 = movie2;
	cout << movie1;

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
Enter the amount of Movies to enter : 1

Enter the movie #1
Entre the film's Title: Star Wars
Enter the Director's first name: George Lucas
Enter the year of release: 1977
Enter the duration in minutes: 121
Enter the Production Cost: 11000000
Enter the 1st Year Revenue: 230000000


		Movie Data :
Title: Star Wars
Director: George Lucas
Released: 1977
Duration: 121 minutes
Production Cost: $11000000.00
1st Year Revenue: $230000000.00

-------------------------
Operator de input/output
Entre the film's Title: Predator
Enter the Director's first name: John McTierrnan
Enter the year of release: 1989
Enter the duration in minutes: 101
Enter the Production Cost: 8000000
Enter the 1st Year Revenue: 75000000

Entre the film's Title: Harry Potter
Enter the Director's first name: Chris Columbus
Enter the year of release: 2001
Enter the duration in minutes: 159
Enter the Production Cost: 125000000
Enter the 1st Year Revenue: 1000000000

		Movie Data :
Title: Predator
Director: John McTierrnan
Released: 1989
Duration: 101.00 minutes
Production Cost: $8000000.00
1st Year Revenue: $75000000.00



		Movie Data :
Title: Harry Potter
Director: Chris Columbus
Released: 2001
Duration: 159.00 minutes
Production Cost: $125000000.00
1st Year Revenue: $1000000000.00

--------------------------------------------------------------------------------------------

Utilizing the operator of asigning to copy the second data to the first:

		Movie Data :
Title: Harry Potter
Director: Chris Columbus
Released: 2001
Duration: 159.00 minutes
Production Cost: $125000000.00
1st Year Revenue: $1000000000.00

Press any key to continue . . .
*/
