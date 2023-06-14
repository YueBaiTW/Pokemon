/*****************************************************************//**
 * File: Pokemon.cpp
 * Author: B11115029 白安睿
 * Create Date: May 25, 2023
 * Editor:
 *  B11115046 黃健嘉
 *	B11015016 Leong Yah Xuan
 *	B11009004 Ku Chien Jung
 * Update Date: June 14, 2023
 * Description: This C++ program is to implement Pokemon in game.
 *********************************************************************/
#include "Pokemon.h"

using namespace std;

/*****************************************************************//**
  * Intent: To construct the pokemon.
  * Pre: The variables must be well-defined.
  * Post: The function initializes pokemon.
 *********************************************************************/
Pokemon::Pokemon()
{
	this->name = "";
	this->type1 = "";
	this->type2 = "";
	this->hp = 0;
	this->atk = 0;
	this->def = 0;
	this->spAtk = 0;
	this->spDef = 0;
	this->speed = 0;
	this->level = 50;
	this->skill.clear();
	this->negativeEffect.clear();
}

/*****************************************************************//**
  * Intent: To construct the pokemon with given information.
  * Pre: The variables must have valid value.
  * Post: The function initializes pokemon with given information.
 * \param name
 * \param type1
 * \param type2
 * \param hp
 * \param atk
 * \param def
 * \param spAtk
 * \param spDef
 * \param speed
 * \param level
 *********************************************************************/
Pokemon::Pokemon(string name, string type1, string type2, int hp, int atk, int def, int spAtk, int spDef, int speed, int level)
{
	this->name = name;
	this->type1 = type1;
	this->type2 = type2;
	this->hp = hp;
	this->atk = atk;
	this->def = def;
	this->spAtk = spAtk;
	this->spDef = spDef;
	this->speed = speed;
	this->level = level;
	this->skill.clear();
	this->negativeEffect.clear();
}

/*****************************************************************//**
 * Intent: To set the name of pokemon with given value.
 * Pre: The variable name must have a value.
 * Post: The function sets the name of pokemon.
 * \param name
 *********************************************************************/
void Pokemon::setName(string name)
{
	this->name = name;
}

/*****************************************************************//**
 * Intent: To set the first type of pokemon with given value.
 * Pre: The variable type must have a value.
 * Post: The function sets the first type of pokemon.
 * \param type
 *********************************************************************/
void Pokemon::setType1(string type)
{
	this->type1 = type;
}

/*****************************************************************//**
 * Intent: To set the second type of pokemon with given value.
 * Pre: The variable type must have a value.
 * Post: The function sets the additional type of pokemon.
 * \param type
 *********************************************************************/
void Pokemon::setType2(string type)
{
	this->type2 = type;
}

/*****************************************************************//**
 * Intent: To set the health power of pokemon with given value.
 * Pre: The variable hp must have a value.
 * Post: The function sets the health power of pokemon.
 * \param hp
 *********************************************************************/
void Pokemon::setHP(int hp)
{
	// check if the health power given is more than the limit
	if (hp > this->hpLimit)
	{
		// if yes, set it to the limited max health power
		this->hp = this->hpLimit;
	}
	else // if the health power is valid
	{
		this->hp = hp;
	}
}

/*****************************************************************//**
 * Intent: To set the limit for health power of pokemon with given value.
 * Pre: The variable hpLimit must have a value.
 * Post: The function sets the limit for health power of pokemon.
 * \param hpLimit
 *********************************************************************/
void Pokemon::setHPLimit(int hpLimit)
{
	this->hpLimit = hpLimit;
}

/*****************************************************************//**
 * Intent: To set the attack power of pokemon with given value.
 * Pre: The variable atk must have a value.
 * Post: The function sets the attack power of pokemon.
 * \param atk
 *********************************************************************/
void Pokemon::setAtk(int atk)
{
	this->atk = atk;
}

/*****************************************************************//**
 * Intent: To set the defense power of pokemon with given value.
 * Pre: The variable def must have a value.
 * Post: The function sets the defense power of pokemon.
 * \param def
 *********************************************************************/
void Pokemon::setDef(int def)
{
	this->def = def;
}

/*****************************************************************//**
 * Intent: To set the special attack power of pokemon with given value.
 * Pre: The variable spAtk must have a value.
 * Post: The function sets the special attack power of pokemon.
 * \param spAtk
 *********************************************************************/
void Pokemon::setSpAtk(int spAtk)
{
	this->spAtk = spAtk;
}

/*****************************************************************//**
 * Intent: To set the special defense power of pokemon with given value.
 * Pre: The variable spDef must have a value.
 * Post: The function sets the special defense power of pokemon.
 * \param spDef
 *********************************************************************/
void Pokemon::setSpDef(int spDef)
{
	this->spDef = spDef;
}

/*****************************************************************//**
 * Intent: To set the speed of pokemon with given value.
 * Pre: The variable speed must have a value.
 * Post: The function sets the speed of pokemon.
 * \param speed
 *********************************************************************/
void Pokemon::setSpeed(int speed)
{
	this->speed = speed;
}

/*****************************************************************//**
 * Intent: To set the level of pokemon with given value.
 * Pre: The variable level must have a value.
 * Post: The function sets the level of pokemon.
 * \param level
 *********************************************************************/
void Pokemon::setLevel(int level)
{
	this->level = level;
}

/*****************************************************************//**
 * Intent: To set the negative effect to pokemon with given value.
 * Pre: The variable negativeEffect must have a value.
 * Post: The function sets the negative effect to pokemon.
 * \param negativeEffect
 *********************************************************************/
void Pokemon::setNegativeEffect(string negativeEffect)
{
	this->negativeEffect.push_back(negativeEffect);
}

/*****************************************************************//**
 * Intent: To set the skill of pokemon with given value.
 * Pre: The variable skill must have a value.
 * Post: The function sets the skill of pokemon.
 * \param temp
 *********************************************************************/
void Pokemon::setSkillList(Skill skill)
{
	this->skill.push_back(skill);
}

/*****************************************************************//**
 * Intent: To set the skill of pokemon with given skill.
 * Pre: The object inputSkill must have value.
 * Post: The function updates the information of pokemon skill.
 * \param input
 *********************************************************************/
void Pokemon::setSkill(Skill inputSkill)
{
	for (int i = 0; i < this->skill.size(); i++)
	{
		if (this->skill[i].getName() == inputSkill.getName())
		{
			this->skill[i].setName(inputSkill.getName());
			this->skill[i].setSkillType(inputSkill.getSkillType());
			this->skill[i].setAtkType(inputSkill.getAtkType());
			this->skill[i].setPower(inputSkill.getPower());
			this->skill[i].setAccuracy(inputSkill.getAccuracy());
			this->skill[i].setPP(inputSkill.getPP());
			this->skill[i].setNegativeEffect(inputSkill.getNegativeEffect());
		}
	}
}

/*****************************************************************//**
 * Intent: To get the name of pokemon.
 * Pre: The variable name must be well-defined.
 * Post: The function returns the name of pokemon.
 * \return
 *********************************************************************/
string Pokemon::getName()
{
	return this->name;
}

/*****************************************************************//**
 * Intent: To get the first type of pokemon.
 * Pre: The variable type1 must be well-defined.
 * Post: The function returns the first type of pokemon.
 * \return
 *********************************************************************/
string Pokemon::getType1()
{
	return this->type1;
}

/*****************************************************************//**
 * Intent: To get the additional type of pokemon.
 * Pre: The variable type2 must be well-defined.
 * Post: The function returns the second type of pokemon.
 * \return
 *********************************************************************/
string Pokemon::getType2()
{
	return this->type2;
}

/*****************************************************************//**
 * Intent: To get the health power of pokemon.
 * Pre: The variable hp must be well-defined.
 * Post: The function returns the health power of pokemon.
 * \return
 *********************************************************************/
int Pokemon::getHP()
{
	return this->hp;
}

/*****************************************************************//**
 * Intent: To get the limit for health power of pokemon.
 * Pre: The variable hpLimit must be well-defined.
 * Post: The function returns the limit for health power of pokemon.
 * \return
 *********************************************************************/
int Pokemon::getHPLimit()
{
	return this->hpLimit;
}

/*****************************************************************//**
 * Intent: To get the attack power of pokemon.
 * Pre: The variable atk must be well-defined.
 * Post: The function returns the attack power of pokemon.
 * \return
 *********************************************************************/
int Pokemon::getAtk()
{
	return this->atk;
}

/*****************************************************************//**
 * Intent: To get the defense power of pokemon.
 * Pre: The variable def must be well-defined.
 * Post: The function returns the defense power of pokemon.
 * \return
 *********************************************************************/
int Pokemon::getDef()
{
	return this->def;
}

/*****************************************************************//**
 * Intent: To get the special attack power of pokemon.
 * Pre: The variable spAtk must be well-defined.
 * Post: The function returns the special attack power of pokemon.
 * \return
 *********************************************************************/
int Pokemon::getSpAtk()
{
	return this->spAtk;
}

/*****************************************************************//**
 * Intent: To get the special defense power of pokemon.
 * Pre: The variable spDef must be well-defined.
 * Post: The function returns the special defense power of pokemon.
 * \return
 *********************************************************************/
int Pokemon::getSpDef()
{
	return this->spDef;
}

/*****************************************************************//**
 * Intent: To get the speed of pokemon.
 * Pre: The variable speed must be well-defined.
 * Post: The function returns the speed of pokemon.
 * \return
 *********************************************************************/
int Pokemon::getSpeed()
{
	return this->speed;
}

/*****************************************************************//**
 * Intent: To get the level of pokemon.
 * Pre: The variable level must be well-defined.
 * Post: The function returns the level of pokemon.
 * \return
 *********************************************************************/
int Pokemon::getLevel()
{
	return this->level;
}

/*****************************************************************//**
 * Intent: To get the negative effect to pokemon.
 * Pre: The variable negativeEffect must be well-defined.
 * Post: The function returns the negative effect of pokemon having.
 * \return
 *********************************************************************/
vector<string> Pokemon::getNegativeEffect()
{
	return this->negativeEffect;
}

/*****************************************************************//**
 * Intent: To get the skill of pokemon.
 * Pre: The variable skill must be well-defined.
 * Post: The function returns the skill of pokemon.
 * \return
 *********************************************************************/
vector<Skill> Pokemon::getSkillList()
{
	return this->skill;
}

/*****************************************************************//**
 * Intent: To get the specific skill of pokemon.
 * Pre: The variable skillName must be well-defined.
 * Post: The function returns the specific skill of pokemon.
 * \param name
 * \return
 *********************************************************************/
Skill Pokemon::getSkill(string skillName)
{
	for (int i = 0; i < this->skill.size(); i++)
	{
		if (this->skill[i].getName() == skillName)
		{
			return this->skill[i];
		}
	}
}

/*****************************************************************//**
 * Intent: To use the skill of Pokemon.
 * Pre: The variable skillName must have a value.
 * Post: The function returns the boolean value which indicates if the skill is successfully used.
 * \param name
 * \return
 *********************************************************************/
bool Pokemon::useSkill(string skillName)
{
	// mark no skill is used
	bool isUsed = false;

	for (int i = 0; i < skill.size(); i++)
	{
		// check if the skill is exists for use
		// also if the skill power point still enough
		if (this->skill[i].getName() == skillName && this->skill[i].getPP() > 0)
		{
			isUsed = true; // mark the skill is used

			// deduct the power point
			this->skill[i].setPP(this->skill[i].getPP() - 1);

			break; // direct jump out the loop
		}
	}

	return isUsed;
}

/*****************************************************************//**
 * Intent: To print the skill name of pokemon.
 * Pre: The variable skill must be well-defined.
 * Post: The function outputs the skill name of pokemon.
 *********************************************************************/
void Pokemon::printSkill()
{
	for (int i = 0; i < this->skill.size(); i++)
	{
		cout << this->skill[0].getName();
	}
}

/*****************************************************************//**
 * Intent: To print the pokemon health power and negative effect after using skill.
 * Pre: The variables must be well-defined.
 * Post: The function outputs the pokemon status after using skill.
 *********************************************************************/
void Pokemon::printStatus()
{
	cout << this->name << " " << this->hp << " ";

	for (int i = 0; i < this->negativeEffect.size(); i++)
	{
		cout << this->negativeEffect[i] << " ";
	}
}