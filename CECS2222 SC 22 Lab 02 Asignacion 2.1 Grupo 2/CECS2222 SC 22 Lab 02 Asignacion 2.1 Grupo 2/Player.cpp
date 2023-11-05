#include "Player.h"
#include<iostream>
using namespace::std;

bool Player::isValid(int* n) const {
	return *n >= 0;
}

Player::Player() {
	string* ptrName = nullptr;
	int* ptrNumber = nullptr;
	int* ptrScore = nullptr;
	this->name = ptrName;
	this->number = ptrNumber;
	this->score = ptrScore;
}

Player::Player(string* name, int* number, int* score) {
	string* ptrName = name;
	int* ptrNumber = number;
	int* ptrScore = score;
	this->name = ptrName;
	this->number = ptrNumber;
	this->score = ptrScore;
}

Player::~Player() {
	//delete this->name;
	//delete this->number;
	//delete this->score;
}

Player& Player::setName(string* name) {
	this->name = name;
	return *this;
}

Player& Player::setNumber(int* number) {
	if (isValid(number)) {
		this->number = number;
		return *this;
	}
	else {
		throw invalid_argument("RECEIVED A NEGATIVE VALUE");
	}
}

Player& Player::setScore(int* score) {
	if (isValid(score)) {
		this->score = score;
		return *this;
	}
	else {
		throw invalid_argument("RECEIVED A NEGATIVE VALUE");
	}
}

string* Player::getName() const {
	return name;
}

int* Player::getNumber() const {
	return number;
}

int* Player::getScore() const {
	return score;
}

Player& Player::requestName()
{
	string name;
	cout << "Enter Player Name : ";
	cin >> name;
	cin.ignore();
	this->setName(&name);
	return *this;
}

Player& Player::requestNumber()
{
	bool isDone = false;
	while (!isDone) {
		int number;
		cout << "Enter Player Number : ";
		cin >> number;
		cin.ignore();
		try {
			this->setNumber(&number);
			isDone = true;
		}
		catch (invalid_argument e) {
			cout << "ERROR: NEGATIVE VALUES ARE NOT ALLOWED" << endl;
		}
	}
	return *this;
}

Player& Player::requestScore()
{
	bool isDone = false;
	while (!isDone) {
		int score;
		cout << "Enter Player Score : ";
		cin >> score;
		cin.ignore();
		try {
			this->setScore(&score);
			isDone = true;
		}
		catch (invalid_argument e) {
			cout << "ERROR: NEGATIVE VALUES ARE NOT ALLOWED" << endl;
		}
	}
	return *this;
}

void Player::display() {
	cout << "Name   : " << (this)->getName() << endl;
	cout << "Number : " << (this)->getNumber() << endl;
	cout << "Score  : " << (this)->getScore() << endl;
}

//trying stuff DELETE AFTERWARDS
void Player::test() const {
	cout << this->isValid(0) << endl;
}