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
	int size = listeners.size();
	for (int i = 0 ; i < size ; i++) {
		listeners[i]->onListenSound();
	}
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

void CatManager::addOnSoundListener(OnSoundListener *onSoundListener) {
	listeners.push_back(onSoundListener);
}

void CatManager::removeOnSoundListener(OnSoundListener *onSoundListener) {

}

CatManager::~CatManager() {
	// TODO Auto-generated destructor stub
}

