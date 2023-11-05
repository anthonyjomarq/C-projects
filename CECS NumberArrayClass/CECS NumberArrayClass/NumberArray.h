#pragma once
#include <iostream>
using namespace::std;
class NumberArray
{
private:
	float* list;
	int arr_size;
public:
	//CONSTRUCTORS & DESTRUCTORS
	NumberArray();
	NumberArray(int size);
	NumberArray(NumberArray& obj);
	~NumberArray();
	//BASIC OPERATIONS
	NumberArray& setElement(int index, float element);
	float getElement(int index) const;
	int getSize() const;
	//CALCULATIONS
	float getHighest() const;
	float getLowest() const;
	float getAverage() const;
	//UTILS
	void initArray(int size);
	//+++++++++++++OPERATOR OVERRIDE++++++++++++++//
	// I/O Operators
	friend ostream& operator << (ostream& out, const NumberArray& obj);
	friend istream& operator >> (istream& inp, NumberArray& obj);
	// Relational Operators
	bool operator == (const NumberArray& obj) const;
	bool operator != (const NumberArray& obj) const;
	//Asignment Operator
	NumberArray& operator = (const NumberArray& obj);
	//Subscript Operator
	float operator [] (int index);
};