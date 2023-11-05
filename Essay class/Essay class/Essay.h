#pragma once
//File Essay.h
#include "GradedActivity.h"
#include <iostream>
using namespace::std;
class Essay : public GradedActivity
{
private:
    double laboratoryPoints;
    double assignmentsPoints;
    double exam1Points;
    double exam2Points;
    double proyectPoints;

public:
    Essay();
    Essay(double score,
        double laboratoryPoints,
        double assignmentsPoints,
        double exam1Points,
        double exam2Points,
        double proyectPoints);
    //mutaros
    void setLaboratoryPoints(double laboratoryPoints);
    void setAssignmentsPoints(double assignmentsPoints);
    void setExam1Points(double exam1Points);
    void setExam2Points(double exam2Points);
    void setProyectPoints(double proyectPoints);
    void setTotalScore();
    //getters
    double getLaboratoryPoints() const;
    double getAssignmentsPoints() const;
    double getExam1Points() const;
    double getExam2Points() const;
    double getProyectPoints() const;
    //operators
    friend ostream& operator << (ostream& strm, const Essay& obj);
    friend istream& operator >> (istream& strm, Essay& obj);
};

