#include<iostream>
#include<iomanip>
#include<cmath>
using namespace::std;

int main()
{
    int choice;
    double area, radius, length, width, base, height;
    const double pi = 3.14159;
    char again;

    const int CIRCLE_CHOICE = 1,
        RECTANGLE_CHOICE = 2,
        TRIANGLE_CHOICE = 3,
        QUIT_CHOICE = 4;
    do {
        cout << "\t\tGeometry Calculator\n\n"
            << "1. Calculate the Area of a Circle\n"
            << "2. Calculate the Area of a Rectangle\n"
            << "3. Calculate the Area of a Triangle\n"
            << "4. Quit the program\n\n"
            << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice)
        {
        case CIRCLE_CHOICE:
            do {
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                if (radius <= 0)
                {
                    cout << "Error, the radius cannot be 0 or negative!" << endl;
                }
            } while (radius <= 0);
            area = pi * pow(radius, 2.0);
            cout << "The area of the circle is " << area << endl;
            break;
        case RECTANGLE_CHOICE:
            do {
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                if (length <= 0) {
                    cout << "Error, the length cannot be 0 or negative!" << endl;
                }
            } while (length <= 0);
            do {
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                if (width <= 0) {
                    cout << "Error, the length and the width can not be less than 0!" << endl;
                }
            } while (width <= 0);
            area = width * length;
            cout << "The area of rectangle is " << area << endl;
            break;
        case TRIANGLE_CHOICE:
            do {
                cout << "Enter the length of the triangle's base: ";
                cin >> base;
                if (base <= 0) {
                    cout << "Error the value entered cannot be 0 or negative!" << endl;
                }
            } while (base <= 0);
            do {
                cout << "Enter the height of the triangle: ";
                cin >> height;
                if (height <= 0) {
                    cout << "Error the value entered cannot be 0 or negative!" << endl;
                }
            } while (height <= 0);
            area = base * height * .5;
            cout << "The area of the triangle is " << area << endl;
            break;
        case QUIT_CHOICE:
            cout << "Program ending.\n";
        default:
            cout << "The valid choices are 1 through 4. Run the\n"
                << "program again and select one of those.\n\n";

        }
        cout << "Do you want to rerun the program again? (Y/N): ";
        cin >> again;
    } while (again == 'Y' || again == 'y');
    system("pause");
    return 0;
}
/*                  Geometry Calculator

1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit the program

Enter your choice (1-4): 1
Enter the radius of the circle: 2
The area of the circle is 12.5664
Do you want to rerun the program again? (Y/N): Y
                Geometry Calculator

1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit the program

Enter your choice (1-4): 2m 
Enter the lenght of the rectangle: 20
Enter the width of the rectangle: 5
The area of rectangle is 100
Do you want to rerun the program again? (Y/N): Y
                Geometry Calculator

1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit the program

Enter your choice (1-4): 4
Program ending.
The valid choices are 1 through 4. Run the
program again and select one of those.

Do you want to rerun the program again? (Y/N): N
Press any key to continue . . .*/

/*Geometry Calculator

1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit the program

Enter your choice(1 - 4) : 1
Enter the radius of the circle : 2
The area of the circle is 12.5664
Do you want to rerun the program again ? (Y / N) : Y
Geometry Calculator

1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit the program

Enter your choice(1 - 4) : 1
Enter the radius of the circle : 2
The area of the circle is 12.5664
Do you want to rerun the program again ? (Y / N) : N
Press any key to continue . . .*/
