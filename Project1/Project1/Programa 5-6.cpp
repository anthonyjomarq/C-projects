// This program displays a list of numbers and 
// their squares. 
#include <iostream>   
using namespace std;


int main()
{
	int MAX_NUMBER, num;

	cout << "Enter the mininum value of the table: ";
	cin >> num;//Mininum value
	while (num < 0) {
		cout << "Error, the minimun value cannot be negative!\n";
		cout << "Enter the mininum value of the table: ";
		cin >> num;
	}
	cout << "Enter the maximun value of the table: ";
	cin >> MAX_NUMBER;
	while (MAX_NUMBER < 0) {
		cout << "Error, the maximum value cannot be negative!\n";
		cout << "Enter the maximun value of the table: ";
		cin >> MAX_NUMBER;
	}
	while (num > MAX_NUMBER)
	{
		cout << "Error, the minimun value needs to be the less or the same as the maximun value!\n";
		cout << "Enter the mininum value of the table: ";
		cin >> num;
		while (num < 0) {
			cout << "Error, the minimum value cannot be negative!\n";
			cout << "Enter the mininum value of the table: ";
			cin >> num;
			cout << "Enter the maximum value of the table: ";
			cin >> MAX_NUMBER;
			while (MAX_NUMBER < 0) {
				cout << "Error, the maximum value cannot be negative!\n";
				cout << "Enter the maximum value of the table: ";
				cin >> MAX_NUMBER;
			}
		}
	}
	cout << "Number\t\tSquared\n";
	cout << "-----------------------\n";
	while (num <= MAX_NUMBER)
	{
		cout << num << "\t\t" << (num * num) << endl;
		num++; //Increment the counter. 
	}


	system("pause");
	return 0;
}
/*Enter the mininum value of the table: 3
Enter the maximun value of the table: 1
Error, the minimun value needs to be the less or the same as the maximun value!
Enter the mininum value of the table: 1
Number          Squared
-----------------------
1               1
Press any key to continue . . .*/

/*Enter the mininum value of the table: -3
Error, the minimun value can not be negative!
Enter the mininum value of the table: 1
Enter the maximun value of the table: 4
Number          Squared
-----------------------
1               1
2               4
3               9
4               16
Press any key to continue . . .*/
/*Enter the mininum value of the table: 3
Enter the maximun value of the table: -1
Error, the maximum value cannot be negative!
Enter the maximun value of the table: 6
Number          Squared
-----------------------
3               9
4               16
5               25
6               36
Press any key to continue . . .*/

/*Enter the mininum value of the table: 1
Enter the maximun value of the table: 5
Number          Squared
-----------------------
1               1
2               4
3               9
4               16
5               25
Press any key to continue . . .*/

