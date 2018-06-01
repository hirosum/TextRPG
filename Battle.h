/*
 * Battle.h
 *
 *  Created on: Jun 1, 2018
 *      Author: 10272153
 */

#ifndef BATTLE_H_
#define BATTLE_H_

#include <vector>
#include "PlayerCharacter.h"
#include "typedefs.h"

class Battle {
public:
	Battle();
	Battle(PlayerCharacter* c);
	virtual ~Battle();

private:
	PlayerCharacter* 	playerPtr;
	Character 			enemies[4];
};

#endif /* BATTLE_H_ */
