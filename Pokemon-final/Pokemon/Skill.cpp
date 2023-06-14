/*****************************************************************//**
 * File: Skill.cpp
 * Author: B11115029 白安睿
 * Create Date: May 25, 2023
 * Editor:
 *  B11115046 黃健嘉
 *	B11015016 Leong Yah Xuan
 *	B11009004 Ku Chien Jung
 * Update Date: June 14, 2023
 * Description: This C++ program is to implement skill of Pokemon.
 *********************************************************************/
#include "Skill.h"

 /*****************************************************************//**
  * Intent: To construct the information of Pokemon skill.
  * Pre: The variables must be well-defined.
  * Post: The function initializes the skill information.
  *********************************************************************/
Skill::Skill()
{
	this->name = "";
	this->skillType = "";
	this->atkType = "";
	this->power = 0;
	this->accuracy = 0;
	this->pp = 0;
	this->ppLimit = 0;
	this->negativeEffect = "";
}

/*****************************************************************//**
 * Intent: To set the name of Pokemon skill with given value.
 * Pre: The variable name must have a value.
 * Post: The function sets the name of Pokemon skill.
 * \param name
 *********************************************************************/
void Skill::setName(string name)
{
	this->name = name;
}

/*****************************************************************//**
 * Intent: To set the type of Pokemon skill with given value.
 * Pre: The variable skillType must have a value.
 * Post: The function sets the type of Pokemon skill.
 * \param skillType
 *********************************************************************/
void Skill::setSkillType(string skillType)
{
	this->skillType = skillType;
}

/*****************************************************************//**
 * Intent: To set the attack type of Pokemon skill with given value.
 * Pre: The variable atkType must have a value.
 * Post: The function sets the attack type of Pokemon skill.
 * \param atkType
 *********************************************************************/
void Skill::setAtkType(string atkType)
{
	this->atkType = atkType;
}

/*****************************************************************//**
 * Intent: To set the power of Pokemon skill with given value.
 * Pre: The variable power must have a value.
 * Post: The function sets the power of Pokemon skill.
 * \param power
 *********************************************************************/
void Skill::setPower(int power)
{
	this->power = power;
}

/*****************************************************************//**
 * Intent: To set the accuracy of Pokemon skill with given value.
 * Pre: The variable accuracy must have a value.
 * Post: The function sets the accuracy of Pokemon skill.
 * \param accuracy
 *********************************************************************/
void Skill::setAccuracy(int accuracy)
{
	this->accuracy = accuracy;
}

/*****************************************************************//**
 * Intent: To set the power point of Pokemon skill with given value.
 * Pre: The variable pp must have a value.
 * Post: The function sets the power point of Pokemon skill.
 * \param pp
 *********************************************************************/
void Skill::setPP(int pp)
{
	if (this->pp < 0)
	{
		return; // power point become initialized 0
	}
	else // if the power point value is valid
	{
		this->pp = pp;
	}
}

/*****************************************************************//**
 * Intent: To set the limit for power point of Pokemon skill with given value.
 * Pre: The variable ppLimit must have a value.
 * Post: The function sets the limit for power point of Pokemon skill.
 * \param ppLimit
 *********************************************************************/
void Skill::setPPLimit(int ppLimit)
{
	this->ppLimit = ppLimit;
}

/*****************************************************************//**
 * Intent: To set the negative effect of Pokemon skill with given value.
 * Pre: The variable negativeEffect must have a value.
 * Post: The function sets the negative effect of Pokemon skill.
 * \param negativeEffect
 *********************************************************************/
void Skill::setNegativeEffect(string negativeEffect)
{
	this->negativeEffect = negativeEffect;
}

/*****************************************************************//**
 * Intent: To get the name of Pokemon skill.
 * Pre: The variable name must have a value.
 * Post: The function returns the name of Pokemon skill.
 * \return
 *********************************************************************/
string Skill::getName()
{
	return this->name;
}

/*****************************************************************//**
 * Intent: To get the type of Pokemon skill.
 * Pre: The variable skillType must have a value.
 * Post: The function returns the type of Pokemon skill.
 * \return
 *********************************************************************/
string Skill::getSkillType()
{
	return this->skillType;
}

/*****************************************************************//**
 * Intent: To get the attack type of Pokemon skill.
 * Pre: The variable atkType must have a value.
 * Post: The function returns the attack type of Pokemon skill.
 * \return
 *********************************************************************/
string Skill::getAtkType()
{
	return this->atkType;
}

/*****************************************************************//**
 * Intent: To get the power of Pokemon skill.
 * Pre: The variable power must have a value.
 * Post: The function returns the power of Pokemon skill.
 * \return
 *********************************************************************/
int Skill::getPower()
{
	return this->power;
}

/*****************************************************************//**
 * Intent: To get the accuracy of Pokemon skill.
 * Pre: The variable accuracy must have a value.
 * Post: The function returns the accuracy of Pokemon skill.
 * \return
 *********************************************************************/
int Skill::getAccuracy()
{
	return this->accuracy;
}

/*****************************************************************//**
 * Intent: To get the power point of Pokemon skill.
 * Pre: The variable pp must have a value.
 * Post: The function returns the power point of Pokemon skill.
 * \return
 *********************************************************************/
int Skill::getPP()
{
	return this->pp;
}

/*****************************************************************//**
 * Intent: To get the limit for the power point of Pokemon skill.
 * Pre: The variable ppLimit must have a value.
 * Post: The function returns the limit for the power point of Pokemon skill.
 * \return
 *********************************************************************/
int Skill::getPPLimit()
{
	return this->ppLimit;
}

/*****************************************************************//**
 * Intent: To get the negative effect of Pokemon skill.
 * Pre: The variable negativeEffect must have a value.
 * Post: The function returns the negative effect of Pokemon skill.
 * \return
 *********************************************************************/
string Skill::getNegativeEffect()
{
	return this->negativeEffect;
}