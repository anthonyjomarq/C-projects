/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: March 24, 2021
* Topic: Lab 3, Introduction to dynamic memory
* File name: Book.h
* Anthony J. Colon Dominguez, #108365
*/
#pragma once
// include any required header files
#include <iostream>
#include <string>
using namespace::std;

class Book {
private:
	string title;
	string authorLastName;
	int bookNumber;
	static int bookCounter; // class variable
	static int titleSize; // class variable for the size of the title field for printing
	static int authorSize; // class variable for the size of the author field for printing
	void setNumber(); // private method to set the book number
	void setTitleSize(); // private method to set the size of the title field for printing
	void setAuthorSize(); // private method to set the size of the author field for printing
public:
	Book();
	Book(string, string); // the parameters are the book's title and author
	void setTitle(string);
	void setAuthor(string);
	string getTitle() const;
	string getAuthor() const;
	int getNumber() const;
	int getTitleSize() const;
	int getAuthorSize() const;
	void printDetails() const;
};

