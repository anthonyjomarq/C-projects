// Programa para Arreglos 2d funcion promedio
//by :Leandro Morales
//version 1.0 last updated 4/23/15
#include<iostream>
using namespace std;
//constantes globales 
const int ROW = 4;
const int COL = 4;

// Definiendo prototipo

void pause();
void reporte(double[][COL], int);
void diagonal_suma(double[][COL], int);

int main()
{
    double a[ROW][COL] = { {3,4,2,3},{8,2,2,4},{3,9,10,7.33333},{12,4,13,9.66667} };
    reporte(a, ROW);
    diagonal_suma(a, ROW);
    pause();


    return 0;
}
void reporte(double array[][COL], int ROW)
{
    system("clear");
    cout << "****** REPORTE  DEL PROMEDIO *****\n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "****** FINAL DEL REPORTE *****\n";

}
void diagonal_suma(double array[][COL], int ROW)
{
    double pro;
    double sum = 0;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (i == j)
                sum += array[i][j];
        }
    }
    pro = sum / 4.0;
    cout << " El promedio de la diaogonal = " << pro << endl;
}
void pause()
{
    cout << " Type Enter to continue " << endl;
    cin.get();

}

