#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int floor, rooms, num, sumnum = 0, sumrooms= 0;
	double percentage;
	
	cout << "How many floors does the hotel have? ";
	cin >> floor;
	for (int count = 1; count <= floor; count++) {
		if (count != 13) {
			cout << "How many rooms are in floor " << count << "? ";
			cin >> rooms;
			cout << "How many are occupied? ";
			cin >> num;
			sumrooms += rooms;//Sum of rooms
			sumnum += num;//Sum of occupied rooms
		}
		else {
			cout << "Skipping floor 13" << endl;
		}
	}
	cout << "The hotel has " << sumrooms << " rooms." << endl; 
	cout << "The hotel has " << sumnum << " occupied rooms." << endl;
	cout << "The hotel has " << sumrooms - sumnum << " unoccupied rooms" << endl;
	cout << fixed << showpoint << setprecision(2);
	percentage = (sumnum * 1.0)/ (sumrooms*1.0);
	cout << percentage << "% of the rooms are occupied.";

	system("pause");
	return 0;
}
/*How many floors does the hotel have? 14
How many rooms are in floor 1? 10
How many are occupied? 8
How many rooms are in floor 2? 10
How many are occupied? 7
How many rooms are in floor 3? 1
How many are occupied? 1
How many rooms are in floor 4? 10
How many are occupied? 6
How many rooms are in floor 5? 10
How many are occupied? 4
How many rooms are in floor 6? 10
How many are occupied? 8
How many rooms are in floor 7? 10
How many are occupied? 4
How many rooms are in floor 8? 10
How many are occupied? 6
How many rooms are in floor 9? 10
How many are occupied? 5
How many rooms are in floor 10? 10
How many are occupied? 4
How many rooms are in floor 11? 10
How many are occupied? 3
How many rooms are in floor 12? 10
How many are occupied? 2
Skipping floor 13
How many rooms are in floor 14? 10
How many are occupied? 5
The hotel has 121 rooms.
The hotel has 63 occupied rooms.
The hotel has 58 unoccupied rooms
0.52% of the rooms are occupied.Press any key to continue . . .*/