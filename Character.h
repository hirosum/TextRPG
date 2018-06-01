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
	unsigned int 	m_level;
	Race			m_race;

	unsigned int 	m_maxHealth;
	unsigned int 	m_strength;
	unsigned int 	m_endurance;
	unsigned int 	m_agility;
	unsigned int 	m_intelligence;

	void initialStats();
public:
	Character();
	Character(string name, char gender, unsigned int level, Race race);
	virtual ~Character();
	char getGender(){return m_gender;}
	string getGenderStr();
	string getName(){return m_name;}
	string getRaceStr();
	unsigned int getLevel(){return m_level;}
	unsigned int getStrength(){return m_strength;}
	unsigned int getEndurance(){return m_endurance;}
	unsigned int getAgility(){return m_agility;}
	unsigned int getIntelligence(){return m_intelligence;}
	unsigned int getMaxHealth(){return m_maxHealth;}
};

#endif /* CHARACTER_H_ */
