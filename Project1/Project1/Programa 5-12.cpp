//Program 5 - 12

  // This program takes daily sales figures over a period of time 
  // and calculates their total. 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int days;          // Number of days 
	double total = 0.0; // Accumulator, initialized with 0 


		// Get the number of days. 
	cout << "For how many days do you have sales figures? ";
	cin >> days;


	// Get the sales for each day and accumulate a total. 
	for (int count = 1; count <= days; count++)
	{
		double sales;
		cout << "Enter the sales for day " << count << ": ";
		cin >> sales;
		total += sales;  // Accumulate the running total. 
	}


	// Display the total sales. 
	cout << fixed << showpoint << setprecision(2);
	cout << "The total sales are $" << total << endl;
	return 0;
}
/*For how many days do you have sales figures? 2
Enter the sales for day 1: 10
Enter the sales for day 2: 20
The total sales are $30.00

C:\Users\antho\source\repos\Project1\Debug\Project1.exe (process 12444) exited with code 0.
Press any key to close this window . . .
*/