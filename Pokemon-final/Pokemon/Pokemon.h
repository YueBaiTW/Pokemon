/*****************************************************************//**
 * File: Pokemon.h
 * Author: B11115029 白安睿
 * Create Date: May 25, 2023
 * Editor:
 *  B11115046 黃健嘉
 *	B11015016 Leong Yah Xuan
 *	B11009004 Ku Chien Jung
 * Update Date: June 14, 2023
 * Description: This C++ program is to implement Pokemon in game.
 *********************************************************************/
#pragma once
#include <vector>
#include <iostream>
#include "Skill.h"

using namespace std;

class Pokemon
{
private:
	string name;					// pokemon name
	string type1;					// pokemon type
	string type2;					// additional type of pokemon
	int hp;							// health power of pokemon
	int hpLimit;					// limit for health power
	int atk;						// attack power of pokemon
	int def;						// defense power of pokemon
	int spAtk;						// special attack power
	int spDef;						// special defense power
	int speed;						// pokemon speed
	int level;						// pokemon level
	vector<string> negativeEffect;  // negative effect of pokemon having
	vector<Skill> skill;			// pokemon skill

public:
	// Constructor
	Pokemon(); // Default constructor
	Pokemon(string name, string type1, string type2, int hp, int atk, int def, int spAtk, int spDef, int speed, int level);
	// Function to set up Pokemon
	void setName(string name);
	void setType1(string type);
	void setType2(string type);
	void setHP(int hp);
	void setHPLimit(int hpLimit);
	void setAtk(int atk);
	void setDef(int def);
	void setSpAtk(int spAtk);
	void setSpDef(int spDef);
	void setSpeed(int speed);
	void setLevel(int level);
	void setNegativeEffect(string negativeEffect);
	void setSkillList(Skill skill);					// to set the skills of pokemon
	void setSkill(Skill inputSkill);				// to set the information for each skill
	// Function to get the value of Pokemon
	string getName();
	string getType1();
	string getType2();
	int getHP();
	int getHPLimit();
	int getAtk();
	int getDef();
	int getSpAtk();
	int getSpDef();
	int getSpeed();
	int getLevel();
	vector<string> getNegativeEffect();
	vector<Skill> getSkillList();		// to get the skill of pokemon
	Skill getSkill(string skillName);	// to get the specific skill of pokemon
	// Function to operate Pokemon
	bool useSkill(string skillName);	// to calculate the power point after using skill
	// Function to handle output
	void printSkill();					// to print skill name
	void printStatus();					// to print status after using skill
};