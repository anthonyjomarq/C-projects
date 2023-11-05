//Car.cpp
#include "Car.h"
#include<cmath>
#include <string>
// initialize static variable to 0
int Car::count = 0;

// The default constructor initializes strings to "" and adds 1 to count
Car::Car() {
    brand = "";
    model = "";
    count++;
    serialNumber = "";
}

// The parameterized constructor initializes the name and brand fields
// to the parameter value and adds 1 to count
// calls the method to set the serial number
Car::Car(string aBrand, string aModel) {
    brand = strToUpper(aBrand);
    model = strToUpper(aModel);
    count++;
    //    setSerialNumber(serialNumber);
    setSerialNumber();
}

// destroys a Car object and prints the phrase
// "Car [brand name] [model name], serial number [serial number] has been removed"
Car::~Car() {
    cout << "Car " << getBrand() << " " << getModel() << " Serial Number " << getSerialNumber() << " has been removed.\n";
    //    cout << "Destroying object of Class Car\n";
}

// this is a private method which can only be invoked by the object itself
// sets the serial number for each new Car object
// the serial number is composed of the first two letters of the brand and model
// with the count value, in three digits, appended at the end.
// for example, if brand is Kia, model is Rio, and count is 1
// the serialnumber would be KiRi001 or KIRI001
void Car::setSerialNumber() {
    for (int i = 0; i < count; i++)
    {
        serialNumber = brand.substr(0, 2);  //substr(pos,len) starts at char position and spans len of chars
        serialNumber.append(model.substr(0, 2)); //append() function used to concatenate strings
        if (zeros() >= 1)
        {
            for (int j = 0; j < zeros(); j++)
            {
                serialNumber.append("0");
            } //end for j
        } //end if
        serialNumber.append(to_string(count)); //to_string converts numerical value to string
    } //end for i
}

// Sets the brand field to the parameter value
void Car::setBrand(string aBrand) {
    if (brand == "")
        brand = strToUpper(aBrand);
    if (brand != "")
        setSerialNumber();
}


// Sets the model field to the parameter value
void Car::setModel(string aModel) {
    if (model == "")
        model = strToUpper(aModel);
    if (model != "")
        setSerialNumber();
}

// returns the brand field's value
string Car::getBrand() const {
    return brand;
}

// returns the model field's value
string Car::getModel() const {
    return model;
}

// returns a car's serial number
string Car::getSerialNumber() const {
    return serialNumber;
}
//this method returns the amount of '0' to be added to the string
int Car::zeros() {

    if (count < 10)
        return 2;
    else if (count < 100)
        return 1;
    else
        return 0;

}

string  Car::strToUpper(string str) {
    for (size_t i = 0; i < str.length(); i++)
    {
        str[i] = (char)toupper(str[i]);
    }
    return str;
}

// returns the count of Car objects created
int Car::getCount() const {

    return count;
}

// prints the details about each car in the form
// serial number, brand name, model name
void Car::printCar() const
{
    printf("%-14s %-13s %-12s", getSerialNumber().c_str(), getBrand().c_str(), getModel().c_str());
}