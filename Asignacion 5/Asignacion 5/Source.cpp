#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    const double PI = 3.1415;
    double real, // Parte real con solucion compleja
        imag, // Parte imaginaria de solucion compleja  
        mag,  // magnitud en forma polar
        ang,  // angulo en grados
        x1,   // Solucion real  primera
        x2,   // Solucion real segunda
        a,    // Primer Coeficiente
        b,    // Segundo Coeficiente
        c;    // Tercer Coeficiente
    int count = 0; // contador para salir del programa        


    system("clear");
    cout << "Entre los coeficiente en orden a, b y c : ";
    cin >> a >> b >> c;

    while (a == 0)
    {
        cout << "El valor del coeficiente de a no puede ser \n";
        cout << " Usted tiene " << (abs(count - 3)) << " oporutnidades para cambia a : \n";
        cout << "Favor de  entrar nuevamente a =";
        cin >> a;
        if (count == 3)
        {
            system("clear");
            cout << " Lo siento usted a fallado 3 veces " << endl;
            cout << "Saliendo del programa " << endl;
            return 0;
        }
        count++;
    }// validar el coeficiente de a

    if (pow(b, 2) - 4 * c * a < 0)
    {
        cout << "******** Raices Complejas *******\n";
        real = -b / (2 * a);
        imag = sqrt(abs(pow(b, 2) - 4 * a * c)) / (2 * a);
        cout << "******* Formato Rectangular ****\n";
        cout << "X1 = " << real << " + " << imag << " j " << endl;
        cout << "X2 = " << real << " - " << imag << " j " << endl;
        mag = sqrt(pow(real, 2) + pow(imag, 2));
        ang = atan(imag / real) * (180 / PI);
        cout << "******* Formato Polar *****\n";
        cout << mag << " < " << ang << endl;
    }
    else
    {
        cout << "******** Raices Reales *******\n";
        x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;

    }
} //end main