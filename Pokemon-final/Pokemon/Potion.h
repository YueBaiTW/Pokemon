/*****************************************************************//**
 * File: Potion.h
 * Author: B11115029 白安睿
 * Create Date: May 25, 2023
 * Editor:
 *  B11115046 黃健嘉
 *	B11015016 Leong Yah Xuan
 *	B11009004 Ku Chien Jung
 * Update Date: June 14, 2023
 * Description: This C++ program is to implement potion in game.
 *********************************************************************/
#pragma once
#include <string>

using namespace std;

class Potion
{
private:
	string name;	// potion name
	int healAmount; // heal amount of potion
	int frequency;	// able used times for potion
public:
	// Constructor
	Potion();
	// Function to set up potion
	void setName(string name);
	void setHealAmount(int initAmount);
	void setFrequency(int initFrequency);
	// Function to get value of potion
	Potion getPotion();
	string getName();
	int getHealAmount();
	int getFrequency();
};
