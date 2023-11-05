/*#include<iostream>
using namespace std;

int main() {
    int nota[5], suma = 0;
    const int n = 5;
    float promedio;
    for (int i = 0; i < n; i++) {
        do {
            cout << "Ingrese nota " << i + 1 << endl;
            cin >> nota[i];

        } while (nota[i] < 0 || nota[i]>20);

        suma = suma + nota[i];
    }
    promedio = 1.0 * suma / n;
    cout << "El promedio es: " << promedio;

    return 0;
}*/
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int num[SIZE] = { 5,3,7,2,4 };
    double sum = 0;
    double average;

    for (int i = 0; i < SIZE; i++)
    {
        sum += num[i];
        cout << "sum #" << i << " num [" << i << "]= "
            << num[i] << " sum = " << sum << endl;
    }

    average = sum / SIZE;
    cout << "\n";
    cout << "The average of the given numbers is: " << average << endl;
    return 0;
}
/*sum #0 num [0]= 5 sum = 5
sum #1 num [1]= 3 sum = 8
sum #2 num [2]= 7 sum = 15
sum #3 num [3]= 2 sum = 17
sum #4 num [4]= 4 sum = 21

The average of the given numbers is: 4.2

C:\Users\antho\source\repos\Project5\Debug\Project5.exe (process 16980) exited with code 0.
Press any key to close this window . . .
*/