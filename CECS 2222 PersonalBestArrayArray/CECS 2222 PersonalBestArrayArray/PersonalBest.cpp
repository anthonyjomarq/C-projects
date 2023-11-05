#include "PersonalBest.h"

PersonalBest::PersonalBest() : date() {
	name = new char[30];
	meters = nullptr;
	jumps = 0;
}

PersonalBest::PersonalBest(MyString aName, double aMeters, int aMonth, int aDay, int aYear)
{
	setName(aName);
	setMeters(aMeters);
	setDate(aMonth, aDay, aYear);
	date = nullptr;
}

PersonalBest::PersonalBest(const PersonalBest& obj)
{
	setName(obj.getName());
	setMeters(obj.getMeters());
	setDate(obj.getDate());
}
PersonalBest::~PersonalBest()
{
	delete[] meters;
	delete[] date;
}

void PersonalBest::setDate(const Date& aDate)
{
	date->setDate(aDate.getMonth(), aDate.getDay(), aDate.getYear());
}
void PersonalBest::setDate(int dMonth, int dDay, int dYear)
{
	date->setDate(dMonth, dDay, dYear);
}
void PersonalBest::setName(MyString aName)
{
	name = aName;
}
void PersonalBest::setMeters(double aMeters)
{
	*meters = aMeters;
}
MyString PersonalBest::getName() const
{
	return name;
}
double PersonalBest::getMeters() const
{
	return *meters;
}

Date PersonalBest::getDate() const
{
	return *date;
}

int PersonalBest::getDay() const
{
	return date->getDay();
}

int PersonalBest::getMonths() const
{
	return date->getMonth();
}

int PersonalBest::getYears() const
{
	return date->getYear();
}

void PersonalBest::addJump(double aMeters, Date aDate)
{
	int index = 0;
	Date* temp = date;
	date = new Date[jumps];
	double* temp1 = meters;
	meters = new double[jumps];
	jumps++;
	if (jumps > 1) {
		for (int i = 0; i < jumps - 1; i++) {
			date[i] = temp[i];
			meters[i] = temp1[i];
		}
		index = jumps - 1;
		//delete[] temp;
		//delete[] temp1;
	}
	meters[index] = aMeters;
	date[index] = aDate;
	orderJump();
}

void PersonalBest::displayJump() const
{
	cout << "\nName of Athlete: " << name;
	cout << "\nList of Jumps\n";
	cout << "---------------";
	for (int i = 0; i < jumps; ++i) {
		cout << "\n\tJump #" << i + 1;
		cout << "\n\nMeters: " << meters[i];
		cout << "\nDate: " << date[i];
		cout << endl;
	}
	cout << "---------------\n";
}

void PersonalBest::orderJump()
{
	if (jumps > 1) {// can only order when more than 1 value in array
		int lowest = 0;// the index number where the lowest string is located
		bool swap = false;
		for (int i = 0; i < jumps - 1; i++)
		{
			lowest = i;
			for (int j = i + 1; j < jumps; j++)
			{
				if (meters[lowest] < meters[j] >
					0)
				{
					lowest = j;
					swap = true;
				}
			}
			if (swap) {
				double temp = meters[i];
				meters[i] = meters[lowest];
				meters[lowest] = temp;
				Date temp1 = date[i];
				date[i] = date[lowest];
				date[lowest] = temp1;
				swap = false;
			}
		}
	}
}

