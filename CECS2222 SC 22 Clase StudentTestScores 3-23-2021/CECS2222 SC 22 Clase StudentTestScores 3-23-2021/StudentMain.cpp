//File StudentMain.cpp
#include<iostream> 
#include <string> 
using namespace::std;
#include "StudentTestScores.h" 
int main() {


	StudentTestScores std1, std2;
	double score;
	int index;
	cin >> std1;
	cin >> std2;
	cout << std1;
	cout << std2;
	std1 = std2;
	cout << "--------------------------------------------------------------------------------------------\n";
	cout << "\nUtilizando el operador de asignar para copiar los datos del segundo estudiante al primero:\n";
	cout << std1;
	system("pause");
	return 0;
}//end main
