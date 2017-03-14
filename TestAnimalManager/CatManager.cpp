/*
 * CatManager.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: asd
 */

#include "CatManager.h"

CatManager::CatManager() {
	soundCout = 0;
}

void CatManager::sound() {
	cout << "Meok..." << endl;
	notifyListener();
}

void CatManager::onListenSound() {
	soundCout++;
	if(soundCout < 5) {
		cout << "...Meo day. Thang nao sua the + "
				<< soundCout <<endl;
	}
	else {
		cout << "...Meo day. Thang ga cam ngay + "
				<< soundCout <<endl;
	}
}


CatManager::~CatManager() {
	// TODO Auto-generated destructor stub
}

