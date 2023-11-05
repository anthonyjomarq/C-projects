// This program performs a linear search on a character array

// Anthony J. Colon Dominguez 

#include<iostream>

using namespace std;

int searchList(char[], int, char); // function prototype

const int SIZE = 8;

int main()

{

    char word[SIZE] = "Harpoon";

    int found;

    char ch;

    cout << "Harpoon" << endl;
    cout << "Enter a letter to search for:" << endl;

    cin >> ch;

    found = searchList(word, SIZE, ch);

    if (found == -1)

        cout << "The letter " << ch

        << " was not found in the list" << endl;

    else

        cout << "The letter " << ch << " is in the " << found + 1

        << " position of the list" << endl;

    return 0;

}

//*******************************************************************

//                      searchList

//

// task: Searches an array for an specific value

// data in: List of values in array, number of elements in the array and the value of the user to be searched in the array

// data returned: Position in the array of the value or -1 if value is not found 

//

//*******************************************************************

int searchList(char List[], int numElems, char value)

{

    for (int count = 0; count <= numElems; count++)

    {//WRITE STATEMENT TO CHECK FOR VALUE IN EACH ARRAY ELEMENT
        if (List[count] == value) {
            return count;
        }
// if the desired value is found, the array subscript

// count is returned to indicate the location in the array
    }
    return -1;     // if the value is not found, -1 is returned

}

