//main.cpp
#include "ContactInfo.h"
#include "SearchableVector.h"
#include "SimpleVector.h"
#include "SortableVector.h"

int main() {
	ContactInfo contactInfo;

	int numOfElements;
	int index = 0;

	cout << "Enter the amount of elements in the array: ";
	cin >> numOfElements;
	cout << endl;
	//SearchableVector<int>* myArray(numOfElements);
	//SearchableVector<ContactInfo>* myArray = new SimpleVector<ContactInfo>(numOfElements);
	//SimpleVectorInterface<ContactInfo>* myArray = new SearchableVector<ContactInfo>(numOfElements);
	//SimpleVectorInterface<ContactInfo>* myArray = new SortableVector<ContactInfo>(numOfElements);
	//SortableVector<ContactInfo>* myArray;
	//SimpleVector<ContactInfo>* myArray = new SimpleVectorInterface<ContactInfo>(numOfElements);
	//SortableVector<ContactInfo>* myArray = new SortableVector<ContactInfo>(numOfElements);
	SortableVector<ContactInfo> myArray(numOfElements);
	cout << "Entre los valores" << endl;


	for (int index = 0; index < numOfElements; index++) {
		cin >> contactInfo;
		myArray.add(contactInfo);
		cout << endl;
		/*cout << "=====================" << endl;
		cout << contactInfo << endl;
		cout << "=====================" << endl;*/
	}
	//sorting
	cout << "sorting...\n";
	myArray.sort();
	myArray.display();
	
	//SearchableVector<ContactInfo>* search = new SearchableVector<ContactInfo>(numOfElements);
	SearchableVector<ContactInfo> search(numOfElements);
	for (int index = 0; index < numOfElements; index++) {
		search.add(myArray[index]);
	}
	cout << "Entre el elemento que quiere buscar";
	cin >> contactInfo;
	index = search.findItem(contactInfo);

	if (index == -1) {
		cout << "El elemento " << contactInfo << "no esta definido dentro del arreglo.\n";
	}
	else {
		cout << "El elemento " << "esta dentro del arreglo en el indice " << index << "\n";
	}


	system("pause");
	return 0;

}
/*Enter the amount of elements in the array: 3

Entre los valores
Enter your name: Roberto

Enter your phone number: 787-078-8988



Enter your name: Angel

Enter your phone number: 898-899-9999



Enter your name: Diamaris

Enter your phone number: 799-849-4333


sorting...
The contents in the array are:
=====================
Name: Angel
Phone number: 898-899-9999
=====================

=====================
Name: Diamaris
Phone number: 799-849-4333
=====================

=====================
Name: Roberto
Phone number: 787-078-8988
=====================

Entre el elemento que quiere buscar
Enter your name: Diamaris

Enter your phone number: 799-849-4333

El elemento esta dentro del arreglo en el indice 1
Press any key to continue . . .R*/

