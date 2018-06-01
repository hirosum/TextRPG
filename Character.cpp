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
	initialStats();
}

Character::Character(string name, char gender, uint level, Race race)
{
	m_name 		= name;
	m_gender 	= gender;
	m_level 	= level;
	m_race		= race;
	initialStats();
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

void Character::initialStats()
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
