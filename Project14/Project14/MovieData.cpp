#include "MovieData.h"

double MovieData::validate(double num)
{
	if (num < 0) { throw invalid_argument("ERROR: CANNOT ACCEPT NEGATIVE VALUES!"); }
	return num;
}

MovieData::MovieData(char* title_name, char* director_name, int release_year, double total_minutes, double cost_to_produce, double revenue_first_year)
{
	if (title_name == nullptr || director_name == nullptr) {
		const char* none_ptr = new char[4];
		string none = "None";
		none_ptr = none.c_str();
		this->setTitle(none_ptr);
		this->setDirector(none_ptr);
	}
	else {
		this->setTitle(title_name);
		this->setDirector(director_name);
	}
	year_released = release_year;
	running_minutes = total_minutes;
	production_cost = validate(cost_to_produce);
	first_year_revenue = validate(revenue_first_year);
}

MovieData::MovieData(const MovieData& obj)
{
	title = obj.title;
	director = obj.director;
	year_released = obj.year_released;
	running_minutes = obj.running_minutes;
	production_cost = validate(obj.production_cost);
	first_year_revenue = validate(obj.first_year_revenue);
}

MovieData::~MovieData()
{
	delete[] title;
	delete[] director;
}

void MovieData::setTitle(const char* title_name)
{
	//if (title != nullptr) { delete title; }
	title = new char[strlen(title_name) + 1];
	strcpy_s(title, strlen(title_name) + 1, title_name);
}

void MovieData::setDirector(const char* director_name)
{
	//if (director != nullptr) { delete director; }
	director = new char[strlen(director_name) + 1];
	strcpy_s(director, strlen(director_name) + 1, director_name);
}

void MovieData::setYear(int release_year)
{
	year_released = release_year;
}

void MovieData::setDuration(double duration)
{
	running_minutes = duration;
}

void MovieData::setProductionCost(double cost)
{
	production_cost = validate(cost);
}

void MovieData::setFirstYearRevenue(double revenue)
{
	first_year_revenue = validate(revenue);
}

string MovieData::getTitle() const
{
	return string(title);
}

string MovieData::getDirector() const
{
	return string(director);
}

int MovieData::getRelease() const
{
	return year_released;
}

double MovieData::getDuration() const
{
	return running_minutes;
}

double MovieData::getProductionCost() const
{
	return production_cost;
}

double MovieData::getFirstYearRevenue() const
{
	return first_year_revenue;
}

void MovieData::display() const
{
	cout << "Title    : " << getTitle() << endl;
	cout << "Director : " << getDirector() << endl;
	cout << "Released : " << getRelease() << endl;
	cout << "Duration : " << getDirector() << " minutes" << endl;
	cout << "Production Cost  : $" << fixed << setprecision(2) << getProductionCost() << endl;
	cout << "1st Year Revenue : $" << fixed << setprecision(2) << getFirstYearRevenue() << endl;
}

void MovieData::operator=(MovieData& obj)
{
	title = obj.title;
	director = obj.director;
	year_released = obj.year_released;
	running_minutes = obj.running_minutes;
	production_cost = validate(obj.production_cost);
	first_year_revenue = validate(obj.first_year_revenue);
}

ostream& operator<<(ostream& out, MovieData& obj)
{
	out << "Title    : " << obj.getTitle() << endl;
	out << "Director : " << obj.getDirector() << endl;
	out << "Released : " << obj.getRelease() << endl;
	out << "Duration : " << obj.getDirector() << " minutes" << endl;
	out << "Production Cost  : $" << fixed << setprecision(2) << obj.getProductionCost() << endl;
	out << "1st Year Revenue : $" << fixed << setprecision(2) << obj.getFirstYearRevenue() << endl;
	return out;
}

istream& operator>>(istream& inp, MovieData& obj)
{
	char title[20];
	char director[20];
	int year;
	double minutes;
	double cost;
	double revenue;

	cout << "Entre the film's Title        : ";
	cin >> title;
	cout << "Enter the Director's name     : ";
	cin >> director;
	cout << "Enter the year of release     : ";
	cin >> year;
	cout << "Enter the duration in minutes : ";
	cin >> minutes;
	cout << "Enter the Production Cost     : ";
	cin >> cost;
	cout << "Enter the 1st Year Revenue    : ";
	cin >> revenue;

	obj.setTitle(title);
	obj.setDirector(director);
	obj.setYear(year);
	obj.setDuration(minutes);
	obj.setProductionCost(cost);
	obj.setFirstYearRevenue(revenue);

	return inp;
}
