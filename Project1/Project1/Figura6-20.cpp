// Fig. 6.20: fig06_20.cpp
// References must be initialized.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int x = 3;
    int& y = x; // y refers to (is an alias for) x

    cout << "x = " << x << endl << "y = " << y << endl;
    y = 7; // actually modifies x
    cout << "x = " << x << endl << "y = " << y << endl;
    return 0; // indicates successful termination
} // end main
