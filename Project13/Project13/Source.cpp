// Fig. 9.7: fig09_07.cpp
// Demonstrating a utility function.
// Compile this program with SalesPerson.cpp

// include SalesPerson class definition from SalesPerson.h
#include "SalesPerson.h"

int main()
{
    SalesPerson s; // create SalesPerson object s

    s.getSalesFromUser(); // note simple sequential code;
    s.printAnnualSales(); // no control statements in main
    return 0;
} // end main