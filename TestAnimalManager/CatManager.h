/*
 * CatManager.h
 *
 *  Created on: Mar 14, 2017
 *      Author: asd
 */

#ifndef CATMANAGER_H_
#define CATMANAGER_H_

#include "OnSoundListener.h"
#include "SoundSubject.h"
#include <iostream>
#include <vector>
using namespace std;


class CatManager: public OnSoundListener,
	public SoundSubject {
public:
	CatManager();

	virtual void sound();

	virtual void onListenSound();

	virtual ~CatManager();

private:
	vector<class OnSoundListener*> listeners;
	int soundCout;
};

#endif /* CATMANAGER_H_ */
