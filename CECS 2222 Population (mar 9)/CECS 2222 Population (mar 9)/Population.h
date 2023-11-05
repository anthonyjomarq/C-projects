#define POPULATION_H
#ifdef POPULATION_H

class Population {
private:
	int population;
	int births;
	int deaths;
public:
	//Constructor function
	Population(int aPopulation = 1, int aBirths = 0, int aDeaths = 0);
	Population(const Population& obj);
	//Destructor function
	~Population();
	//Mutators functions
	Population & setPopulation(int aPopulation);
	Population & setBirth(int aBirth);
	Population & setDeaths(int aDeaths);
	//Accesor function 
	int getPopulation() const;
	int getBirth() const;
	int getDeaths() const;
	//Member functions
	double getBirthRate() const;
	double getDeathRate() const;
	void display() const;
};
#endif
