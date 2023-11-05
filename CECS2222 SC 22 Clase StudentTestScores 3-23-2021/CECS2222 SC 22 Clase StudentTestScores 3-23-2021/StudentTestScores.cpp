//File StudentTestScores.cpp
#include<iostream> 
using namespace::std;
#include "StudentTestScores.h" 
void StudentTestScores::createTestScoresArray(int size) {
	numTestScores = size;
	testScores = new double[size];
	for (int i = 0; i < size; i++)
		testScores[i] = DEFAULT_SCORE;
}
StudentTestScores::StudentTestScores()
{
	studentName = nullptr;
    testScores = 0;
	numTestScores = 0;
}
StudentTestScores::StudentTestScores(char* name, int numScores) {
	if (studentName != nullptr) { delete[] studentName; }
	studentName = new char[strlen(name) + 1];
	strcpy_s(studentName, strlen(name) + 1, name);
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
void StudentTestScores::setStudentName(char* name) {
	if (studentName != nullptr) { delete[] studentName; }
	studentName = new char[strlen(name) + 1];
	strcpy_s(studentName, strlen(name) + 1, name);
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
StudentTestScores& StudentTestScores::operator=(StudentTestScores& obj)
{
	this->setStudentName(obj.studentName);
	this->createTestScoresArray(obj.numTestScores);
	this->numTestScores = obj.numTestScores;
	for (int i = 0; i < obj.numTestScores; i++) {
		this->setTestScore(obj.testScores[i], i);
	}
	return *this; 
}

ostream& operator << (ostream& strm, StudentTestScores& obj) {
	strm << "\n\tStudent Test Scores:\n";
	strm << "Nombre:" << obj.getStudentName() << endl;

	strm << "Test Score:" << obj.getNumTestScores() << endl;
	for (int i = 0; i < obj.getNumTestScores(); i++) {

		strm << "Score #" << i + 1 << ": " << obj.getTestScore(i) << endl;
	}
	return strm;

}

istream& operator>>(istream& in, StudentTestScores& obj)
{
	char studentname[20];
	int num;
	cout << "Entre el nombre del estudiante: ";
	cin >> studentname;
	obj.setStudentName(studentname);
	cout << "Entra el numero de pruebas que cogio " << studentname << ": ";
	cin >> num;
	obj.numTestScores = num;
	obj.createTestScoresArray(num);
	for (int i = 0; i < num; i++) {
		double temp;
		cout << "Enter score #" << i + 1 << ": ";
		cin >> temp;
		obj.setTestScore(temp, i);
	}
	return in;
}
