/* 23.     Pattern Displays

 Write a program that uses a loop to display Pattern A below, followed by another loop that displays Pattern B.

Pattern A  Pattern B
 +  ++++++++++
 ++  +++++++++
 +++  ++++++++
 ++++  +++++++
 +++++  ++++++
 ++++++  +++++
 +++++++  ++++
 ++++++++  +++
 +++++++++  ++
 ++++++++++  + */
 /*
  +  BBB*    i = 1  j = 1 -> 1     k = 1 -> 3   j = 1 -> 1
  ++ BB**    i = 2  j = 1 -> 2     k = 1 -> 2   j = 1 -> 1
  +++B***   i = 3  j = 1 -> 3      k = 1 -> 1   j = 1 -> 1
  ****                                 k = 0        j = 1 -> 1
 */

#include <iostream>
using namespace::std;

int main() {

	int i, j, k, n;

    /*cout << "Entre las dimensiones del triangulo: ";
    cin >> n;
	for (i = 1; i <= n; i++) {//ciclo externo
		for (j = 1; j <= i; j++) {
            cout << "+";
		}
        cout << endl;
	}*/
    cout << "Entre las dimensiones del triangulo: ";
    cin >> n;
    for (i = 1; i <= n; i++) {//ciclo externo
        for (k = 1; k <= n-i; k++) {
            cout << " ";
        }
        for (j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

	system("pause");
	return 0;


}