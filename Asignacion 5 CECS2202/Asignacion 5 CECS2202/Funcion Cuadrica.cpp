#include <iostream>
#include <iomanip>
#include <cmath>
using namespace::std; 

double validation(double, double);
void coeficientes(double&, double&, double&);
void formula(double&, double&, double&);

int main()
{


    double 
        a,    // Primer Coeficiente
        b,    // Segundo Coeficiente
        c;    // Tercer Coeficiente 

    coeficientes(a, b, c); //Validacion de coeficiente 
    formula(a, b, c); //Formula

    //Formula
  
}
double validation(double num1, double num2)
{
    while (num1 == num2) {
      
        cout << "El valor del coeficiente de a no puede ser 0.\n";
        cout << "Favor de  entrar nuevamente a = ";
        cin >> num1;
    }
    return num1;
}
void coeficientes(double& a, double& b, double& c) {
    cout << "Entre el coeficiente de a: ";
    cin >> a;
    a = validation(a, 0);
    cout << "Entre el coeficiente de b: ";
    cin >> b;
    cout << "Entre el coeficiente de c: ";
    cin >> c;
}
void formula(double& a, double& b, double& c) {
    const double PI = 3.1415;
    double real, // Parte real con solucion compleja
        imag, // Parte imaginaria de solucion compleja  
        mag,  // magnitud en forma polar
        ang,  // angulo en grados
        x1,   // Solucion real  primera
        x2;   // Solucion real segunda
    if (pow(b, 2) - 4 * c * a < 0)
    {
        cout << "*** Raices Complejas ****\n";
        real = -b / (2 * a);
        imag = sqrt(abs(pow(b, 2) - 4 * a * c)) / (2 * a);
        cout << "*** Formato Rectangular **\n";
        cout << "X1 = " << real << " + " << imag << " j " << endl;
        cout << "X2 = " << real << " - " << imag << " j " << endl;
        mag = sqrt(pow(real, 2) + pow(imag, 2));
        ang = atan(imag / real) * (180 / PI);
        cout << "*** Formato Polar ***\n";
        cout << mag << " < " << ang << endl;
    }
    else
    {
        cout << "*** Raices Reales ****\n";
        x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }
}