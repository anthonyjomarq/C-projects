// This program demonstrates passing arguments to a base // class constructor. #include <iostream>#include "Cube.h"using namespace std;int main(){    Cube myCube;    double cubeWidth; // To hold the cube's width     double cubeLength; // To hold the cube's length     double cubeHeight; // To hold the cube's height     // Get the width, length, and height of     // the cube from the user.     cout << "Enter the dimensions of a cube:\n";    cout << "Width: ";    cin >> cubeWidth;    cout << "Length: ";    cin >> cubeLength;    cout << "Height: ";    cin >> cubeHeight;    // Define a Cube object and use the dimensions     // entered by the user.     myCube.set(cubeWidth, cubeLength, cubeHeight);    // Display the Cube object's properties.     myCube.display2();    system("pause");    return 0;} 