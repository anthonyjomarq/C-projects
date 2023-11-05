#include "PersonalBest.h"

PersonalBest::PersonalBest() : name(""), date(), feetInches() {
    feetInches = nullptr;
}
PersonalBest::PersonalBest(MyString  aName) {
    setName(aName);
    date = nullptr;
    feetInches = nullptr;
}
PersonalBest::~PersonalBest() {
    /*delete[] date;
    date = nullptr;
    delete[] feetInches;
    feetInches = nullptr;*/
}
PersonalBest::PersonalBest(const PersonalBest& obj)
{
    setName(obj.getName());
}
void PersonalBest::setName(MyString aName) {
    name = aName;
}

void PersonalBest::setDate(const Date& obj) {
    date->setDate(obj.getMonth(), obj.getDay(), obj.getYear());
}
void PersonalBest::setDate(int aMonth, int aDay, int aYear) {
    date->setDate(aMonth, aDay, aYear);
}
void PersonalBest::setFeetInches(const FeetInches& obj) {
    feetInches->setMeters(obj.getMeters());
}
void PersonalBest::setFeetInches(double aMeters, int aJumps) {
    feetInches->setMeters(aMeters);
}

MyString PersonalBest::getName()const {
    return name;
}
Date* PersonalBest::getDate()const {
    return date;
}
FeetInches* PersonalBest::getFeetInches()const {
    return feetInches;
}
void PersonalBest::orderJumps() {

    int lowest = 0;// the index number where the lowest string is located
    bool swap = false;
    for (int i = 0; i < 2; i++)
    {
        lowest = i;
        for (int j = i + 1; j < 3; j++)
        {
            if (feetInches[lowest].getMeters() < feetInches[j].getMeters() >
                0)
            {
                lowest = j;
                swap = true;
            }
        }
        if (swap) {
            FeetInches temp = feetInches[i];
            feetInches[i] = feetInches[lowest];
            feetInches[lowest] = temp;
            Date temp1 = date[i];
            date[i] = date[lowest];
            date[lowest] = temp1;
            swap = false;
        }
    }
}
void PersonalBest::setMeters(double aMeters)
{
    return feetInches->setMeters(aMeters);
}
double PersonalBest::getHeighest()
{
    return feetInches->getMeters();
}
istream& operator >> (istream& strm, PersonalBest& obj) {
    cout << "Enter the name of the vaulter athlete: ";
    strm >> obj.name;
    int size = 3;
    obj.feetInches = new FeetInches[size];
    obj.date = new Date[size];

    cout << "\nList of Jumps\n";
    cout << "---------------";
    for (int i = 0; i < size; i++) {
        cout << "\nJump #" << i + 1;
        strm >> obj.feetInches[i];
        strm >> obj.date[i];
    }
    cout << "---------------\n";
    obj.orderJumps();
    return strm;
}

ostream& operator << (ostream& strm, const PersonalBest& obj) {
    strm << "\nName: " << obj.getName();
    strm << "\nJumps of the vaulter\n";
    strm << "----------------------";
    int size = 3;
    for (int i = 0; i < size; i++)
    {
        cout << "\nJump #" << i + 1;
        strm << endl;
        strm << obj.feetInches[i];
        strm << obj.date[i] << endl;
        strm << endl;
    }
    strm << "----------------------\n";
    return strm;
}