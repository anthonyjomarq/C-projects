#pragma once
#include"Date.h"

using namespace std;

class FeetInches {
    // The FeetInches class holds distances or measurements
    // expressed in feet and inches.
private:

    double meters;
    double heighest; // Heighest meters in the array 

public:
    FeetInches();
    //constructor
    FeetInches(double aMeters, double aHeighest); //parameterized constructor
    ~FeetInches();

    FeetInches(const FeetInches& obj);
    // Mutator functions
    void setMeters(double aMeters);
    void setHeighest(double aHeighest);
    // Accessor functions
    double getMeters() const;
    double getHeighest() const;
    // Friends
    friend ostream& operator << (ostream&, const FeetInches&);
    friend istream& operator >> (istream&, FeetInches&);
};