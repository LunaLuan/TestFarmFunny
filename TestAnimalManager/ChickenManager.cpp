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
	int size = listeners.size();
	for(int i = 0 ; i < size ; i++) {
		listeners[i]->onListenSound();
	}
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

void ChickenManager::addOnSoundListener(OnSoundListener *onSoundListener) {
	listeners.push_back(onSoundListener);
}

void ChickenManager::removeOnSoundListener(OnSoundListener *OnSoundListener) {

}



ChickenManager::~ChickenManager() {
	// TODO Auto-generated destructor stub
}

