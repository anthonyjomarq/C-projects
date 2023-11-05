/*// This program averages a set of numbers. 
#include <iostream> 
using namespace std;
int main() {
    int numCount, total;
    double average;
    cout << "How many numbers do you want to average? ";
    cin >> numCount;
    for (int count = 0; count < numCount; count++)
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        total += num;
        count++;
    }
    average = total / numCount;
    cout << "The average is << average << endl; 
        return 0;
}
*/
// This program averages a set of numbers. 
#include <iostream> 
using namespace std;
int main() 
{
    int numCount, total = 0;
    double average;

    cout << "How many numbers do you want to average? ";
    cin >> numCount;
    for (int count = 0; count < numCount; count++)
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        total += num;
    }
    average = total / numCount;
    cout << "The average is " << average << endl; 
    system("pause");
    return 0;
}
/*How many numbers do you want to average? 4
Enter a number: 34
Enter a number: 32
Enter a number: 67
Enter a number: 42
The average is 43

Press any key to close this window . . .
*/