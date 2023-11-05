#include<iostream>
#include <ctime>
#include <string>
using namespace std;
 
int getNumber(int, int);
int main()
{
	int year, month;
	do {
		int days = 0;
		cout << "Enter month and year(Enter 0 0 to end): ";
		cin >> month >> year;
		if (month == 0 && year == 0) {
			/*time_t today = time(0);
			tm *currentyear;

			struct tm* currentyear = localtime(&today);
			year = currentyear->tm_year + 1900;
			month = currentyear->tm_year + 1;*/
			year = 2020;
			month = 10;
			days = getNumber(month, year);
			string monthNames[12] = { "January", "February", "March",
						"April", "May", "June",
						"July", "August", "September",
						"October", "November", "December" };
			cout << "The current month, " << monthNames[month - 1] << " " << year << ", has " << days << " days." << endl;
			exit(0);
		}
		days = getNumber(month, year);
		cout << "Number of Days: " << days << endl;
	} while (month != 0 && year != 0);

}
int getNumber(int month, int year) {
	if (month == 2)
	{
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
			return 29;
		return 28;
	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return 31;
	return 30;
}
