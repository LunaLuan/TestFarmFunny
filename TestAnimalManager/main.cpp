/*
 * main.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: asd
 */

#include "ChickenManager.h"
#include "CatManager.h"

void printMenu() {
	cout << "===================================" << endl;
	cout << "1. Ga keu...." << endl;
	cout << "2. Meo keu..." << endl;
	cout << "0. End..." << endl;
	cout << "===================================" << endl;
}

int main() {
	ChickenManager chicken;
	CatManager cat;

	chicken.addOnSoundListener(&cat);
	cat.addOnSoundListener(&chicken);


	int type;
	printMenu();
	cin >> type;
	while (type != 0) {
		if(type == 1) {
			chicken.sound();
		}
		else if(type == 2) {
			cat.sound();
		}
		cin >> type;
	}


	return 0;
}


