/*
 * SoundSubject.h
 *
 *  Created on: Mar 15, 2017
 *      Author: asd
 */

#ifndef SOUNDSUBJECT_H_
#define SOUNDSUBJECT_H_

#include "OnSoundListener.h"
#include <vector>
#include <iostream>
using namespace std;

class SoundSubject {
public:
	SoundSubject();

	virtual void sound() = 0;

	void addOnSoundListener(OnSoundListener *onSoundListener) ;
	void removeOnSoundListener(OnSoundListener *onSoundListener) ;

	void notifyListener();

	virtual ~SoundSubject();

protected:
	vector<class OnSoundListener*> listeners;
};

#endif /* SOUNDSUBJECT_H_ */
