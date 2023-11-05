/* SORTABLEVECTOR_H */
#include"SimpleVector.h"
#include<iostream>
#ifndef SORTABLEVECTOR_H
#define SORTABLEVECTOR_H

using namespace std;

template <class T>
class SortableVector : public SimpleVector<T> {
private:

public:
	SortableVector(int size) : SimpleVector<T>(size) { }
	SortableVector(const SortableVector& orig);
	virtual ~SortableVector() {}
	T getElementAt(int sub);
	void sort();

};

template <class T> // to sort the content
SortableVector<T> ::SortableVector(const SortableVector& obj) : SimpleVector<T>(obj.size()) {
	for (int count = 0; count < this->size(); count++)
		this->operator [](count) = obj[count];
}

template <class T>
void SortableVector<T>::sort() {
    int startScan;
    int minIndex;
    T minValue;
    int lastValue = this->getItemCount() - 1;
    for (startScan = 0; startScan < lastValue; startScan++)
    {
        minIndex = startScan;
        minValue = this->operator[](startScan);
        for (int index = startScan + 1; index < this->getItemCount(); index++)
        {
            if (this->operator[](index) < minValue)
            {
                minValue = this->operator[](index);
                minIndex = index;
            }
        }
        this->operator[](minIndex) = this->operator[](startScan);
        this->operator[](startScan) = minValue;
    }
}

template <class T>
T SortableVector<T>::getElementAt(int sub) {
	return SimpleVector<T>::getElementAt(sub);
}

#endif
