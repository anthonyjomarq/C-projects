/*
* CECS 2223, Computer Programming II Lab
* Spring 2021, Sec. 05
* Date: March 24, 2021
* Topic: Lab 3, Introduction to dynamic memory
* File name: lab03.cpp
* YOUR NAME HERE, YOUR ID# HERE
*/
#include "Book.h"
#include <string>

void addBook(Book**&, int&); // adds a book to the library
int findBook(Book**, int); // finds a book in the library
int findBook(Book**, int, string); // finds a book in the library
void removeBook(Book**&, int&); // removes a book from the library
void printLibrary(Book**, int); // prints the list of the books in the library
void orderByTitle(Book**&, int); // orders the books in the library alphabetically by title
void orderByAuthor(Book**&, int); // orders the books in the library alphabetically by author
int orderMenu();
int menu();

int main() {
	// Declare a Book pointer named library
	Book** library = nullptr;
	Book* otherLibrary = nullptr;

	// Declare an integer variable named size and initialize it to 0
	int size = 0;
	// declare a boolean variable named continuar and initialize to true
	bool continuar = true;
	int option = 0;
	// add three books to the library, printing the information after each book is added
	// then remove two books
	while (continuar) {
		// develop the logic for the switch structure
		// if the selected option is to exit the program, the boolean varaible must be set to false
		switch (menu()) {
		case 1:
			addBook(library, size);
			break;
		case 2:
			findBook(library, size);
			break;
		case 3:
			removeBook(library, size);
			break;
		case 4:
			option = orderMenu();
			if (option == 1)
				printLibrary(library, size);
			else if (option == 2) {
				orderByTitle(library, size);
				cout << "\nThe books in the library, by title, are:\n";
				printLibrary(library, size);
			}
			else if (option == 3) {
				orderByAuthor(library, size);
				cout << "\nThe books in the library, by author, are:\n";
				printLibrary(library, size);
			}
			else {
				cout << "\nERROR: Wrong option selected!\n";
			}
			break;
		case 5:
			cout << "\nGoodbye\n";
			continuar = false;
			break;
		default:
			cout << "\nERROR! Wrong option selected! Try again.\n";
		}
		cout << endl;
	}
	// write a statement which prints the phrase "Program developed by [YOUR NAME], ID#[YOUR ID NUMBER]"
	// where the square brackets and the text within is substitued with your personal information.
	if (size > 0) {
		for (int i = 0; i < size; i++)
			library[i]->~Book();
		delete[] library;
	}
	return 0;
}

// The menu method returns the selected option
int menu() {
	string input = "";
	cout << "Select one of the following options:\n";
	cout << "\t1. Add a book to your library\n";
	cout << "\t2. Find a book in your library\n";
	cout << "\t3. Remove a book from your library\n";
	cout << "\t4. List the books in your library\n";
	cout << "\t5. Exit the program\n";
	cout << "\n\tYour selection: ";
	getline(cin, input, '\n');
	if (isdigit(input[0])) {
		//returnValue = input[0];
		return atoi(input.c_str());
	}
	else
		return 0;
}

// The addBook method receives a Book array and a pointer to the size of the array as parameters.
// It prompts the user for the book's title and author.
// It adds the book to the array, only if the book is not already in it, and increments the size counter.
// After a book is added, the complete list of books is printed
void addBook(Book**& bookArray, int& size) {
	string title = "", author = "";
	//cin.ignore();
	cout << "Enter the title of the book: ";
	getline(cin, title, '\n');
	//cin.ignore();
	// find out if the book is in the libray
	if (findBook(bookArray, size, title) != -1) {
		// If it is, print a message
		cout << "The book is already in the library!" << endl;
	}
	else {
		// now ask for the author's name
		//cin.ignore();
		cout << "Enter the last name of the book's author: ";
		getline(cin, author, '\n');
		// now add the book
		if (size > 0) {
			Book** temp = bookArray; // create temporary array
			size++; // increment the size of the array
			bookArray = new Book * [size]; // create new array
			// copy the contents of the old array into the new one
			for (int i = 0; i < size - 1; i++) {
				bookArray[i] = temp[i];
			}
			// add the new book to the end of the array
			bookArray[size - 1] = new Book(title, author);
			// now delete the temporary array
			delete[] temp;
		}
		else {
			if (size == 0) {
				bookArray = new Book * [++size];
				bookArray[0] = new Book(title, author);
			}
		}
		// print the book list
		//printLibrary(bookArray, size);
	}
}


// The findBook method receives a Book array and a pointer to size of the array.
// The method prompts the user for the book's title and searches the array to find it.
// If found, it returns the position of the book in the array. If the book is not in the array the method returns -1.
// This method CANNOT change the values in the array!
int findBook(Book** books, int size) {
	if (size == 0)
		return -1;
	else {
		string aTitle = "";
		cin.ignore();
		cout << "Enter the title of the book to find: ";
		getline(cin, aTitle);
		for (int i = 0; i < size; i++) {
			if (books[i]->getTitle() == aTitle) {
				cout << "The book " << aTitle << " is in the library\n";
				return i;
			}
		}
		return -1;
	}
}

int findBook(Book** books, int size, string aTitle) {
	if (size == 0)
		return -1;
	else {
		for (int i = 0; i < size; i++) {
			if (books[i]->getTitle() == aTitle)
				return i;
		}
		return -1;
	}
}
// The removeBook method receives a Book array and a pointer to size of the array.
// The method prompts the user for the book's title and searches the array to find it.
// If the book is found it is removed from the array. If the book is not in the array the method does nothing.
// If a book is removed the size counter must be decremented
// After a book is removed, the complete list of books is printed
/*
* In order to remove a book it MUST exist in the library, so check for this at start
* 1. Prompt for title
* 2. Use findBook to make sure it is in the library
* 3. Use the return value from findBook to skip copy
* 4. Decrement size
*/
/*
* prompt-> title
* int position = findBook(Book**,size,title)
* if(position != -1){
* size--;
* Book** temp = bookArray;
* bookArray = new Book*[size];
* Do not copy the book to be removed
* int j = 0;
* for(int i = 0; i < size + 1; i++){
* if(i != position){
* if(j < size)
* bookArray[j] = temp[i]
* j++;
* }
* }
*/
void removeBook(Book**& books, int& size) {
	if (books == nullptr)
		cout << "\nThere are no books in the library!\n";
	else {
		string aTitle = "";
		cin.ignore();
		cout << "Enter the title of the book to be removed: ";
		getline(cin, aTitle);
		int index = findBook(books, size, aTitle);
		if (index == -1)
			cout << "\nThe book is not in the library!\n";
		else if (size == 1) {
			books[0]->~Book();
			size = 0;
			books = nullptr;
			printLibrary(books, size);
		}
		else {
			Book** temp = books;
			size--;
			books = new Book * [size];
			int newIndex = 0;
			for (int i = 0; i < size + 1; i++) {
				if (i != index && newIndex < size) {
					books[newIndex] = temp[i];
					newIndex++;
				}
			}
			temp[index]->~Book();
			delete[] temp;
			//printLibrary(books, size);
		}
	}
}
// The printLibrary method receives a Book array and the size of the array.
// It prints the list of all books in the library
void printLibrary(Book** books, int size) {
	// use the following header
	if (books == nullptr) // if size == 0
		cout << "\nThere are no books in the library!\n";
	else {
		cout << "The library contains the following books:\n";
		printf("#  %-*s%-*s\n", books[0]->getTitleSize(), "TITLE", books[0]->getAuthorSize(), "AUTHOR");
		for (int i = 0; i < size; i++)
			books[i]->printDetails();
		cout << endl;
	}
	// printf requires the use of the .c_str() method for all strings used from return values
	// Print the list of books, use a for structure
}

void orderByTitle(Book**& books, int size) {
	// first, check if the array is empty
	if (size > 0 && *books != nullptr) {
		// lets implement the select sort algorithm
		string lowest = "";
		int index = 0;
		Book* ptr = nullptr;
		for (int i = 0; i < size - 1; i++) {
			lowest = books[i]->getTitle();
			for (int j = i + 1; j < size; j++) {
				if (lowest.compare(books[j]->getTitle()) > 0) {
					index = j;
					lowest = books[j]->getTitle();
					ptr = books[j];
				}
			}
			if (index > 0) { // a lower string was found
				// swap
				books[index] = books[i];
				books[i] = ptr;
				index = 0;
				ptr = nullptr;
			}
		}
	}
}

void orderByAuthor(Book**& books, int size) {
	// first, check if the array is empty
	if (size > 0 && *books != nullptr) {
		// lets implement the select sort algorithm
		string lowest = "";
		int index = 0;
		Book* ptr = nullptr;
		for (int i = 0; i < size - 1; i++) {
			lowest = books[i]->getAuthor();
			for (int j = i + 1; j < size; j++) {
				if (lowest.compare(books[j]->getAuthor()) > 0) {
					index = j;
					lowest = books[j]->getAuthor();
					ptr = books[j];
				}
			}
			if (index > 0) { // a lower string was found
				// swap
				books[index] = books[i];
				books[i] = ptr;
				index = 0;
				ptr = nullptr;
			}
		}
	}
}

int orderMenu() {
	string input = "";
	cout << "Order books by:\n";
	cout << "\t1. Book number\n";
	cout << "\t2. Title\n";
	cout << "\t3. Author\n";
	cout << "\n\tYour selection: ";
	getline(cin, input, '\n');
	if (isdigit(input[0])) {
		//returnValue = input[0];
		return atoi(input.c_str());
	}
	else
		return 0;
}