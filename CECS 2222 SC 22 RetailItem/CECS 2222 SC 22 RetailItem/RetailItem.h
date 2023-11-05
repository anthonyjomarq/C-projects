#define RETAILITEM_H
#ifdef RETAILITEM_H

class RetailItem {
private:
	string description;
	int unitsOnHand;
	double price;
public:
	//Constructor function
	Circle(string, int , double);
	//Mutators functions 
	void setRadius(double aRadius);
	//Accesor function
	double getRadius() const;
	double getArea() const;
	double getDiameter() const;
	double getCircumference() const;
	double getCenter() const;
	//Member functions
	void display() const;
};
#endif

