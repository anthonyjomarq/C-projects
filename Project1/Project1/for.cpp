/*cout << "Entre la cantidad de veces a imprimir el mensaje: ";
cin >> n;
do { 
      cout << "Hello\n";
      number ++;
 } while (number < n);
 cout << "That's all! \n"; */
#include <iostream>

using namespace::std;

int main() {
    int number = 0;
    int n;

    cout << "Entre la cantidad de veces a imprimir el mensaje: ";
    cin >> n;
    do {
        cout << "Hello\n";
        number++;
    } while (number < n);
    cout << "That's all! \n";
    
    int i;
    cout << "Entre la cantidad de veces a imprimir el mensaje: ";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "Hello\n";
    }
    cout << "That's all! \n";

    int i;
    cout << "Entre la cantidad de veces a imprimir el mensaje: ";
    cin >> n;
    for (i = n; i > 0; i--) {
        cout << "Hello\n";
    }
    cout << "That's all! \n";
}