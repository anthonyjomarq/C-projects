#pragma once
// Fig. 9.5: SalesPerson.h
// SalesPerson class definition.
// Member functions defined in SalesPerson.cpp.
#ifndef SALESP_H
#define SALESP_H

class SalesPerson
{
public:
    SalesPerson(); // constructor
    void getSalesFromUser(); // input sales from keyboard
    void setSales(int, double); // set sales for a specific month
    void printAnnualSales(); // summarize and print sales
private:
    double totalAnnualSales(); // prototype for utility function
    double sales[12]; // 12 monthly sales figures
}; // end class SalesPerson
#endif
