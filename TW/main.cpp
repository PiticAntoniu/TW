#include <iostream>
#include "main.h"
using namespace std;

class Unit {
public:
	virtual void Show() = 0;
};

class Tank : public Unit {
public:
	void Show() {
		cout << "Sunt un Tank" << endl;
	}
};

class Wizard : public Unit {
public:
	void Show() {
		cout << "Sunt un Wizard" << endl;

	}
};
class Game {
private:
	//Map map;
	//Minimap miniMap;
	Unit* units[1000];
	int numberOfUnits;
public:
	Game() {
		numberOfUnits = 0;
	}

	Game(int nou) {
		numberOfUnits = nou;
		for (int i = 0; i < numberOfUnits / 2; i++) {
			units[i] = new Tank();
		}
		for (int i = numberOfUnits/2; i < numberOfUnits; i++) {
			units[i] = new Wizard();
		}


		for (int i = 0; i < numberOfUnits; i++) {
			units[i]->Show();
		}
	}

	void SetNumberOfUnits(int nou) {
		if (nou < 1 || nou >1000) {
			cout << "BUBA";
			numberOfUnits = 1;
		}
		else
		{
			numberOfUnits = nou;
		}

	}

	void Start() {
		cout << "Game started!" << endl;
		cout << "There are " << numberOfUnits << " units" << endl;
	}
};

int main() {
	Game twGame(10);
	twGame.Start();
}