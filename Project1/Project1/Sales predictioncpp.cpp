#include <iostream>
#include <iomanip>
using namespace::std;
//CECS2200 09 Anthony Colon Dominguez #108365

int main() {
    float drinker, flavored;
    const float customers = 16500, DRINKER = .15, FLAVORED = .58;
    drinker = customers * DRINKER;
    flavored = customers * FLAVORED;
    cout << setprecision(0) << fixed << showpoint;
    cout << "Out of 16500 customer the amount of customers that buy one or more energy drinks per week approximately is: " << drinker << endl;
    cout << "Out of 16500 customer the amount of customers that prefer citrus-flavored energy drinks approximately is: " << flavored << endl;

    system("pause");
    return 0;
}