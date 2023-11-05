#include <iostream>
using namespace::std;

class Chef {
public:
	void makeChicken() {
		cout << "The chef makes chicken" << endl;
	}
	void makeSald() {
		cout << "The chef makes salad" << endl;
	}
	void makeSpecialDish() {
		cout << "The chef makes bbq ribs" << endl;
	}
};
class ItalianChef : public Chef {

};
int main() {
	Chef chef;
	chef.makeChicken();

	ItalianChef italianChef;
	italianChef.makeChicken();
}