#include "Cube.h"

Cube::Cube() : Rectangle()
{
	cout << "Default Constructor de la clase Rectangle\n";
	height = 0.0; volume = 0.0;
}

// Constructor #2 
Cube::Cube(double w, double len, double h) : Rectangle(w, len)
{
	cout << "Construyendo Constructor de la clase Cube\n";
	height = h;
	volume = getArea() * h;
}
Cube::~Cube()
{
	cout << "Destruyendo Constructor de la clase Cube\n";
	system("pause");
}

void Cube::setHeight(double h)
{
	height = h;
}

void Cube::set(double w, double len, double h)
{
	setWidth(w);
	setLength(len);
	setHeight(h);
}


double Cube::getHeight() const
{
	return height;
}

double Cube::getVolume() const
{
	return (getArea() * getHeight());
}

void Cube::display2() const
{
	cout << "Here are the cube's properties:\n";
    display();
	cout << "Height: " << getHeight() << endl;
	cout << "Volume: " << getVolume() << endl;

}
