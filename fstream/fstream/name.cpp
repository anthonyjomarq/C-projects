#include <iostream>
#include <fstream>
using namespace::std;
int main() {
	string name;
	ofstream outFile;//objeto de tipo achivo para output

	outFile.open("name.txt");
	
	//cout << name;
	cout << "This program will ask the user's name and save it to a file." << endl;
	cout << "Enter your name: ";
	cin >> name;
	outFile << name;

	outFile.close();

	return 0;
}