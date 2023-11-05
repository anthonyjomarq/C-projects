/*#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    int num[n] = { 5,7,2,3,9 };

    int max = num[0];
    for (int i = 1; i < n; i++) {
        if (num[n] > max)
            max = num[n];
    }
    cout << "The highest number is: " << max << endl;
}*/


#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    int a[SIZE][SIZE] = { {5,6,7},{8,3,7},{4,2,4} };
    double sum = 0;
    double average;

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (i == j) {
                sum += a[i][j];
                cout << "sum = " << sum << endl;
            }

    average = sum / SIZE;
    cout << "El promedio de la diagonal es = " << average << endl;
    return 0;
}