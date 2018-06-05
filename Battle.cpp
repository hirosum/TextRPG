/*
 * Battle.cpp
 *
 *  Created on: Jun 1, 2018
 *      Author: 10272153
 */

#include "Battle.h"
Battle::Battle() {
	m_playerPtr = NULL;
	m_challenge = 0.0f;
	m_noOfEnemies = 0;
}

Battle::Battle(PlayerCharacter* c)
{
	m_playerPtr = c;
	m_challenge = CHALLENGE_MOD * c->getLevel();
	m_noOfEnemies = 1;

}

Battle::~Battle() {
	// TODO Auto-generated destructor stub
}

