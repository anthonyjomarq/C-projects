#include "Essay.h"

Essay::Essay() : GradedActivity()
{
	laboratoryPoints = 0;
	assignmentsPoints = 0;
	exam1Points = 0;
	exam2Points = 0;
	proyectPoints = 0;
}

Essay::Essay(double score, double laboratoryPoints, double assignmentsPoints, double exam1Points, double exam2Points, double proyectPoints) : GradedActivity(score)
{
	this->laboratoryPoints = laboratoryPoints;
	this->assignmentsPoints = assignmentsPoints;
	this->exam1Points = exam1Points;
	this->exam2Points = exam2Points;
	this->proyectPoints = proyectPoints;
}

void Essay::setLaboratoryPoints(double laboratoryPoints)
{
	this->laboratoryPoints = laboratoryPoints;
}

void Essay::setAssignmentsPoints(double assignmentsPoints)
{
	this->assignmentsPoints = assignmentsPoints;
}

void Essay::setExam1Points(double exam1Points)
{
	this->exam1Points = exam1Points;
}

void Essay::setExam2Points(double exam2Points)
{
	this->exam2Points = exam2Points;
}

void Essay::setProyectPoints(double proyectPoints)
{
	this->proyectPoints = proyectPoints;
}

void Essay::setTotalScore()
{
	setScore(laboratoryPoints + assignmentsPoints + exam1Points + exam2Points + proyectPoints);
}

double Essay::getLaboratoryPoints() const
{
	return laboratoryPoints;
}

double Essay::getAssignmentsPoints() const
{
	return assignmentsPoints;
}

double Essay::getExam1Points() const
{
	return exam1Points;
}

double Essay::getExam2Points() const
{
	return exam2Points;
}

double Essay::getProyectPoints() const
{
	return proyectPoints;
}

ostream& operator<<(ostream& strm, const Essay& obj)
{
	strm << "\nScore: " << obj.getScore();
	strm << "\nGrade: " << obj.getLetterGrade();
	strm << endl;
	return strm;
}

istream& operator>>(istream& strm, Essay& obj)
{
	do {
		cout << "Enter the laboratory points (0-20): ";
		strm >> obj.laboratoryPoints;
		if ((obj.laboratoryPoints < 0 || obj.laboratoryPoints > 20))
			cout << "Error! The value cannot be less than 0 or more than 20!\n";
	} while (obj.laboratoryPoints < 0 || obj.laboratoryPoints > 20);
	do {
		cout << "Enter the assingments points (0-20): ";
		strm >> obj.assignmentsPoints;
		if ((obj.assignmentsPoints < 0 || obj.assignmentsPoints > 20))
			cout << "Error! The value cannot be less than 0 or more than 20!\n";
	} while (obj.assignmentsPoints < 0 || obj.assignmentsPoints > 20);
	do {
		cout << "Enter the first exam points (0-20): ";
		strm >> obj.exam1Points;
		if ((obj.exam1Points < 0 || obj.exam1Points > 20))
			cout << "Error! The value cannot be less than 0 or more than 20!\n";
	} while (obj.exam1Points < 0 || obj.exam1Points > 20);
	do {
		cout << "Enter the second exam points(0-20): ";
		strm >> obj.exam2Points;
		if ((obj.exam2Points < 0 || obj.exam2Points > 20))
			cout << "Error! The value cannot be less than 0 or more than 20!\n";
	} while (obj.exam2Points < 0 || obj.exam2Points > 20);
	do {
		cout << "Enter the proyect points(0-20): ";
		strm >> obj.proyectPoints;
		if ((obj.proyectPoints < 0 || obj.proyectPoints > 20))
			cout << "Error! The value cannot be less than 0 or more than 20!\n";
	} while (obj.proyectPoints < 0 || obj.proyectPoints > 20);
	obj.setTotalScore();
	return strm;
}
