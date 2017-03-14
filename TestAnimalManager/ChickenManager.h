/*
 * ChickenManager.h
 *
 *  Created on: Mar 14, 2017
 *      Author: asd
 */

#ifndef CHICKENMANAGER_H_
#define CHICKENMANAGER_H_

#include "OnSoundListener.h"
#include "SoundSubject.h"
#include <iostream>
#include <vector>
using namespace std;

class ChickenManager: public OnSoundListener,
	public SoundSubject {
public:
	ChickenManager();

	virtual void sound();

	virtual void onListenSound();


	virtual ~ChickenManager();

private:
	int soundCout;
};

#endif /* CHICKENMANAGER_H_ */
