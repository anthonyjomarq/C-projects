#include <iostream>
#include <cstdlib>
using namespace::std;
#include "Bill.h"

//Constructor function
Bill::Bill() {
	mealCost = 0;
    tax = 0.0675;
    tip = 0.2;
      
}
Bill::Bill(double aCost) {
    mealCost = aCost;
    tax = 0.0675;
    tip = 0.2;

}
Bill::~Bill() {
    cout << "Destroyed object of data type Bill\n";
    system("pause");
}
//Mutators functions
void Bill::setCost(double aCost) {
    mealCost = aCost;
}
//Accesor function 
double  Bill::getCost() const {
    return mealCost;
}
double  Bill::getTax() const {
    return tax * mealCost;
}
double  Bill::getTip() const {
    return tip * (getTax() + mealCost);
}
double  Bill::getTotalCost() const {
    return getCost() + getTax() + getTip();
}
//Member functions
void  Bill::display() const {
    cout << "Meal Cost is $" << getCost() << endl;
    cout << "Tax amount is $" << getTax() << endl;
    cout << "Tip amount is $" << getTip() << endl;
    cout << "Total Bill is $" << getTotalCost() << endl;
}