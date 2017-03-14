/*
 * ChickenManager.h
 *
 *  Created on: Mar 14, 2017
 *      Author: asd
 */

#ifndef CHICKENMANAGER_H_
#define CHICKENMANAGER_H_

#include "OnSoundListener.h"
#include <iostream>
#include <vector>
using namespace std;

class ChickenManager: public OnSoundListener {
public:
	ChickenManager();

	void sound();

	virtual void onListenSound();
	void addOnSoundListener(OnSoundListener *onSoundListener);
	void removeOnSoundListener(OnSoundListener *onSoundListener);

	virtual ~ChickenManager();

private:
	vector<class OnSoundListener*> listeners;
	int soundCout;
};

#endif /* CHICKENMANAGER_H_ */
