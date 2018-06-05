/*
 * PlayerCharacter.cpp
 *
 *  Created on: Jun 1, 2018
 *      Author: 10272153
 */

#include "PlayerCharacter.h"

PlayerCharacter::PlayerCharacter()
{
	// TODO Auto-generated constructor stub

}

PlayerCharacter::PlayerCharacter(string name, char gender,
				uint level, Race race) :  Character(name, gender, level, race)
{
	initialStats();
}

PlayerCharacter::~PlayerCharacter()
{
	// TODO Auto-generated destructor stub
}



void PlayerCharacter::initialStats()
{
	switch(m_race)
	{
	case Race::HUMAN:
		m_maxHealth = 100;
		m_strength = 5;
		m_endurance = 5;
		m_agility = 5;
		m_intelligence = 5;
		return;
	case Race::DWARF:
		m_maxHealth = 80;
		m_strength = 6;
		m_endurance = 6;
		m_agility = 3;
		m_intelligence = 5;
		return;
	case Race::ELF:
		m_maxHealth = 60;
		m_strength = 4;
		m_endurance = 4;
		m_agility = 6;
		m_intelligence = 7;
		return;
	default:
		m_maxHealth = 100;
		m_strength = 5;
		m_endurance = 5;
		m_agility = 5;
		m_intelligence = 5;
		return;
	}
}

