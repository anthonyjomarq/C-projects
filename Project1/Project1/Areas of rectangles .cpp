#include <iostream>
using namespace::std;

int main() {
	float area1, width, length, area2, width2, length2;

    cout << "Enter the width of the rectangle #1: ";
    cin >> width;
    cout << "Enter the length of the rectangle #1: ";
    cin >> length;
    area1 = width * length;
    cout << "Enter the width of the rectangle #2 : ";
    cin >> width2;
    cout << "Enter the length of the rectangle #2 : ";
    cin >> length2;
    area2 = width2 * length2;
    if (area1 == area2) {
        cout << "The area of the rectangles is the same. \n";
    }
    else {
        if (area1 != area2) {
            if (area1 < area2) {
                cout << "The rectangle #2 has a greater area than rectangle #1" << endl;
            }

            else {
                cout << "The rectangle #1 has a greater area than rectangle #2" << endl;
            }
        }
    }
    system("pause");
    return 0;

}
/*Enter the width of the rectangle #1: 5
Enter the length of the rectangle #1: 5
Enter the width of the rectangle #2 : 5
Enter the length of the rectangle #2 : 5
The area of the rectangles is the same.
Press any key to continue . . .*/

/*Enter the width of the rectangle #1: 6
Enter the length of the rectangle #1 : 6
Enter the width of the rectangle #2 : 5
Enter the length of the rectangle #2 : 5
The rectangle #1 has a greater area than rectangle #2
Press any key to continue . . .*/

/*Enter the width of the rectangle #1: 5
Enter the length of the rectangle #1: 5
Enter the width of the rectangle #2 : 6
Enter the length of the rectangle #2 : 6
The rectangle #2 has a greater area than rectangle #1
Press any key to continue . . .*/