#include "PersonalBestArray.h"
PersonalBestArray::PersonalBestArray()
{
	numberOfPlayers = 0;
	PersonalBest* temp = personalbest;
	personalbest = new PersonalBest[numberOfPlayers];
	for (int count = 0; count < getCount(); count++)
		personalbest[count] = temp[count];

}
PersonalBestArray::PersonalBestArray(int aNum)
{
	numberOfPlayers = aNum;
	PersonalBest* temp = personalbest;
	personalbest = new PersonalBest[++numberOfPlayers];
	for (int count = 0; count < getCount(); count++)
		personalbest[count] = temp[count];
}
PersonalBestArray::PersonalBestArray(int aNum, MyString aName, int dMonth, int dDay, int dYear, double aMeters)
{
	numberOfPlayers = aNum;
	PersonalBest* temp = personalbest;
	personalbest = new PersonalBest[numberOfPlayers];
	for (int count = 0; count < getCount(); count++)
		personalbest[count] = temp[count];
	personalbest->setAthlete(aName, aMeters, dMonth, dDay, dYear);
}
PersonalBestArray::PersonalBestArray(int aNum, Date aDate, PersonalBest aPersonalBest)
{
	personalbest = new PersonalBest[aNum];
	setNumberOfPlayers(aNum);
}
PersonalBestArray::PersonalBestArray(const PersonalBestArray& obj)
{
	setNumberOfPlayers(obj.getCount());
}
PersonalBestArray::~PersonalBestArray()
{
	delete[] personalbest;
	personalbest = nullptr;
}

PersonalBest PersonalBestArray::getPersonal() const
{
	return *personalbest;
}
void PersonalBestArray::setNumberOfPlayers(int aNum)
{
	numberOfPlayers = aNum;
}
int PersonalBestArray::getCount() const
{
	return numberOfPlayers;
}

int PersonalBestArray::findAthlete(MyString aName)
{
	for (int i = 0; i < numberOfPlayers; ++i)
	{
		if (personalbest[i].getName() == aName)
		{
			return i;
		}
	}
	return -1;
}
void PersonalBestArray::addAthlete(PersonalBest personalb)
{
	int index = 0;// variable to store the index number
	if (findAthlete(personalb.getName()) == -1)
	{
		personalbest[numberOfPlayers] = personalb;
		numberOfPlayers++;
	}
	else
	{
		cout << "-----------------------------------------------------------\n";
		cout << "\tAthlete " << personalb.getName() << " is already added!\n";
		cout << "-----------------------------------------------------------\n";
	}
	orderAthlete();
}

void PersonalBestArray::dropAthlete(MyString name)
{
	int location = findAthlete(name);
	if (findAthlete(name) != -1) {
		personalbest[location].setMeters(0);
		orderAthlete();//Orders so that the last array will be deleted
		numberOfPlayers--;
		personalbest[location].~PersonalBest();
		cout << "-----------------------------------------------------------\n";
		cout << "\tAthlete " << name << " is getting removed!\n";
		cout << "-----------------------------------------------------------\n";
	}
	else {
		cout << "-----------------------------------------------------------\n";
		cout << "\tAthlete " << name << " is not in the list!\n";
		cout << "-----------------------------------------------------------\n";

	}
}

void PersonalBestArray::displayAthlete() const
{
	if (numberOfPlayers <= 0) {
		cout << "\nDisplaying...\n";
		cout << "There are no athletes in the list!!" << endl;
		cout << "-----------------------------------------------------------\n";
	}
	else{
		cout << "\nList of Athlete\n";
		cout << "---------------";
		for (int i = 0; i < getCount(); ++i) {
			cout << "\nAthlete #" << i + 1;
			cout << personalbest[i];
			cout << endl;
		}
		cout << "---------------\n";
	
	}
}

void PersonalBestArray::orderAthlete()
{
	if (numberOfPlayers > 1) {// can only order when more than 1 value in array
		int lowest = 0;// the index number where the lowest string is located
		bool swap = false;
		for (int i = 0; i < numberOfPlayers - 1; i++)
		{
			lowest = i;
			for (int j = i + 1; j < numberOfPlayers; j++)
			{
				if (personalbest[lowest].getMeters() < (personalbest[j].getMeters()) >
					0)
				{
					lowest = j;
					swap = true;
				}
			}
			if (swap) {
				PersonalBest temp = personalbest[i];
				personalbest[i] = personalbest[lowest];
				personalbest[lowest] = temp;
				swap = false;
			}
		}
	}

}

