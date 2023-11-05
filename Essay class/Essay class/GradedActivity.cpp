#include "GradedActivity.h"

GradedActivity::GradedActivity()
{
	score = 0.0;
}

GradedActivity::GradedActivity(double score)
{
	this->score = score;
}

void GradedActivity::setScore(double score)
{
	this->score = score;
}

double GradedActivity::getScore() const
{
	return score;
}

char GradedActivity::getLetterGrade() const
{
	char letterGrade;

	if (score >= 90)
		letterGrade = 'A';
	else if (score >= 80)
		letterGrade = 'B';
	else if (score >= 70)
		letterGrade = 'C';
	else if (score >= 60)
		letterGrade = 'D';
	else
		letterGrade = 'F';

	return letterGrade;
}
