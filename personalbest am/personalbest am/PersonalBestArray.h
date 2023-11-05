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
    PersonalBestArray(int aNum, PersonalBest aPersonalBest);
    PersonalBestArray(const PersonalBestArray& obj);
    ~PersonalBestArray();
    //mutators
    void setNumberOfPlayers(int aNum);
    //accesors
    int getCount() const;
    PersonalBest getPersonal() const;
    int findAthlete(MyString aName);
    void findAthleteAndDisplay(MyString aName);
    void addAthlete(PersonalBest personal);
    void dropAthlete(MyString aName);
    void displayAthlete() const;
    void orderAthlete();
};