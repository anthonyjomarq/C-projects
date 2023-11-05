//File GradedActivity.h
#ifndef GRADEDACTIVITY_H 
#define GRADEDACTIVITY_H

// GradedActivity class declaration 
#include <iostream>
using namespace::std;
class GradedActivity
{
protected:
    double score; // To hold the numeric score 
public:
    // Default constructor 
    GradedActivity();
    // Constructor 
    GradedActivity(double score);
    // Mutator function 
    void setScore(double score);
    // Accessor functions 
    double getScore() const;
    virtual char getLetterGrade() const;
};
#endif