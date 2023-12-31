#ifndef CAR_H 
#define CAR_H
#include "Automobile.h"
#include <string>
using namespace std;
// The Car class represents a car. 
class Car : public Automobile
{
private:
    int doors;

public:
    // Default constructor 
    Car();
    // Constructor #2 
    Car(string carMake, int carModel, int carMileage,
        double carPrice, int carDoors);
    // Accessor for doors attribute 
    void setDoors(int aDoors);
    int getDoors() const;
    friend ostream& operator << (ostream& strm, const Car& obj);
    friend istream& operator >> (istream& strm, Car& obj);
};
#endif