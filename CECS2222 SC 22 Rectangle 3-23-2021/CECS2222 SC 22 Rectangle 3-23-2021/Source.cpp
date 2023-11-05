#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "NegativeLength.h"
#include "NegativeWidth.h"
int main()
{
    double width;
    double length;
    bool tryAgain;
    // Create a Rectangle object.
    Rectangle myRectangle;
    // Get the width and length.
    cout << "Enter the rectangle's width: ";
    cin >> width;
    // Store the width in the myRectangle object.
    tryAgain = true;
    while (tryAgain) {
        try {
            myRectangle.setWidth(width);
            tryAgain = false;
        }
        catch (NegativeWidth e) {
            cout << "Please enter a nonnegative value: ";
            cin >> width;
        }
    }//end while
    // Get the rectangle's length.
    cout << "Enter the rectangle's length: ";
    cin >> length;
    // Store the length in the myRectangle object.
    tryAgain = true;
    while (tryAgain) {
        try {
            myRectangle.setLength(length);
            // If no exception was thrown, then the
            // next statement will execute.
            tryAgain = false;
        }
        catch (NegativeLength e) {
            cout << "Please enter a nonnegative value: ";
            cin >> length;
        }
    }//end while
    // Display the area of the rectangle.
    cout << "The rectangle's area is "
        << myRectangle.getArea() << endl;
    system("pause");
    return 0;
}//end main
/*Enter the rectangle's width: -8
Please enter a nonnegative value: 3
Enter the rectangle's length: -7
Please enter a nonnegative value: -9
Please enter a nonnegative value: 5
The rectangle's area is 15
Press any key to continue . . .*/