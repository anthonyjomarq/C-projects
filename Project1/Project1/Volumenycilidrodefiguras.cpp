#include <iostream>
#include <cmath>

using namespace::std;

int main()
{
    int choice;
    double radio, altura, volumen, area;
    const double pi = 3.14159;

    const int CONO_CHOICE = 1,

        CILINDRO_CHOICE = 2,

        ESFERA_CHOICE = 3,

        QUIT_CHOICE = 4;

    cout << "     Calculadora de Volumenes y Areas de fuguras de:\n\n"
        << "1. Cono Recto Circular\n "
        << "2. Cilindro Recto Circular\n"
        << "3. Esfera\n"
        << "4. Salir del programa\n"
        << "Enter your choice (1-4):\n ";
    cin >> choice;
    switch (choice)
    {
    case CONO_CHOICE:
        do {
            cout << "Entra el radio:\n";
            cin >> radio;
            if (radio < 0) {
                cout << "Error, el radio no puede ser negativo!\n";
            }

        } while (radio < 0);
        do
        {
            cout << "Entra la altura: ";
            cin >> altura;
            if (altura < 0) {
                cout << "Error, la altura no puede ser negativa!";
            }
        } while (altura < 0);
        volumen = (1 / 3) * pi * pow(radio, 2.0) * altura;
        cout << "El volumen es:" << volumen << endl;
        area = pi * pow(radio, 2.0) * sqrt(pow(radio, 2.0) + pow(altura, 2.0));
        cout << "El area es: " << area << endl;
        break;
    case CILINDRO_CHOICE:
        do {
            cout << "Entra el radio:\n";
            cin >> radio;
            if (radio < 0) {
                cout << "Error, el radio no puede ser negativo!";
            }

        } while (radio < 0);
        do
        {
            cout << "Entra la altura: ";
            cin >> altura;
            if (altura < 0) {
                cout << "Error, la altura no puede ser negativa!";
            }
        } while (altura < 0);
        volumen = pi * pow(radio, 2) * altura;
        cout << "El volumen es:" << volumen << endl;
        area = 2.0 * pi * radio * altura;
        cout << "El area es: " << area << endl;
    case ESFERA_CHOICE:
        do {
            cout << "Entra el radio:\n";
            cin >> radio;
            if (radio < 0) {
                cout << "Error, el radio no puede ser negativo!";
            }

        } while (radio < 0);
        do
        {
            cout << "Entra la altura: ";
            cin >> altura;
            if (altura < 0) {
                cout << "Error, la altura no puede ser negativa!";
            }
        } while (altura < 0);
        volumen = (4 / 3) * pi * pow(radio, 3.0);
        cout << "El volumen es:" << volumen << endl;
        area = 4 * pi * pow(radio, 2.0);
        cout << "El area es: " << area << endl;
        
        
        break;
    case QUIT_CHOICE:
        cout << "Program ending.\n";
    default:
        cout << "The valid choices are 1 through 4. Run the program again and select one of those.";

    }
    system("pause");
    return 0;
}



