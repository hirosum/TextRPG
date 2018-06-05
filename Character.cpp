/*
 * Character.cpp
 *
 *  Created on: May 31, 2018
 *      Author: 10272153
 */

#include "Character.h"

Character::Character()
{
	m_name		= "DEFAULT_NAME";
	m_gender	= 'D';
	m_level		= 0;
	m_race		= Race::DEFAULT;

	m_maxHealth 	= 0;
	m_strength 		= 0;
	m_endurance 	= 0;
	m_agility 		= 0;
	m_intelligence 	= 0;
}

Character::Character(string name, char gender, uint level, Race race)
{
	m_name 		= name;
	m_gender 	= gender;
	m_level 	= level;
	m_race		= race;
	m_maxHealth 	= 0;
	m_strength 		= 0;
	m_endurance 	= 0;
	m_agility 		= 0;
	m_intelligence 	= 0;
}
Character::Character(string name, char gender, uint level, Race race,
						uint maxHealth, uint strength, uint endurance,
						uint agility, uint intelligence)
{
	m_name 		= name;
	m_gender 	= gender;
	m_level 	= level;
	m_race		= race;
	m_maxHealth 	= maxHealth;
	m_strength 		= strength;
	m_endurance 	= endurance;
	m_agility 		= agility;
	m_intelligence 	= intelligence;
}

Character::~Character()
{
	// TODO Auto-generated destructor stub
}

string Character::getGenderStr()
{
	switch(m_gender)
	{
	case 'M':
		return "Male";
	case 'F':
		return "Female";
	default:
		return "Default";
	}
}

string Character::getRaceStr()
{
	switch(m_race)
	{
	case Race::HUMAN:
		return "Human";
	case Race::DWARF:
		return "Dwarf";
	case Race::ELF:
		return "Elf";
	default:
		return "Default";
	}
}
