#pragma once
#include "PersonalBest.h"
class PersonalBestArray
{
private:
    PersonalBest* personalbest;//Pointer to the array.
    int numberOfPlayers; //Number Of Elements.
public:
    PersonalBestArray();
    PersonalBestArray(int aNum);
    PersonalBestArray(int aNum, MyString aName, int dMonth, int dDay, int dYear, double aMeters);
    PersonalBestArray(int aNum, Date aDate, PersonalBest aPersonalBest);
    PersonalBestArray(const PersonalBestArray& obj);
    ~PersonalBestArray();
    void setNumberOfPlayers(int aNum);
    int getCount() const;
    PersonalBest getPersonal() const;
    int findAthlete(MyString aName);
    void addAthlete(PersonalBest personal);
    void dropAthlete(MyString aName);
    void displayAthlete() const;
    void orderAthlete();
};