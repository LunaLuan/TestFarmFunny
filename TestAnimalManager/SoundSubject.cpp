/*
 * SoundSubject.cpp
 *
 *  Created on: Mar 15, 2017
 *      Author: asd
 */

#include "SoundSubject.h"

SoundSubject::SoundSubject() {
	// TODO Auto-generated constructor stub

}


void SoundSubject::addOnSoundListener(OnSoundListener *onSoundListener) {
	listeners.push_back(onSoundListener);
}

void SoundSubject::removeOnSoundListener(OnSoundListener *OnSoundListener) {

}

void SoundSubject::notifyListener() {
	int size = listeners.size();
	for(int i = 0 ; i < size ; i++) {
		listeners[i]->onListenSound();
	}
}

SoundSubject::~SoundSubject() {
	// TODO Auto-generated destructor stub
}

