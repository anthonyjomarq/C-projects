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
    PersonalBest(MyString aName,
        int aMonth, int aDay, int aYear,
        int aFeet, int aInches, int aJumps);
    ~PersonalBest();
    void setName(MyString aName);
    void setDate(const Date& obj);
    void setDate(int aMonth, int aDay, int aYear);
    void setFeetInches(const FeetInches& obj);
    void setFeetInches(double aMeters, int aJumps);
    void orderJumps();
    void setMeters(double aMeters);
    double getHeighest();//Heighest meter in the array
    MyString getName()const;
    Date* getDate()const;
    FeetInches* getFeetInches()const;



    friend ostream& operator << (ostream& strm, const PersonalBest& obj);
    friend istream& operator >> (istream& strm, PersonalBest& obj);

};