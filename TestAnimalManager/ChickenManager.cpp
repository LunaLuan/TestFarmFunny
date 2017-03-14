/*
 * ChickenManager.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: asd
 */

#include "ChickenManager.h"

ChickenManager::ChickenManager() {
	soundCout = 0;
}

void ChickenManager::sound() {
	cout << "Bawk...." << endl;
	notifyListener();
}

void ChickenManager::onListenSound() {
	soundCout ++;
	if(soundCout < 3) {
		cout << "...Ga day. Thang nao vua keu day + "
				<< soundCout <<endl;
	}
	else {
		cout << "...Thang meo kia. May sua it thoi + "
				<< soundCout <<endl;
	}
}

ChickenManager::~ChickenManager() {
	// TODO Auto-generated destructor stub
}

