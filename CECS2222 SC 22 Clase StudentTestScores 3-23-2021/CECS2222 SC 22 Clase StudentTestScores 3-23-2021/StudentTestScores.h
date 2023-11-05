//File StudentTestScores.h
#ifndef STUDENTTESTSCORES_H 
#define STUDENTTESTSCORES_H 
#include <string> 
using namespace std;
const double DEFAULT_SCORE = 0.0;

class StudentTestScores
{
private:
	char* studentName; // The student's name 
	double* testScores; // Points to array of test scores 
	int numTestScores; // Number of test scores 
public:
	void createTestScoresArray(int size);
	// Constructor 
	StudentTestScores();
	StudentTestScores(char* name, int numScores);
	// Copy constructor 
	StudentTestScores(const StudentTestScores& obj);
	~StudentTestScores();
	// Destructor 
	// The setTestScore function sets a specific 
	// test score's value. 
	// Set the student's name. 
	void setStudentName(char* name);
	// Get the student's name. 
	string getStudentName() const;
	// Get the number of test scores. 
	int getNumTestScores() const;
	// Get a specific test score. 
	void setTestScore(double score, int index);
	double getTestScore(int index) const;

	friend ostream& operator << (ostream& out, StudentTestScores& obj);
	friend istream& operator >> (istream& in, StudentTestScores& obj);

	StudentTestScores& operator = (StudentTestScores& obj);
};
#endif
