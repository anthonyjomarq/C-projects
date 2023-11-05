//File RectangleMain.cpp
#include <iostream>
using namespace::std;
#include "Rectangle.h"
int main()
{
    Rectangle rect1, rect2; // Define an instance of the Rectangle class

    cin >> rect1;
    cout << rect1;
 
    cout << endl;
    cin >> rect2;
    cout << rect2;

 
    if (rect1 == rect2) {
        cout << "\nLas areas de los ambos rectangulos son iguales.\n";
    }
    if (rect1 != rect2) {
        cout << "Las areas de los ambos rectangulos no son iguales.\n";
    }
    if (rect1 > rect2) {
        cout << "El area del primer rectangulo es mayor que el segundo.\n";
    }
    if (rect1 < rect2) {
        cout << "El area del segundo rectangulo es mayor que el primero.\n";
    }
    cout << "\n--------------------------------------------------------------------------------------------\n";
    cout << "\nUtilizando el operador de asignar para copiar los datos del segundo rectangulo al primero:\n";
    cout << rect1;
    rect1 = rect2;
    cout << rect1;

    system("pause");
    return 0;
}
/*        Info del Rectangulo:
Entra el largo del rectangulo: 2
Entra el ancho del rectangulo: 2

Displaying...

El ancho del rectangulo: 2
El largo del rectangulo: 2
El area del rectangulo: 4

        Info del Rectangulo:
Entra el largo del rectangulo: 4
Entra el ancho del rectangulo: 4

Displaying...

El ancho del rectangulo: 4
El largo del rectangulo: 4
El area del rectangulo: 16
Las areas de los ambos rectangulos no son iguales.
El area del segundo rectangulo es mayor que el primero.

--------------------------------------------------------------------------------------------

Utilizando el operador de asignar para copiar los datos del segundo rectangulo al primero:

Displaying...

El ancho del rectangulo: 2
El largo del rectangulo: 2
El area del rectangulo: 4

Displaying...

El ancho del rectangulo: 4
El largo del rectangulo: 4
El area del rectangulo: 16
Press any key to continue . . .*/