/*****************************************************************//**
 * File: Bag.cpp
 * Author: B11115029 白安睿
 * Create Date: May 25, 2023
 * Editor:
 *  B11115046 黃健嘉
 *	B11015016 Leong Yah Xuan
 *	B11009004 Ku Chien Jung
 * Update Date: June 14, 2023
 * Description: This C++ program is to handle class Potion.
 *********************************************************************/
#include "Bag.h"
#include <iostream>

 /*****************************************************************//**
  * Intent: To construct the bag with potion.
  * Pre: The objects must be well-defined.
  * Post: The function initializes the bag with information of potion.
  *********************************************************************/
Bag::Bag()
{
	// set up the name of potion
	this->potion.setName("Potion");
	this->superPotion.setName("SuperPotion");
	this->hyperPotion.setName("HyperPotion");
	this->maxPotion.setName("MaxPotion");

	// set up the heal amount of potion
	this->potion.setHealAmount(20);
	this->superPotion.setHealAmount(60);
	this->hyperPotion.setHealAmount(120);
	this->maxPotion.setHealAmount(100000);
}

/*****************************************************************//**
 * Intent: To choose using which potion in bag.
 * Pre: -
 * Post: The function returns the name of a potion.
 * \return
 *********************************************************************/
string Bag::choosePotion()
{
	std::cout << "Please choose a potion or enter \"Back\" to cancel the use of potions." << endl;

	string potionName = "";
	std::cin >> potionName;
	while (true)
	{
		if (potionName == "Potion")
		{
			return "Potion";
		}
		else if (potionName == "SuperPotion")
		{
			return "SuperPotion";
		}
		else if (potionName == "HyperPotion")
		{
			return "HyperPotion";
		}
		else if (potionName == "MaxPotion")
		{
			return "MaxPotion";
		}
		else if (potionName == "Back")
		{
			return "Back";
		}
		else
		{
			std::cout << "You don't have this potion. Please re-enter." << std::endl;
			std::cin >> potionName;
		}
	}
}

/*****************************************************************//**
 * Intent: To use the potion in bag.
 * Pre: The variables name,mode must have a value.
 * Post: The function returns the heal amount of a potion.
 * \param name
 * \param mode
 * \return
 *********************************************************************/
int Bag::usePotion(string name, string mode)
{
	if (name == "Potion")
	{
		// in normal mode will check if the able used times of potion still enough
		if (mode == "Normal" && this->potion.getFrequency() > 0)
		{
			// deduct the able used times after used
			this->potion.setFrequency(this->potion.getFrequency() - 1);
		}
		return this->potion.getHealAmount();
	}
	else if (name == "SuperPotion")
	{
		if (mode == "Normal" && this->superPotion.getFrequency() > 0)
		{
			this->superPotion.setFrequency(this->superPotion.getFrequency() - 1);
		}
		return this->superPotion.getHealAmount();
	}
	else if (name == "HyperPotion")
	{
		if (mode == "Normal" && this->hyperPotion.getFrequency() > 0)
		{
			this->hyperPotion.setFrequency(this->hyperPotion.getFrequency() - 1);
		}
		return this->hyperPotion.getHealAmount();
	}
	else if (name == "MaxPotion")
	{
		if (mode == "Normal" && this->maxPotion.getFrequency() > 0)
		{
			this->maxPotion.setFrequency(this->maxPotion.getFrequency() - 1);
		}
		return this->maxPotion.getHealAmount();
	}
}