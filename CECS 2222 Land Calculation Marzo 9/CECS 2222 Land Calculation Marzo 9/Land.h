#define LAND_H
#ifdef LAND_H
class Land {
private:
	double squareFeet;
public:
	//Land();
	
	Land(double aSquareFeet = 0.0);
	Land(const Land& obj);
	~Land();
	void setSquareFeet(double aSquareFeet);
	double getSquareFeet() const;
	double getAcre() const;
	void display() const;

};
#endif

