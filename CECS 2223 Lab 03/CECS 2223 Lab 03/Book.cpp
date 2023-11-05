/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: March 24, 2021
* Topic: Lab 3, Introduction to dynamic memory
* File name: Book.cpp
* Anthony J. Colon Dominguez, #108365
*/

#include "Book.h"

// initialize all class variables to 0
int Book::bookCounter = 0;
int Book::titleSize = 0;
int Book::authorSize = 0;
// All constructors call on the private method to set the book number
// the bookCounter class variable must be incremented
// the value of the class variable is the number of books created


// The setNumber method sets the value for book number, which is the cardinal count of 
// book objects created. Must use the corresponding class variable for this operation
void Book::setNumber() {
	bookNumber = ++bookCounter;
}

// The setTitleSize method sets the value for size of the author field, used for printing.
// The value must be 1 more than the longest title, hence, some selection logic
// must be implmented to make sure the value is correct.
// Must use the corresponding class variable for this operation
void Book::setTitleSize() {
	if (title.size() + 1 > titleSize) {
		titleSize = title.size() + 1;
	}
}
// The setAuthorSize method sets the value for size of the author field, used for printing.
// The value must be 1 more than the longest author's last name, hence, some selection logic
// must be implmented to make sure the value is correct.
// Must use the corresponding class variable for this operation
void Book::setAuthorSize() {
	if (authorLastName.size() + 1 > authorSize) {
		authorSize = authorLastName.size() + 1;
	}
}
// The default constructor initializes title and author to the empty string, ""
Book::Book() {
	title = "";
	authorLastName = "";
	setNumber();

}

// This constructor has the book's title and author as parameters
Book::Book(string aTitle, string author) {
	title = aTitle;
	authorLastName = author;
	setNumber();
}

// The title and author setters can only assign a value to the instance variable if it has none.
// Before the assignment operation, check if the value is not ""
// If the parameter is assigned, the method must call the appropriate setter for the size field.
void Book::setTitle(string aTitle) {
	if (title == "")
	{
		title = aTitle;
		setTitleSize();
	}
}
void Book::setAuthor(string author)
{
	if (authorLastName == "")
	{
		authorLastName = author;
		setAuthorSize();
	}
}
// define the getters here
string Book::getTitle() const
{
	return title;
}
string Book::getAuthor() const
{
	return authorLastName;
}
int Book::getNumber() const
{
	return bookNumber;
}
int Book::getTitleSize() const
{
	return titleSize;
}
int Book::getAuthorSize() const
{
	return authorSize;
}
// The printDetails method uses printf to output values formatted
// to be displayed in a table. The values to be displayed are: 
// book number, title, and author
// You should use the size class variables to define the width of the 
// title and author fields to be printed (use the * width specifier)
// All values must be printed in the same line.
void Book::printDetails() const {
	printf("%d %*s %*s", getNumber(), getTitleSize(), title.c_str(), getAuthorSize(), authorLastName.c_str());
}
