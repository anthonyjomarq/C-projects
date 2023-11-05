#pragma once 
/*
	CECS 2223, Computer Programming II Lab
	Spring 2021, Sec. 05
	Date: March 10, 2021
	Topic: Review
	File name: Box.h
	This file declares a class named Box
	Name: Anthony J. Colon Dominguez, ID#108365
*/
// write the using declaration
#include <iostream>
using namespace::std;
class Box {
private:
	int height;
	int width;
	int length;
	string name;
	// class variable has only one value for all objects
	static size_t size; // the size of the largest name
public:
	Box();
	Box(int); //receives the height
	Box(int, int);//receives the height and width
	Box(int, int, int);//receives the height, widht and length
	void setHeight(int);//sets the value for heigth
	void setWidth(int);//sets the value for width
	void setLength(int);//sets the value for length
	void setName(string);
	int getHeight() const;//getter for height
	int getWidth() const;//getter for width
	int getLength() const;//getter for length
	size_t getSize() const;
	string getName() const;
	int getVolume () const;// volume = width x length x height
	void printBox() const;
};
