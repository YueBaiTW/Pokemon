/*****************************************************************//**
 * File: Bag.h
 * Author: B11115029 白安睿
 * Create Date: May 25, 2023
 * Editor:
 *  B11115046 黃健嘉
 *	B11015016 Leong Yah Xuan
 *	B11009004 Ku Chien Jung
 * Update Date: June 14, 2023
 * Description: This C++ program is to handle class Potion.
 *********************************************************************/
#pragma once
#include "Potion.h"

using namespace std;

class Bag
{
private:
	Potion potion;		// heals the Pokémon by 20 HP
	Potion superPotion; // heals the Pokémon by 60 HP
	Potion hyperPotion; // heals the Pokémon by 120 HP
	Potion maxPotion;	// heals the Pokémon to its full HP

public:
	// Constructor
	Bag();
	// Function
	string choosePotion();					 // get the name of potion
	int usePotion(string name, string mode); // get the heal amount of potion
};