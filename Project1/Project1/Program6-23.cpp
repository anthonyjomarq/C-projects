1  // Fig. 6.23: fig06_23.cpp
2  // Using the unary scope resolution operator.
3  #include <iostream>
4  using std::cout;
5  using std::endl;
6
7  int number = 7; // global variable named number
8
9  int main()
10  {
    11     double number = 10.5; // local variable named number
    12
        13     // display values of local and global variables
        14     cout << "Local double value of number = " << number
        15 << "\nGlobal int value of number = " << ::number << endl;
    16     return 0; // indicates successful termination
    17  } // end main