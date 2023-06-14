/*****************************************************************//**
 * File: Player.h
 * Author: B11115029 白安睿
 * Create Date: May 25, 2023
 * Editor:
 *  B11115046 黃健嘉
 *	B11015016 Leong Yah Xuan
 *	B11009004 Ku Chien Jung
 * Update Date: June 14, 2023
 * Description: This C++ program is to implement player in game.
 *********************************************************************/
#pragma once
#include "Pokemon.h"
#include "Potion.h"

using namespace std;

class Player
{
public:
	vector<Pokemon> pokemonList; // to handle the pokemon of player
public:
	// Constructor
	Player();
	// Function
	void addPokemon(Pokemon inputPokemon);
};