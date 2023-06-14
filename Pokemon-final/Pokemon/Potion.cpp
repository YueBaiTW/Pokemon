/*****************************************************************//**
 * File: Potion.cpp
 * Author: B11115029 白安睿
 * Create Date: May 25, 2023
 * Editor:
 *  B11115046 黃健嘉
 *	B11015016 Leong Yah Xuan
 *	B11009004 Ku Chien Jung
 * Update Date: June 14, 2023
 * Description: This C++ program is to implement potion in game.
 *********************************************************************/
#include "Potion.h"

 /*****************************************************************//**
  * Intent: To construct the potion.
  * Pre: The variables name,healAmount,frequency must be well-defined.
  * Post: The function initializes the potion.
  *********************************************************************/
Potion::Potion()
{
	this->name = "";
	this->healAmount = 0;
	this->frequency = 10;
}

/*****************************************************************//**
 * Intent: To set up the name of potion by specific value.
 * Pre: The variable name must have a value.
 * Post: The function sets the name of the potion.
 * \param name
 *********************************************************************/
void Potion::setName(string name)
{
	this->name = name;
}

/*****************************************************************//**
 * Intent: To set up the heal amount of potion by specific value.
 * Pre: The variable initAmount must have a value.
 * Post: The function sets the heal amount of the potion.
 * \param initAmount
 *********************************************************************/
void Potion::setHealAmount(int initAmount)
{
	this->healAmount = initAmount;
}

/*****************************************************************//**
 * Intent: To set up the able used times of potion by specific value.
 * Pre: The variable initFrequency must have a value.
 * Post: The function sets the able used frequency of the potion.
 * \param initFrequency
 *********************************************************************/
void Potion::setFrequency(int initFrequency)
{
	this->frequency = initFrequency;
}

/*****************************************************************//**
 * Intent: To get the information of potion.
 * Pre: The object must be well-defined.
 * Post: The function returns a reference to the current Potion.
 * \return
 *********************************************************************/
Potion Potion::getPotion()
{
	return *this;
}

/*****************************************************************//**
 * Intent: To get the name of potion.
 * Pre: The variable name must be well-defined.
 * Post: The function returns the name of potion.
 * \return
 *********************************************************************/
string Potion::getName()
{
	return this->name;
}

/*****************************************************************//**
 * Intent: To get the heal amount of potion.
 * Pre: The variable healAmount must be well-defined.
 * Post: The function returns the heal amount of potion.
 * \return
 *********************************************************************/
int Potion::getHealAmount()
{
	return this->healAmount;
}

/*****************************************************************//**
 * Intent: To get the able used frequency of potion.
 * Pre: The variable frequency must be well-defined.
 * Post: The function returns the able used times of potion.
 * \return
 *********************************************************************/
int Potion::getFrequency()
{
	return this->frequency;
}