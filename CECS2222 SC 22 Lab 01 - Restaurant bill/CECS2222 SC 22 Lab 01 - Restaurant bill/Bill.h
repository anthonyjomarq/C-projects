#define BILL_H
#ifdef BILL_H

class Bill {
private:
	double mealCost;
	double tip;
	double tax;
public:
	//Constructor function
	Bill();
	Bill(double);
	~Bill();
	//Mutators functions
	void setCost(double);
	//Accesor function 
	double getCost() const;
	double getTax() const;
	double getTip() const;
	//Member functions
	double getTotalCost() const;
	void display() const;
};
#endif

