#pragma once
#include"Date.h"
#include"FeetInches.h"
#include "MyString.h"

class PersonalBest
{
private:
    MyString name;
    Date* date;
    FeetInches* feetInches;
public:
    PersonalBest();
    PersonalBest(MyString aName);
    ~PersonalBest();
    PersonalBest(const PersonalBest& obj);
    //mutators
    void setAthlete(MyString aName, Date aDate, FeetInches aFeetInches);
    void setName(MyString aName);
    void setDate(const Date& obj);
    void setDate(int aMonth, int aDay, int aYear);
    void setFeetInches(const FeetInches& obj);
    void setFeetInches(double aMeters, int aJumps);
    void orderJumps();
    void setMeters(double aMeters);
    //accesors
    double getHeighest();//Heighest meter in the array
    MyString getName()const;
    Date* getDate()const;
    FeetInches* getFeetInches()const;
    friend ostream& operator << (ostream& strm, const PersonalBest& obj);
    friend istream& operator >> (istream& strm, PersonalBest& obj);

};