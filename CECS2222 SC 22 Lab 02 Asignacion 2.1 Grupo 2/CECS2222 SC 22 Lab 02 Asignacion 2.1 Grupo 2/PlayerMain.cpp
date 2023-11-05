#include "Player.h"
#include<iostream>
using namespace::std;

Player* createPlayerArray(int* size);
void requestPlayers(Player* playerArray, int* size);
void displayPlayers(Player* playerArray, int* size);

int main() {
	cout << "Enter amount of players : ";
	int size;
	cin >> size;
	cin.ignore();

	Player* boston = createPlayerArray(&size);
	requestPlayers(boston, &size);
	displayPlayers(boston, &size);


	delete[] boston;
	return 0;
}

Player* createPlayerArray(int* size) {
	Player* player_array = nullptr;
	player_array = new Player[*size];
	return player_array;
}

void requestPlayers(Player* playerArray, int* size) {
	for (int i = 0; i < *size; i++) {
		cout << "Element #" << i + 1 << endl;
		Player player;
		player.requestName();
		player.requestNumber();
		player.requestScore();
		*(playerArray + i) = player;
	}
}

void displayPlayers(Player* playerArray, int* size) {
	for (int i = 0; i < *size; i++) {
		Player& player = *(playerArray + i);
		player.display();
		cout << endl;
	}
}