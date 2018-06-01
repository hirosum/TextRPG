/*
 * Character.h
 *
 *  Created on: May 31, 2018
 *      Author: 10272153
 */

#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <iostream>
#include <string>
#include "typedefs.h"

using namespace std;

class Character {

private:
	string 			m_name;
	char 			m_gender;
	uint 	m_level;
	Race			m_race;

	uint 	m_maxHealth;
	uint 	m_strength;
	uint 	m_endurance;
	uint 	m_agility;
	uint 	m_intelligence;

	void initialStats();
public:
	Character();
	Character(string name, char gender, uint level, Race race);
	virtual ~Character();
	char getGender(){return m_gender;}
	string getGenderStr();
	string getName(){return m_name;}
	string getRaceStr();
	uint getLevel(){return m_level;}
	uint getStrength(){return m_strength;}
	uint getEndurance(){return m_endurance;}
	uint getAgility(){return m_agility;}
	uint getIntelligence(){return m_intelligence;}
	uint getMaxHealth(){return m_maxHealth;}
};

#endif /* CHARACTER_H_ */
