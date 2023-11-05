// This program averages test scores. It asks the user for the 
// number of students and the number of test scores per student. 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numStudents,  // Number of students 
		numTests;     // Number of tests per student 
	double total,     // Accumulator for total scores 
		average;   // Average test score 


    // Set up numeric output formatting. 
	cout << fixed << showpoint << setprecision(1);


	// Get the number of students. 
	cout << "This program averages test scores.\n";
	cout << "For how many students do you have scores? ";
	cin >> numStudents;


	// Get the number of test scores per student. 
	cout << "How many test scores does each student have? ";
	cin >> numTests;
	

	// Determine each student's average score. 
	int student = 1;
	while (student <= numStudents) {
		total = 0;    // Initialize the accumulator. 
		int test = 1;
		do {
			double score;
			cout << "Enter score " << test << " for ";
			cout << "student " << student << ": ";
			cin >> score;
			total += score;
			test++;
		}while (test <= numTests);
		average = total / numTests;
		cout << "The average score for student " << student;
		cout << " is " << average << ".\n\n";
		student++;
	}
	/*for (int student = 1; student <= numStudents; student++)
	{
		total = 0;    // Initialize the accumulator. 
		for (int test = 1; test <= numTests; test++)
		{
			double score;
			cout << "Enter score " << test << " for ";
			cout << "student " << student << ": ";
			cin >> score;
			total += score;
		}
		average = total / numTests;
		cout << "The average score for student " << student;
		cout << " is " << average << ".\n\n";*/
	return 0;
}
/*This program averages test scores.
For how many students do you have scores? 3
How many test scores does each student have? 3
Enter score 1 for student 1: 82
Enter score 2 for student 1: 72
Enter score 3 for student 1: 92
The average score for student 1 is 82.0.

Enter score 1 for student 2: 83
Enter score 2 for student 2: 71
Enter score 3 for student 2: 100
The average score for student 2 is 84.7.

Enter score 1 for student 3: 87
Enter score 2 for student 3: 87
Enter score 3 for student 3: 100
The average score for student 3 is 91.3.


C:\Users\antho\source\repos\Project1\Debug\Project1.exe (process 17972) exited with code 0.
Press any key to close this window . . .
*/
/*This program averages test scores.
For how many students do you have scores? 3
How many test scores does each student have? 3
Enter score 1 for student 1: 82
Enter score 2 for student 1: 72
Enter score 3 for student 1: 92
The average score for student 1 is 82.0.

Enter score 1 for student 2: 83
Enter score 2 for student 2: 71
Enter score 3 for student 2: 100
The average score for student 2 is 84.7.

Enter score 1 for student 3: 87
Enter score 2 for student 3: 87
Enter score 3 for student 3: 100
The average score for student 3 is 91.3.


C:\Users\antho\source\repos\Project1\Debug\Project1.exe (process 16964) exited with code 0.
Press any key to close this window . . .
*//**/