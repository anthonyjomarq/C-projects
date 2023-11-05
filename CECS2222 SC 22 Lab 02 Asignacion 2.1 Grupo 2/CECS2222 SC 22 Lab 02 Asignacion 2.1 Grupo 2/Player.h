#pragma once
#include<iostream>
using namespace::std;
class Player
{
private:
	string* name;
	int* number;
	int* score;
	bool isValid(int* n) const;

public:
	//CONSTRUCTORS
	Player(); //default constructor
	Player(string* name, int* number, int* score); //full constructor
	~Player(); //destructor

	//MUTATORS
	Player& setName(string* name);
	Player& setNumber(int* number);
	Player& setScore(int* score);

	//ACCESORS
	string* getName() const;
	int* getNumber() const;
	int* getScore() const;

	//USER INPUT
	Player& requestName();
	Player& requestNumber();
	Player& requestScore();

	//UTILS
	void display();
	void test() const;
};