#include <iostream>
#include <string>
#include <ctime>
using namespace::std;

void findAge(int *year, int *age);
int main() {
	string name;
	int year, age;
	cout << "Enter name: ";
	cin >> name;
	do {
		cout << "Enter year of birth: ";
		cin >> year;
		if (year < 1800 || year > 2099)
			cout << "Error, the year of birth should be in between 1800 and 2099!" << endl;
	} while (year < 1800 || year > 2099);
	findAge(&year, &age);
	cout << "Hello " << name << ", you are " << age << " years old" << endl;
	return 0;
}
void findAge(int* year, int* age)
{
	/*time_t today = time(0);
			tm *currentyear;

			struct tm* currentyear = localtime(&today);
			CURRENT_YEAR = currentyear->tm_year + 1900;*/
			
	const int CURRENT_YEAR = 2020;
	*age =  CURRENT_YEAR - *year;
}