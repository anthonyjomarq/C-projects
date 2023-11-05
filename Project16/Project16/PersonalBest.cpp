#include "PersonalBest.h"

PersonalBest::PersonalBest(): date() {
	name = "";
	meters = nullptr;
}

PersonalBest::PersonalBest(MyString aName, double aMeters, int aMonth, int aDay, int aYear)
{
	setName(aName);
	//setMeters(aMeters);
	//setDate(aMonth, aDay, aYear);
	meters = nullptr;
	date = nullptr;
}

//PersonalBest::PersonalBest(const PersonalBest& obj)
//{
//	setName(obj.getName());
//	setMeters(obj.getMeters());
//	setDate(obj.getDate());
//}
PersonalBest::~PersonalBest()
{
}
/*void PersonalBest::setAthlete(const PersonalBest& obj)
{
	setName(obj.getName());
	setMeters(obj.getMeters());
	setDate(obj.getDate());
}*/
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

Date* PersonalBest::getDate() const
{
	return date;
}

//int PersonalBest::getDay() const
//{
//	return date->getDay();
//}
//
//int PersonalBest::getMonths() const
//{
//	return date->getMonth();
//}
//
//int PersonalBest::getYears() const
//{
//	return date->getYear();
//}

ostream& operator<<(ostream& out, PersonalBest& obj)
{
	int size = 3;
	out << "\nName: " << obj.name;
	cout << "\nList of Jumps\n";
	for (int i = 0; i < size ; i++)
	{
		cout << "Jump #" << i + 1;
		cout << endl;
		/*out << "\nMeters: " << obj.meters[i];*/
		out << "\nDate: " << obj.date[i];
		cout << endl;
	}
	return out;
}


istream& operator>>(istream& strm, PersonalBest& obj)
{
	int size = 3;
	cout << "\nEnter the name of the athlete: ";
	strm >> obj.name;
	obj.meters = new double[size];
	obj.date = new Date[size];
	cout << "\nList of Jumps\n";
	cout << "---------------";
	for (int i = 0; i < size; i++) {
		/*do {*/
		cout << "\n\Jump #" << i + 1;
			/*cout << "\nEnter meters: ";*/
			/*strm >> obj.meters[i];
			if (obj.meters[i] < 2 || obj.meters[i] > 5) {
				cout << "Error! The measuremente in meters cannot be less than 2 or more than 5.\n";
			}
		} while (obj.meters[i] < 2 || obj.meters[i] > 5);*/
		strm >> obj.date[i];
		cout << endl << endl;
	}
	//int lowest = 0;// the index number where the lowest string is located
	//bool swap = false;
	//for (int i = 0; i < 3 - 1; i++)
	//{
	//	lowest = i;
	//	for (int j = i + 1; j < 3; j++)
	//	{
	//		if (obj.meters[lowest] < obj.meters[j] >
	//			0)
	//		{
	//			lowest = j;
	//			swap = true;
	//		}
	//	}
	//	if (swap) {
	//		double temp = obj.meters[i];
	//		obj.meters[i] = obj.meters[lowest];
	//		obj.meters[lowest] = temp;
	//		Date temp1 = obj.date[i];
	//		obj.date[i] = obj.date[lowest];
	//		obj.date[lowest] = temp1;
	//		swap = false;
	//	}
	//}
	//cout << "---------------\n";
	return strm;
}