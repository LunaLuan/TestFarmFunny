/*
 * OnSoundListener.h
 *
 *  Created on: Mar 14, 2017
 *      Author: asd
 */

#ifndef ONSOUNDLISTENER_H_
#define ONSOUNDLISTENER_H_



class OnSoundListener {
public:
	OnSoundListener();

	virtual void onListenSound() = 0;

	virtual ~OnSoundListener();
};

#endif /* ONSOUNDLISTENER_H_ */
