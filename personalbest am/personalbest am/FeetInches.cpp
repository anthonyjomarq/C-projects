#include "FeetInches.h"


//default constructor: initialize member variables to their null values
FeetInches::FeetInches() {
    meters = 0;
    heighest = 0;
}

//parameterized constructor
FeetInches::FeetInches(double aMeters, double aHeighest)
{
    setMeters(aMeters);
    setHeighest(aHeighest);
}

FeetInches::~FeetInches() {
    //cout << "Destroying objects type FeetInches..." << endl;
    //system("pause");
}

void FeetInches::setMeters(double aMeters)
{
    meters = aMeters;
}
void FeetInches::setHeighest(double aHeighest)
{
    heighest = aHeighest;
}
double FeetInches::getMeters() const
{
    return meters;
}
double FeetInches::getHeighest() const
{
    return heighest;
}
// copy constreuctor
FeetInches::FeetInches(const FeetInches& obj) {
    setMeters(obj.getMeters());
    setHeighest(obj.getHeighest());
}
ostream& operator << (ostream& strm, const FeetInches& obj)
{
    strm << "\nMeters: " << obj.meters << endl;
    return strm;
}
istream& operator >> (istream& strm, FeetInches& obj)
{
    do {
        cout << "\nEnter meters: ";
        strm >> obj.meters;
        if (obj.meters < 2 || obj.meters > 5) {
            cout << "Error! The measuremente in meters cannot be less than 2 or more than 5.\n";
        }
    } while (obj.meters < 2 || obj.meters > 5);
    return strm;
}