#include<iostream>
using namespace::std;

void getSize(int* size);
void getArray(int* myArray, int size);
void sortArray(int myArray[],int size);
void display(int myArray[], int size);

int main() {

	int* myArray = nullptr;
	int size;

	getSize(&size);
	myArray = new int[size];
	getArray(myArray, size);
	sortArray(myArray, size);
	display(myArray, size);
	cout << "Array sorteado ahora!" << endl;
	delete[] myArray;

	system("pause");
	return 0;
}
void getSize(int* size)
{
	cout << "Entre la cantidad de casillas dentro del arreglo : ";
	cin >> *size;
}
void getArray(int* myArray, int size) {
	cout << "Entre los datos del arreglo: \n";
	for (int i = 0; i < size; i++) {
		cin >> myArray[i];
	}
}
void sortArray(int myArray[], int size)
{
	bool swap;
	int temp;

	do {
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (myArray[count] > myArray[count + 1])
			{
				temp = myArray[count];
				myArray[count] = myArray[count + 1];
				myArray[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}
void display(int myArray[], int size) {
	cout << "\nLos datos del arreglo: \n";
	for (int i = 0; i < size; i++) {
		cout << myArray[i] << endl;
	}
}
/*Entre la cantidad de casillas dentro del arreglo : 3
Entre los datos del arreglo:
1
7
4

Los datos del arreglo:
1
4
7
Array sorteado ahora!
Press any key to continue . . .*/
