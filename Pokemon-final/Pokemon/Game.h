/*****************************************************************//**
 * File: Game.h
 * Author: B11115029 白安睿
 * Create Date: May 25, 2023
 * Editor:
 *  B11115046 黃健嘉
 *	B11015016 Leong Yah Xuan
 *	B11009004 Ku Chien Jung
 * Update Date: June 14, 2023
 * Description: This C++ program is to implement game Pokemon.
 *********************************************************************/
#include "Player.h"
#include "Pokemon.h"
#include "Potion.h"
#include "Bag.h"
#include <map>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <conio.h>
#include <sstream>
#include <fstream>

using namespace std;

class Game
{
private:
	map<string, map<string, double>> restrainList;
	string gameState;
	string gameMode;
	int turn;
	Player myself, opponent;
	Bag myBag, oppoBag;
	vector<Skill> allSkill;
	bool hit = true;
public:
	// Constructor
	Game();
	// Function
	void initialize();	// Initialize all data
	void selectMode();	// mode defined

	void commandInput();	// handle input command
	void loadFile();		// Load test file

	void printTurn();	// Show current turns
	// Calculate the damage caused by the Pokémon
	int countDamage(Pokemon move, Pokemon target, Skill use);
	// Handle the NegativeEffect caused by the Pokémon
	void handleNegativeEffect(Pokemon& player, Pokemon& target, string skill, bool& isTargetPAR);

	bool checkAllOpponentPokemon(); // Check if opponent has a Pokémon to play
	bool checkAllPlayerPokemon();	// Check if the player has a Pokémon to play
};