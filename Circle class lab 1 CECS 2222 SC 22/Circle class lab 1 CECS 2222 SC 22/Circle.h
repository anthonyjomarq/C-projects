#define CIRCLE_H
#ifdef CIRCLE_H

class Circle {
private:
	double radius;
	double PI = 3.14159;
	double h;
	double k;
public:
	//Constructor function
	Circle();
	Circle(double);//Default constructor
	~Circle(); //Destructor
	//Mutators functions 
	void setRadius(double aRadius);
	void setH(double aH);
	void setK(double aK);
	//Accesor function
	double getH() const;
	double getK() const;
	double getRadius() const;
	double getArea() const;
	double getDiameter() const;
	double getCircumference() const;
	//Member functions
	void display() const;
	void displayCenter() const;
};
#endif
