/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: March 24, 2021
* Topic: Lab 3, Introduction to dynamic memory
* File name: lab03.cpp
* Anthony J. Colon Dominguez, #108365
*/
#include <iostream>
#include "Book.h"

Book** addBook(Book**, int&); // adds a book to the library
int findBook(Book**, int); // finds a book in the library
int findBook(Book**, int, string); // finds a book in the library
void removeBook(Book**, int&); // removes a book from the library
void printLibrary(Book**, int); // prints the list of the books in the library
int menu();

int main() {
	// Declare a Book pointer named library
	Book** library = nullptr;
	// Declare an integer variable named size and initialize it to 0
	int size = 0;
    int position = 0;
	// declare a boolean variable named continuar and initialize to true
	bool continuar = true;
	// add three books to the library, printing the information after each book is added
	// then remove two books
	while (continuar) {
		// develop the logic for the switch structure
		// if the selected option is to exit the program, the boolean varaible must be set to false
		switch (menu())
		{
		case 1:
			library = addBook(library, size);
			break;
		case 2:
            position = findBook(library, size);
            if (position != -1) {
                cout << "Book found!" << endl;
                cout << "Book: " << library[position]->getTitle() << endl;

            }
            else {
                cout << "Book was not found in library!" << endl;
            }
            cin.sync();
            break;
		case 3:
            removeBook(library, size);
			break;
		case 4:
			continuar = false;
			cout << "Exit Program...\n";
			break;
        default:
            cout << "Invalid input" << endl;
		}
		cout << endl;
	}
	// write a statement which prints the phrase "Program developed by [YOUR NAME], ID#[YOUR ID NUMBER]"
	// where the square brackets and the text within is substitued with your personal information.
	cout << "Program developed by Anthony J. Colon Dominguez, ID#108365";
	return 0;
}

// The menu method returns the selected option
int menu() {
	int option = 0;
	cout << "Select one of the following options:\n";
	cout << "\t1. Add a book to your library\n";
	cout << "\t2. Find a book in your library\n";
	cout << "\t3. Remove a book from your library\n";
	cout << "\t4. Exit the program\n";
	cout << "\nYour selection: ";
	cin >> option;
	return option;
}

// The addBook method receives a Book array and a pointer to the size of the array as parameters.
// It prompts the user for the book's title and author.
// It adds the book to the array, only if the book is not already in it, and increments the size counter.
// After a book is added, the complete list of books is printed
Book** addBook(Book** bookArray, int& size) //Changed the return type
{

    string title, author;
    cout << "Enter the name of the book: ";
    cin.ignore(100, '\n');
    getline(cin, title, '\n');

    //find out if the book is in the library
    if (findBook(bookArray, size, title) == -1) 
    {
        //If it is, print a message
        cout << "Name already exits.";
        cout << endl;
        return bookArray; 
    }
    // now ask for the author's name
    cout << "Enter the last name of the book's author: ";
    getline(cin, author, '\n');

    //now add the book
    if (size > 0)
    {
        Book** temp = bookArray; // create temporary array
        size++; // increment the size of the array
        bookArray = new Book * [size]; // create new array
        // copy the contents of the old array into the new one
        for (int i = 0; i < size - 1; i++)
        {
            bookArray[i] = temp[i];
        }
        // add the new book to the end of the array
        bookArray[size - 1] = new Book(title, author);
        // now delete the temporary array
        delete[] temp;

    }
    else {
        if (size == 0)
        {
            bookArray = new Book * [1];
            bookArray[0] = new Book(title, author);
            size++;
        }
    }
    printLibrary(bookArray, size);
    return bookArray; 
}
// The findBook method receives a Book array and a pointer to size of the array.
// The method prompts the user for the book's title and searches the array to find it.
// If found, it returns the position of the book in the array. If the book is not in the array the method returns -1.
// This method CANNOT change the values in the array!
int findBook(Book** BookArray, int size)
{
    string title;
    int i, position = -1;
    cout << "Enter the name of the book: ";
    cin.ignore(100, '\n');
    getline(cin, title);
    for (i = 0; i < size; i++)
    {
        if ((BookArray[i])->getTitle().compare(title) == 0)
            return i;

    }
    return -1;
}
int findBook(Book** BookArray, int size, string title)
{
    int i, position = 0;
    for (i = 0; i < size; i++)
    {
        if (BookArray[i]->getTitle() == title)
        {
            position = -1;
        }
        else
        {
            position = i;
        }
    }
    return position;
}
// The removeBook method receives a Book array and a pointer to size of the array.
// The method prompts the user for the book's title and searches the array to find it.
// If the book is found it is removed from the array. If the book is not in the array the method does nothing.
// If a book is removed the size counter must be decremented
// After a book is added, the complete list of books is printed
void removeBook(Book** bookArray, int &size) {
    string title = "", author = "";
    int i, removal = 0;
    cout << "Enter the name of the book you want to delete: ";
    cin.ignore(100, '\n');
    getline(cin, title);
    for (i = 0; i < size && removal == 0; i++) {
        if ((bookArray[i]->getTitle().compare(title) == 0))
        {
            removal = 1;
            for (int j = 1; j < size - 1; j++)
            {
                bookArray[j] = bookArray[j + 1];
            }
        }
    }
    if (removal == 1)
    {
        cout << "\nBook removed!\n";
        size--;
        if (size > 0)
        {
            printLibrary(bookArray, size);
        }
        else {
            cout << "\nNo books are left!\n\n";
        }
    }
    else 
    {
        cout << "This book does not exist\n";
    }
}
// The printLibrary method receives a Book array and the size of the array.
// It prints the list of all books in the library
void printLibrary(Book** bookArray, int size) {
	// use the following header
	printf("\nThe library contains the following books:\n");
    printf("# %*s %*s\n", bookArray[size]->getTitleSize(), "TITLE", bookArray[size]->getAuthorSize(), "AUTHOR");
	// Print the list of books, use a for structure
	for (int i = 0; i < size; i++)
	{
		bookArray[i]->printDetails();
        cout << endl;
	}
}