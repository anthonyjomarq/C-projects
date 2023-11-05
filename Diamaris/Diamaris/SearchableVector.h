#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H
#include "SimpleVector.h"

template <class T>
class SearchableVector : public SimpleVector<T> {
public:

	SearchableVector(); // Default constructor
	SearchableVector(int size); // Constructor
	SearchableVector(const SearchableVector&); // Copy constructor

	int findItem(const T); // Accessor to find an item
};

// Default constructor
template <class T>
SearchableVector<T>::SearchableVector() : SimpleVector<T>() { }

// Constructor
template <class T>
SearchableVector<T>::SearchableVector(int size) : SimpleVector<T>(size) { }

// Copy constructor 
template <class T>
SearchableVector<T>::SearchableVector(const SearchableVector& obj)
	: SimpleVector<T>(obj.getArraysize()) {
	for (int count = 0; count < this->getArraysize(); count++)
		this->operator[](count) = obj[count];
}

//********************************************************
// findItem function *
// This function searches for item. If item is found *
// the subscript is returned. Otherwise −1 is returned. *
//********************************************************
template <class T>
int SearchableVector<T>::findItem(const T item) {

	int first = 0,
		last = this->getItemCount() - 1,
		middle;

	int position = -1;

	//loop repeats
	while (first <= last) {
		middle = (first + last) / 2;
		if (this->operator[](middle) == item) {
			return middle;
		} // end if 
		else if (this->operator[](middle) > item) {
			last = middle - 1;
		} // end else if 
		else {
			first = middle + 1;
		} // end else
	} // end while
	return position;
}
#endif
