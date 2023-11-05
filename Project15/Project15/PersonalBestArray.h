#include <iostream>
#include "Course.h"
using namespace::std;
class Catalog {
private:
	string universityName;
	int count;
	Course* courses;
public:
	Catalog();
	  Catalog(string);
	  ~Catalog();
	  void setName(string);
	  int getCount() const;
	  string getName() const;
	  int findCourse(string);
	  void addCourse(Course);
	  void dropCourse(string);
	  void orderCatalog();
	  void printCatalog() const;
