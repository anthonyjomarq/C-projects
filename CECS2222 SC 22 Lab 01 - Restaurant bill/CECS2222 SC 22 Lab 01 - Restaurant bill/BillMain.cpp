#include <iostream>
using namespace std;
#include "Bill.h"

int main() {
    Bill bill1;
    double mealCost, tax, tip;
    cout << "Enter the meal cost: $";
    cin >> mealCost;
    bill1.setCost(mealCost);
    bill1.display();
    system("pause");
    return 0;
}