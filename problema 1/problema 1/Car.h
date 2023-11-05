#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
using namespace::std;

class Car
{
private:
    int year;
    string make;
    int speed;
public:
    //Constructor 
    Car(int y, string m) {
        year = y;
        make = m;
        speed = 0;
    }
    int getYear() {
        return year;
    }
    string getMake() {
        return make;
    }
    int getSpeed() {
        return speed;
    }
    void accelerate() {
        speed += 5;
    }
    void brake() {
        speed -= 5;
    }
};
#endif

