#include <iostream>
#include <string>
using namespace std;

int Vowel_count(char* str);
int Consonant_count(char* str);
bool isNotSpecialChar(char str);

int main()
{
	char string[50];
	char choice, choi[2];
	int Nvowels, Nconsonant;

	cout << "Enter a string(Do not enter any special characters): ";
	cin.getline(string, 50);

	do
	{
		// Display the menu to the user.
		cout << "\n\t\tMenu\n\n";
		cout << "(A) Count the number of vowels in the string" << endl;
		cout << "(B) Count the number of consonant in the string" << endl;
		cout << "(C) Count both the vowels and consonants in the string" << endl;
		cout << "(D) Enter another string" << endl;
		cout << "(E) Exit the program\n\n";

		cout << "Enter choice: ";
		cin.getline(choi, 2);
		choice = choi[0];

		// Function that call to get the number of Vowels.
		if (choice == 'A' || choice == 'a')
		{
			Nvowels = Vowel_count(string);
			cout << "Number of vowels is: " << Nvowels << endl;
			cout << "--------------------------\n";
		}
		// Function that call to get the number Consonant.
		else if (choice == 'B' || choice == 'b')
		{
			Nconsonant = Consonant_count(string);
			cout << "Number of Consonants is: " << Nconsonant << endl;
			cout << "--------------------------\n";
		}
		// Function that call to get number if Vowels and Consonant.
		else if (choice == 'C' || choice == 'c')
		{
			Nvowels = Vowel_count(string);
			Nconsonant = Consonant_count(string);
			cout << "Number of vowels is: " << Nvowels << endl;
			cout << "Number of consonants is: " << Nconsonant << endl;
			cout << "--------------------------\n";
		}
		// Prompt ot get another string.
		else if (choice == 'D' || choice == 'd')
		{
			cout << "Enter another string: ";
			cin.getline(string, 50);
		}
		else if (choice == 'E' || choice == 'e')
		{
			cout << "Programing ending..." << endl;
			exit(0);
		}
		else
			cout << "Incorrect input! Try again!" << endl;

	} while (choice != 'E' || choice != 'e');//End do while
	system("pause");
	return 0;
}//End main

int Vowel_count(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		if (*str == 'a' || *str == 'A' || *str == 'E' || *str == 'e' || *str == 'i' || *str == 'I' || *str == 'o' || *str == 'O' || *str == 'u' || *str == 'U')
			count++;
		str++;
	}//End while
	return count;
}//End Vowel_count

int Consonant_count(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		if (*str != 'a' && *str != 'A' && *str != 'e' && *str != 'E' && *str != 'i' && *str != 'I' && *str != 'o' && *str != 'O' && *str != 'u' && *str != 'U' && isNotSpecialChar(*str))
			count++;
		str++;
	}//End while

	return count;
}

bool isNotSpecialChar(char str)
{
	if ((str >= 32 && str <= 64) || (str >= 91 && str <= 96) || (str >= 123 && str <= 126))
		return false;
	return true;
}
