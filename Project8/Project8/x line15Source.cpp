#include <iostream>
using namespace::std;
using std::count;
using std::endl;

void useLocal(void);
void useStaticlocal(void);
void useGlobal(void);

int x = 1;

int main()
{
	int x = 5;
	cout << "local x in main's outer scope is " << x << endl;

	{
		int x = 7;

		cout << "local x in main's inner scope is " << x << endl;
	}
	cout << "local x in main's outer scope is " << x << endl;
}