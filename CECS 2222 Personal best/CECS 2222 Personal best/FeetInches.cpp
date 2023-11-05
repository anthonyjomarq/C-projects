//File FeetInches.cpp
#include "FeetInches.h"

FeetInches::FeetInches() {
	feet = 0;
	inches = 0;

}
FeetInches::FeetInches(int f, int i) {
	feet = f;
	inches = i;
}
FeetInches::~FeetInches()
{
	//cout << "\nDESTROYING OBJECT\n";
	//system("pause");
}
void FeetInches::set(int f, int i)
{
	feet = f;
	inches = i;
}
void FeetInches::setFeet(int f)
{
	feet = f;
}
void FeetInches::setInches(int i)
{
	inches = i;
}
int FeetInches::getFeet() const
{
	return feet;
}
int FeetInches::getInches() const
{
	return inches;
}

void FeetInches::display() const
{
	cout << "Feet: " << getFeet() << endl;
	cout << "Inches: " << getInches() << endl;
}


ostream& operator<<(ostream& out, FeetInches& obj)
{
	out << "\nMeters: " << (obj.feet / 3.281) + (obj.inches / 39.37) << endl;
	return out;
}

istream& operator>>(istream& inp, FeetInches& obj)
{
	double meters;
	do {
		cout << "Enter the amount of feets: ";
		inp >> obj.feet;
		cout << "Enter the amount of inches: ";
		inp >> obj.inches;
		meters = (obj.feet / 3.281) + (obj.inches / 39.37);
		if (meters < 2 || meters > 5) {
			cout << "Error! The measuremente in meters cannot be less than 2 or more than 5.\n";
			cout << "Dont put less than 6 feet and 7 inches or more than 16 feet and 4 inches.\n";
		}
	} while (meters < 2 || meters > 5);
	return inp;
}
