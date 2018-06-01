#include <iostream>
#include <algorithm>
#include <string>
#include "PlayerCharacter.h"

using namespace std;

void showStatsScreen(Character &c)
{
	cout << "Name:         " << c.getName() << endl;
	cout << "Gender:       " << c.getGenderStr() << endl;
	cout << "Race:         " << c.getRaceStr() << endl;
	cout << "Level:        " << to_string(c.getLevel()) << endl;
	cout << "	Attributes" << endl;
	cout << "Max Health:   " << c.getMaxHealth() << endl;
	cout << "Strength:     " << c.getStrength() << endl;
	cout << "Endurance:    " << c.getEndurance() << endl;
	cout << "Agility:      " << c.getAgility() << endl;
	cout << "Intelligence: " << c.getIntelligence() << endl;
}

void characterCreation(PlayerCharacter &c)
{
	bool incorrectInput = true;
	string name;
	cout << "Enter your name:" << endl;
	cin >> name;
	char genderChar;
	while(incorrectInput)
	{
		cout << "Are you Male or Female?" << endl;
		string genderStr;
		cin >> genderStr;
		transform(genderStr.begin(),genderStr.end(),genderStr.begin(), ::tolower);
		if(genderStr == "male" || genderStr == "m")
		{
			genderChar = 'M';
			incorrectInput = false;
		}
		else if(genderStr == "female" || genderStr == "f")
		{
			genderChar = 'F';
			incorrectInput = false;
		}
		else
		{
			cout << "Incorrect input." << endl;
		}
	}
	Race race;
	incorrectInput = true;
	while(incorrectInput)
	{
		cout << "Choose a race:" << endl;
		cout << "(H)uman, (D)warf, (E)lf" << endl;
		string raceStr;
		cin >> raceStr;
		transform(raceStr.begin(),raceStr.end(),raceStr.begin(), ::tolower);

		if(raceStr == "human" || raceStr == "h")
		{
			race = Race::HUMAN;
			incorrectInput = false;
		}
		else if(raceStr == "dwarf" || raceStr == "d")
		{
			race = Race::DWARF;
			incorrectInput = false;
		}
		else if(raceStr == "elf" || raceStr == "e")
		{
			race = Race::ELF;
			incorrectInput = false;
		}
		else
		{
			cout << "Incorrect input." << endl;
		}
	}
	c = PlayerCharacter(name,genderChar,1, race);
}

int main(void)
{
	PlayerCharacter player;
	characterCreation(player);
	showStatsScreen(player);



	return 1;
}

