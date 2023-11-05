#include <iostream>
using namespace::std;

int main() {
	const int SIZE = 10;
	double arr[SIZE];
	double sum = 0;
	double average;

	cout << "Entra 10 puntuaciones para sacar el valor promedio: " << endl;
	for (int i = 0; i < SIZE; i++) 
	{
		cin >> arr[i];
		sum += arr[i];
	}
	average = sum / SIZE;
	cout << "El promedio de las puntuaciones es: " << average << endl;
	return 0;
}
/*Entra 10 puntuaciones para sacar el valor promedio:
78
96
70
85
67
59
89
100
74
64
El promedio de las puntuaciones es: 78.2

C:\Users\antho\source\repos\Array average\Debug\Array average.exe (process 11560) exited with code 0.
Press any key to close this window . . .
*/