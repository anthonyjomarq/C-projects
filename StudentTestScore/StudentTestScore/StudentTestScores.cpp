#include<iostream>
using namespace::std;
#include "StudentTestScores.h"
void StudentTestScores::createTestScoresArray(int size) {
	numTestScores = size;
	testScores = new double[size];
	for (int i = 0; i < size; i++)
		testScores[i] = DEFAULT_SCORE;
}
StudentTestScores::StudentTestScores(string name, int numScores) {
	studentName = name;
	createTestScoresArray(numScores);
}
// Copy constructor
StudentTestScores::StudentTestScores(const StudentTestScores& obj) {
	studentName = obj.studentName;
	numTestScores = obj.numTestScores;
	testScores = new double[numTestScores];
	for (int i = 0; i < numTestScores; i++)
		testScores[i] = obj.testScores[i];
}
// Destructor
StudentTestScores::~StudentTestScores() {
	delete[] testScores;
}
// The setTestScore function sets a specific
// test score's value.
void StudentTestScores::setTestScore(double score, int index) {
	testScores[index] = score;
}
// Set the student's name.
void StudentTestScores::setStudentName(string name) {
	studentName = name;
}
// Get the student's name.
string StudentTestScores::getStudentName() const {
	return studentName;
}
// Get the number of test scores.
int StudentTestScores::getNumTestScores() const {
	return numTestScores;
}
// Get a specific test score.
double StudentTestScores::getTestScore(int index) const {
	return testScores[index];
}
void StudentTestScores::display() const {
	cout << "Las notas del estudiante " << getStudentName() << " son :"
		<< endl;
	for (int index = 0; index < getNumTestScores(); index++) {
		cout << getTestScore(index) << ",";
	}//end for
	cout << endl;
}

istream& operator >> (istream& strm, StudentTestScores&obj)
{
	const int SIZE = 15;
	char tempName[SIZE];
	int tempScore;

	cout << "Entre su nombre: ";
	strm.getline(tempName, SIZE);
	obj.setStudentName(tempName);
	cin.ignore();
	cout << "Entre el numero de pruebas: ";
	strm >> obj.numTestScores;
	for (int i = 0; i < obj.numTestScores; i++)
	{
		cout << "Entre la nota #" << i + 1 << " :";
		strm >> obj.testScores[i];
	}
	return strm;
}

ostream& operator << (ostream& strm, StudentTestScores& obj) {
	strm << "Nombre:" << obj.getStudentName() << endl;
	for (int i = 0; i < obj.numTestScores; i++) {
		strm << "Test Scores #" << i + 1 << ": " << obj.testScores[i] << endl;
	}
	return strm;
}