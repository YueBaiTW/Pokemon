/*****************************************************************//**
 * File: Skill.h
 * Author: B11115029 白安睿
 * Create Date: May 25, 2023
 * Editor:
 *  B11115046 黃健嘉
 *	B11015016 Leong Yah Xuan
 *	B11009004 Ku Chien Jung
 * Update Date: June 14, 2023
 * Description: This C++ program is to implement skill of Pokemon.
 *********************************************************************/
#pragma once
#include <string>

using namespace std;

class Skill
{
private:
	string name;			// skill name
	string skillType;		// skill type
	string atkType;			// attack type of skill
	int power;				// skill power
	int accuracy;			// skill accuracy
	int pp;					// power point of skill -> energy required to perform skill
	int ppLimit;			// limit of power point
	string negativeEffect;	// negative effect from skill

public:
	// Constructor
	Skill();
	// Function to set up skill of Pokemon
	void setName(string name);
	void setSkillType(string skillType);
	void setAtkType(string atkType);
	void setPower(int power);
	void setAccuracy(int accuracy);
	void setPP(int pp);
	void setPPLimit(int ppLimit);
	void setNegativeEffect(string negativeEffect);
	// Function to get value of skill
	string getName();
	string getSkillType();
	string getAtkType();
	int getPower();
	int getAccuracy();
	int getPP();
	int getPPLimit();
	string getNegativeEffect();
};