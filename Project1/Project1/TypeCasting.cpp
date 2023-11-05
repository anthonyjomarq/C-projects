// This program will determine the batting average of a player.

// The number of hits and at bats are set internally in the program.
// PLACE YOUR NAME AND OTHER REQUESTED INFO HERE
#include <iostream>
using namespace std;
const int AT_BAT = 421;
const int HITS = 123;
int main()
{
    float batAvg;
    batAvg = static_cast<float> (HITS)/(AT_BAT);// an assignment statement 
    cout << "The batting average is " << batAvg << endl; // output the result
    system("pause");
    return 0;
}
//Exercise 1: Run this program and record the results. The batting average is .
/*The batting average is 0
Press any key to continue . . .
*/
/*Exercise 2: There is a logic error in this program centering around data types. 
Does changing the data type of batavg from int to float solve the problem ? Make that change and run the program again and record the result.
The batting average is .*/
/*The batting average is 0
Press any key to continue . . .*/
/*Exercise 3: Continue to work with this program until you get the correct result.
The correct result should be 0.292162. Do not change the data type of the two named constants. Instead, use a typecast to solve the problem.*/
//batAvg = static_cast<float> (HITS)/(AT_BAT);// an assignment statement 
/*The batting average is 0.292162
Press any key to continue . . .*/