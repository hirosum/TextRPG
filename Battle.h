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

float CHALLENGE_MOD = 0.5f;

class Battle {
public:
	Battle();
	Battle(PlayerCharacter* c);
	virtual ~Battle();

private:
	PlayerCharacter* 	m_playerPtr;
	Character 			m_enemies[4];
	float				m_challenge;
	uint				m_noOfEnemies;
};

#endif /* BATTLE_H_ */
