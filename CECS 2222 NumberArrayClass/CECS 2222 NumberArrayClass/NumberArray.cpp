#include "NumberArray.h"

NumberArray::NumberArray() {
	this->list = nullptr;
	this->arr_size = 0;
}

NumberArray::NumberArray(int size) {
	this->list = new float[size];
	this->arr_size = size;
}

NumberArray::NumberArray(NumberArray& obj) {
	this->arr_size = obj.getSize();
	this->list = new float[arr_size];
	for (int i = 0; i < arr_size; i++) {
		this->setElement(i, obj.getElement(i));
	}
}

NumberArray::~NumberArray() {
	delete[] list;
	list = nullptr;
}

NumberArray& NumberArray::setElement(int index, float element) {
	if (index < 0 || index >= getSize()) { throw invalid_argument("ERROR: Index out of Range!"); }
	*(list + index) = element;
	return *this;
}

float NumberArray::getElement(int index) const {
	return *(list + index);
}

int NumberArray::getSize() const {
	return arr_size;
}

float NumberArray::getHighest() const {
	float highest = getElement(0);
	for (int i = 1; i < arr_size; i++) {
		if (highest < getElement(i)) { highest = getElement(i); }
	}
	return highest;
}

float NumberArray::getLowest() const {
	float lowest = getElement(0);
	for (int i = 1; i < arr_size; i++) {
		if (lowest > getElement(i)) { lowest = getElement(i); }
	}
	return lowest;
}

float NumberArray::getAverage() const {
	float total = 0;
	for (int i = 0; i < arr_size; i++) {
		total += getElement(i);
	}
	return total / arr_size;
}

void NumberArray::initArray(int size) {
	if (list != nullptr) { delete[] list; }
	this->list = new float[size];
	this->arr_size = size;
}

bool NumberArray::operator==(const NumberArray& obj) const
{
	//Condition first evaluates that both sizes are equal, a minimum requirement
	if (this->getSize() == obj.getSize()) {
		/*If sizes are equal, this 'for' compares element values one
		by one at the same index, if a single evaluation is false,
		the function returns false. */
		for (int i = 0; i < getSize(); i++) {
			if (this->getElement(i) != obj.getElement(i)) {
				//Returns false if any evaluation is false.
				return false;
			}
			//Returns true only if both arrays have the same elements in the same positions.
			else { return true; }
		}
	}
	//Return false immediately if Arrays do have same size.
	else { return false; }
} //Worst case O(n)

bool NumberArray::operator!=(const NumberArray& obj) const
{
	//Invokes the == operrator with a logic NOT
	return !(*this == obj);
}

NumberArray& NumberArray::operator=(const NumberArray& obj)
{
	if (list != nullptr) { delete[] list; }
	this->arr_size = obj.getSize();
	this->list = new float[arr_size];
	for (int i = 0; i < arr_size; i++) {
		this->setElement(i, obj.getElement(i));
	}
	return *this;
}

float NumberArray::operator[](int index)
{
	return getElement(index);
}

ostream& operator << (ostream& out, const NumberArray& obj) {
	out << "size:" << obj.getSize() << " [" << obj.getElement(0);
	for (int i = 1; i < obj.getSize(); i++) {
		out << ", " << obj.getElement(i);
	}
	out << "]";
	return out;
}

istream& operator>>(istream& inp, NumberArray& obj)
{
	float element;
	int index;
	bool finished = false;
	cout << "Enter the Float element to insert : ";
	cin >> element;
	while (!finished) {
		try {
			cout << "Enter the Index for the element : ";
			cin >> index;
			obj.setElement(index, element);
			finished = true;
		}
		catch (invalid_argument e) {
			cout << e.what() << endl << "Try again!" << endl;
		}
	}
	return inp;
}


