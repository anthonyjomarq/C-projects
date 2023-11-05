#include<iostream>
#include <string>
using namespace::std;
#include "StudentTestScores.h"
int main() {
	char* name = nullptr;
	const int SIZE = 15;
	name = new char[SIZE];
	StudentTestScores std1(name, 3), std2(name, 4);
	double score;
	int index;
	cin >> std1;
	cin >> std2;
	cout << std1;
	cout << "Entre las " << std1.getNumTestScores() << " notas del estudiante" << std1.getStudentName() << ":" << endl;
		for (index = 0; index < std1.getNumTestScores(); index++) {
			cin >> score;
			std1.setTestScore(score, index);
		}//end for
	std1.display();
	cout << "Entre las " << std2.getNumTestScores() << " notas del estudiante" << std2.getStudentName() << ":" << endl;
		for (index = 0; index < std2.getNumTestScores(); index++) {
			cin >> score;
			std2.setTestScore(score, index);
		}//end for
	std2.display();
	//Copy Constructor
	StudentTestScores std3(std1);
	std3.display();
	system("pause");
	return 0;
	delete[] name;
	name = nullptr;
}//end main
/*Entre las 3 notas del estudiante Juan Casado:
34
89
67
Las notas del estudiante Juan Casado son :
34,89,67,
Entre las 4 notas del estudiante Luis Gomez:
12
45
90
65
Las notas del estudiante Luis Gomez son :
12,45,90,65,
Las notas del estudiante Juan Casado son :
34,89,67,
Press any key to continue . . .*/