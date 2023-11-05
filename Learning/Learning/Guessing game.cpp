#include <iostream>
using namespace::std;

int main() {
	int secretNum = 7;
	int guess = 0;
	int guessCount = 0;
	int guessLimit = 3;
	bool outOfGuesses = false;
	while (secretNum != guess && !outOfGuesses) {
		if(guessCount < guessLimit)
		{
			cout << "Guess the secret number: ";
			cin >> guess;
			guessCount++;
		}
		else {
			outOfGuesses = true;
		}
		
	}
	if (outOfGuesses) {
		cout << "You loose!";
	}
	else {
		cout << "You Win!";
	}
	
	
	return 0;
}