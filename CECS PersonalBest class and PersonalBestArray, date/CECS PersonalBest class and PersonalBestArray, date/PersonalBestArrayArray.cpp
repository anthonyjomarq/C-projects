#include "PersonalBestArrayArray.h"
int PersonalBestArrayArray::getSize() const
{
	return personalbestarray.getCount();
}
bool PersonalBestArrayArray::isValid(int index) const
{
	bool status;
	if (index < 0 || index >= getSize())
		status = false;
	else
		status = true;
	return status;
}
//void PersonalBestArrayArray::setPersonal(const PersonalBest& obj)
//{
//	personalbest->setAthlete(obj.getName(), obj.getMeters(), obj.getMonths(), obj.getDay(), obj.getYears());
//}
//void PersonalBestArrayArray::setPersonal(MyString aName, double aMeters, int dMonth, int dDay, int dYear)
//{
//	personalbest->setAthlete(aName, aMeters, dMonth, dDay, dYear);
//}
void PersonalBestArrayArray::setElement(int index, PersonalBest value)
{
	if (isValid(index))
		personalbest[index] = value;
	else
	{
		cout << "Error: Invalid subscript\n";
		system("pause");
		exit(EXIT_FAILURE);
	}
}
PersonalBest PersonalBestArrayArray::getElement(int index) const
{
	if (isValid(index)) {
		return personalbest[index];
	}
	else
	{
		cout << "Error: Invalid subscript\n";
		exit(EXIT_FAILURE);
	}
}


void PersonalBestArrayArray::subscriptError()
{
	cout << "ERROR: Subscript out of range.\n";
	exit(0);
}
//bool PersonalBestArrayArray::operator>(const PersonalBestArrayArray& obj)
//{
//	bool status;
//	if (personalbestarray.getPersonal().getMeters() > obj.personalbestarray.getPersonal().getMeters())
//		status = true;
//	else
//		status = false;
//	return status;
//}
//bool PersonalBestArrayArray::operator<(const PersonalBestArrayArray& obj)
//{
//	bool status;
//	if (personalbestarray.getPersonal().getMeters() < obj.personalbestarray.getPersonal().getMeters())
//		status = true;
//	else
//		status = false;
//	return status;
//}
PersonalBest& PersonalBestArrayArray::operator[](const int& sub)
{
	if (sub < 0 || sub >= getSize())
		subscriptError();
	return personalbest[sub];
}
PersonalBest PersonalBestArrayArray::operator[](int subscript) const
{
	// check for subscript out-of-range error
	if (subscript < 0 || subscript >= getSize())
		throw out_of_range("Subscript out of range");
	return personalbest[subscript]; // returns copy of this element
} // end function operator
//ostream& operator<<(ostream& out, PersonalBestArrayArray& obj)
//{
//	out << obj.personalbest;
//	out << endl;
//	return out;
//}
//istream& operator>>(istream& strm, PersonalBestArrayArray& obj)
//{
//	PersonalBest tmpPersonalBest;
//	strm >> tmpPersonalBest;
//
//	/*obj.setPersonal(tmpPersonalBest);*/
//	return strm;
//}