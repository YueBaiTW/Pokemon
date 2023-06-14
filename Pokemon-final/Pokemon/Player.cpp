/*****************************************************************//**
 * File: Player.cpp
 * Author: B11115029 白安睿
 * Create Date: May 25, 2023
 * Editor:
 *  B11115046 黃健嘉
 *	B11015016 Leong Yah Xuan
 *	B11009004 Ku Chien Jung
 * Update Date: June 14, 2023
 * Description: This C++ program is to implement player in game.
 *********************************************************************/
#include "Player.h"

 /*****************************************************************//**
  * Intent: To construct the player with pokemon.
  * Pre: The variable pokemonList must be well-defined.
  * Post: The function initializes the player with cleared pokemon.
  *********************************************************************/
Player::Player()
{
	// clear the vector content
	this->pokemonList.clear();
}

/*****************************************************************//**
 * Intent: To add the pokemon to the player's pokemon list.
 * Pre: The variable inputPokemon must have a value.
 * Post: The function add the new pokemon to the vector of pokemon list.
 * \param input
 *********************************************************************/
void Player::addPokemon(Pokemon inputPokemon)
{
	this->pokemonList.push_back(inputPokemon);
}