#include<iostream>
using namespace std;

void cuadrado(int&, int&); // prototipo

int main()
{
    int a = 4, b = 8;
    cout << "a = " << a << " y b =" << b << endl;
    cout << "a = " << &a << " y b =" << &b << endl;
    cuadrado(a, b);
    cout << "a = " << a << " y b =" << b << endl;
    return 0;
}
void cuadrado(int& z, int& v)
{
    cout << "z = " << &z << " y v =" << &v << endl;
    cout << "z = " << z << " y v =" << v << endl;
    z *= z;
    v *= v;
}