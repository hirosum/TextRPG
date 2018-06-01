/*
 * PlayerCharacter.h
 *
 *  Created on: Jun 1, 2018
 *      Author: 10272153
 */

#ifndef PLAYERCHARACTER_H_
#define PLAYERCHARACTER_H_

#include "Character.h"

class PlayerCharacter: public Character {
public:
	PlayerCharacter();
	PlayerCharacter(string name, char gender, uint level, Race race);
	virtual ~PlayerCharacter();
};

#endif /* PLAYERCHARACTER_H_ */
