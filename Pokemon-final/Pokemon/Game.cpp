/*****************************************************************//**
 * File: Game.cpp
  * Author: B11115029 白安睿
  * Create Date: May 25, 2023
  * Editor:
  *  B11115046 黃健嘉
  *	 B11015016 Leong Yah Xuan
  *	 B11009004 Ku Chien Jung
  * Update Date: June 14, 2023
  * Description: This C++ program is to implement game Pokemon.
 *********************************************************************/
#include "Game.h"

Game::Game()
{
	this->restrainList["Normal"]["Normal"] = 1;
	this->restrainList["Normal"]["Fire"] = 1;
	this->restrainList["Normal"]["Water"] = 1;
	this->restrainList["Normal"]["Electric"] = 1;
	this->restrainList["Normal"]["Grass"] = 1;
	this->restrainList["Normal"]["Ice"] = 1;
	this->restrainList["Normal"]["Fighting"] = 1;
	this->restrainList["Normal"]["Poison"] = 1;
	this->restrainList["Normal"]["Ground"] = 1;
	this->restrainList["Normal"]["Flying"] = 1;
	this->restrainList["Normal"]["Psychic"] = 1;
	this->restrainList["Normal"]["Bug"] = 1;
	this->restrainList["Normal"]["Rock"] = 0.5;
	this->restrainList["Normal"]["Ghost"] = 0;
	this->restrainList["Normal"]["Dragon"] = 1;
	this->restrainList["Normal"]["Dark"] = 1;
	this->restrainList["Normal"]["Steel"] = 0.5;
	this->restrainList["Normal"]["Fairy"] = 1;

	this->restrainList["Fire"]["Normal"] = 1;
	this->restrainList["Fire"]["Fire"] = 0.5;
	this->restrainList["Fire"]["Water"] = 0.5;
	this->restrainList["Fire"]["Electric"] = 1;
	this->restrainList["Fire"]["Grass"] = 2;
	this->restrainList["Fire"]["Ice"] = 2;
	this->restrainList["Fire"]["Fighting"] = 1;
	this->restrainList["Fire"]["Poison"] = 1;
	this->restrainList["Fire"]["Ground"] = 1;
	this->restrainList["Fire"]["Flying"] = 1;
	this->restrainList["Fire"]["Psychic"] = 1;
	this->restrainList["Fire"]["Bug"] = 2;
	this->restrainList["Fire"]["Rock"] = 0.5;
	this->restrainList["Fire"]["Ghost"] = 1;
	this->restrainList["Fire"]["Dragon"] = 0.5;
	this->restrainList["Fire"]["Dark"] = 1;
	this->restrainList["Fire"]["Steel"] = 2;
	this->restrainList["Fire"]["Fairy"] = 1;
	this->restrainList["Fire"][""] = 1;

	this->restrainList["Water"]["Normal"] = 1;
	this->restrainList["Water"]["Fire"] = 2;
	this->restrainList["Water"]["Water"] = 0.5;
	this->restrainList["Water"]["Electric"] = 1;
	this->restrainList["Water"]["Grass"] = 0.5;
	this->restrainList["Water"]["Ice"] = 1;
	this->restrainList["Water"]["Fighting"] = 1;
	this->restrainList["Water"]["Poison"] = 1;
	this->restrainList["Water"]["Ground"] = 2;
	this->restrainList["Water"]["Flying"] = 1;
	this->restrainList["Water"]["Psychic"] = 1;
	this->restrainList["Water"]["Bug"] = 1;
	this->restrainList["Water"]["Rock"] = 2;
	this->restrainList["Water"]["Ghost"] = 1;
	this->restrainList["Water"]["Dragon"] = 0.5;
	this->restrainList["Water"]["Dark"] = 1;
	this->restrainList["Water"]["Steel"] = 1;
	this->restrainList["Water"]["Fairy"] = 1;
	this->restrainList["Water"][""] = 1;

	this->restrainList["Electric"]["Normal"] = 1;
	this->restrainList["Electric"]["Fire"] = 1;
	this->restrainList["Electric"]["Water"] = 2;
	this->restrainList["Electric"]["Electric"] = 0.5;
	this->restrainList["Electric"]["Grass"] = 0.5;
	this->restrainList["Electric"]["Ice"] = 1;
	this->restrainList["Electric"]["Fighting"] = 1;
	this->restrainList["Electric"]["Poison"] = 1;
	this->restrainList["Electric"]["Ground"] = 1;
	this->restrainList["Electric"]["Flying"] = 0;
	this->restrainList["Electric"]["Psychic"] = 2;
	this->restrainList["Electric"]["Bug"] = 1;
	this->restrainList["Electric"]["Rock"] = 1;
	this->restrainList["Electric"]["Ghost"] = 1;
	this->restrainList["Electric"]["Dragon"] = 0.5;
	this->restrainList["Electric"]["Dark"] = 1;
	this->restrainList["Electric"]["Steel"] = 1;
	this->restrainList["Electric"]["Fairy"] = 1;
	this->restrainList["Electric"][""] = 1;

	this->restrainList["Grass"]["Normal"] = 1;
	this->restrainList["Grass"]["Fire"] = 0.5;
	this->restrainList["Grass"]["Water"] = 2;
	this->restrainList["Grass"]["Electric"] = 1;
	this->restrainList["Grass"]["Grass"] = 0.5;
	this->restrainList["Grass"]["Ice"] = 1;
	this->restrainList["Grass"]["Fighting"] = 1;
	this->restrainList["Grass"]["Poison"] = 0.5;
	this->restrainList["Grass"]["Ground"] = 2;
	this->restrainList["Grass"]["Flying"] = 0.5;
	this->restrainList["Grass"]["Psychic"] = 1;
	this->restrainList["Grass"]["Bug"] = 0.5;
	this->restrainList["Grass"]["Rock"] = 2;
	this->restrainList["Grass"]["Ghost"] = 1;
	this->restrainList["Grass"]["Dragon"] = 0.5;
	this->restrainList["Grass"]["Dark"] = 1;
	this->restrainList["Grass"]["Steel"] = 0.5;
	this->restrainList["Grass"]["Fairy"] = 1;
	this->restrainList["Grass"][""] = 1;

	this->restrainList["Ice"]["Normal"] = 1;
	this->restrainList["Ice"]["Fire"] = 0.5;
	this->restrainList["Ice"]["Water"] = 0.5;
	this->restrainList["Ice"]["Electric"] = 1;
	this->restrainList["Ice"]["Grass"] = 2;
	this->restrainList["Ice"]["Ice"] = 0.5;
	this->restrainList["Ice"]["Fighting"] = 1;
	this->restrainList["Ice"]["Poison"] = 1;
	this->restrainList["Ice"]["Ground"] = 2;
	this->restrainList["Ice"]["Flying"] = 2;
	this->restrainList["Ice"]["Psychic"] = 1;
	this->restrainList["Ice"]["Bug"] = 1;
	this->restrainList["Ice"]["Rock"] = 1;
	this->restrainList["Ice"]["Ghost"] = 1;
	this->restrainList["Ice"]["Dragon"] = 2;
	this->restrainList["Ice"]["Dark"] = 1;
	this->restrainList["Ice"]["Steel"] = 0.5;
	this->restrainList["Ice"]["Fairy"] = 1;
	this->restrainList["Ice"][""] = 1;

	this->restrainList["Fighting"]["Normal"] = 2;
	this->restrainList["Fighting"]["Fire"] = 1;
	this->restrainList["Fighting"]["Water"] = 1;
	this->restrainList["Fighting"]["Electric"] = 1;
	this->restrainList["Fighting"]["Grass"] = 1;
	this->restrainList["Fighting"]["Ice"] = 2;
	this->restrainList["Fighting"]["Fighting"] = 1;
	this->restrainList["Fighting"]["Poison"] = 0.5;
	this->restrainList["Fighting"]["Ground"] = 1;
	this->restrainList["Fighting"]["Flying"] = 0.5;
	this->restrainList["Fighting"]["Psychic"] = 0.5;
	this->restrainList["Fighting"]["Bug"] = 0.5;
	this->restrainList["Fighting"]["Rock"] = 2;
	this->restrainList["Fighting"]["Ghost"] = 0;
	this->restrainList["Fighting"]["Dragon"] = 1;
	this->restrainList["Fighting"]["Dark"] = 2;
	this->restrainList["Fighting"]["Steel"] = 2;
	this->restrainList["Fighting"]["Fairy"] = 0.5;
	this->restrainList["Fighting"][""] = 1;

	this->restrainList["Poison"]["Normal"] = 1;
	this->restrainList["Poison"]["Fire"] = 1;
	this->restrainList["Poison"]["Water"] = 1;
	this->restrainList["Poison"]["Electric"] = 1;
	this->restrainList["Poison"]["Grass"] = 2;
	this->restrainList["Poison"]["Ice"] = 1;
	this->restrainList["Poison"]["Fighting"] = 1;
	this->restrainList["Poison"]["Poison"] = 0.5;
	this->restrainList["Poison"]["Ground"] = 0.5;
	this->restrainList["Poison"]["Flying"] = 1;
	this->restrainList["Poison"]["Psychic"] = 1;
	this->restrainList["Poison"]["Bug"] = 1;
	this->restrainList["Poison"]["Rock"] = 0.5;
	this->restrainList["Poison"]["Ghost"] = 0.5;
	this->restrainList["Poison"]["Dragon"] = 1;
	this->restrainList["Poison"]["Dark"] = 1;
	this->restrainList["Poison"]["Steel"] = 0;
	this->restrainList["Poison"]["Fairy"] = 2;
	this->restrainList["Poison"][""] = 1;

	this->restrainList["Ground"]["Normal"] = 1;
	this->restrainList["Ground"]["Fire"] = 2;
	this->restrainList["Ground"]["Water"] = 1;
	this->restrainList["Ground"]["Electric"] = 2;
	this->restrainList["Ground"]["Grass"] = 0.5;
	this->restrainList["Ground"]["Ice"] = 1;
	this->restrainList["Ground"]["Fighting"] = 1;
	this->restrainList["Ground"]["Poison"] = 2;
	this->restrainList["Ground"]["Ground"] = 1;
	this->restrainList["Ground"]["Flying"] = 0;
	this->restrainList["Ground"]["Psychic"] = 1;
	this->restrainList["Ground"]["Bug"] = 0.5;
	this->restrainList["Ground"]["Rock"] = 2;
	this->restrainList["Ground"]["Ghost"] = 1;
	this->restrainList["Ground"]["Dragon"] = 1;
	this->restrainList["Ground"]["Dark"] = 1;
	this->restrainList["Ground"]["Steel"] = 2;
	this->restrainList["Ground"]["Fairy"] = 1;
	this->restrainList["Ground"][""] = 1;

	this->restrainList["Flying"]["Normal"] = 1;
	this->restrainList["Flying"]["Fire"] = 1;
	this->restrainList["Flying"]["Water"] = 1;
	this->restrainList["Flying"]["Electric"] = 0.5;
	this->restrainList["Flying"]["Grass"] = 2;
	this->restrainList["Flying"]["Ice"] = 1;
	this->restrainList["Flying"]["Fighting"] = 2;
	this->restrainList["Flying"]["Poison"] = 1;
	this->restrainList["Flying"]["Ground"] = 1;
	this->restrainList["Flying"]["Flying"] = 1;
	this->restrainList["Flying"]["Psychic"] = 1;
	this->restrainList["Flying"]["Bug"] = 2;
	this->restrainList["Flying"]["Rock"] = 0.5;
	this->restrainList["Flying"]["Ghost"] = 1;
	this->restrainList["Flying"]["Dragon"] = 1;
	this->restrainList["Flying"]["Dark"] = 1;
	this->restrainList["Flying"]["Steel"] = 0.5;
	this->restrainList["Flying"]["Fairy"] = 1;
	this->restrainList["Flying"][""] = 1;

	this->restrainList["Psychic"]["Normal"] = 1;
	this->restrainList["Psychic"]["Fire"] = 1;
	this->restrainList["Psychic"]["Water"] = 1;
	this->restrainList["Psychic"]["Electric"] = 1;
	this->restrainList["Psychic"]["Grass"] = 1;
	this->restrainList["Psychic"]["Ice"] = 1;
	this->restrainList["Psychic"]["Fighting"] = 2;
	this->restrainList["Psychic"]["Poison"] = 2;
	this->restrainList["Psychic"]["Ground"] = 1;
	this->restrainList["Psychic"]["Flying"] = 1;
	this->restrainList["Psychic"]["Psychic"] = 0.5;
	this->restrainList["Psychic"]["Bug"] = 1;
	this->restrainList["Psychic"]["Rock"] = 1;
	this->restrainList["Psychic"]["Ghost"] = 1;
	this->restrainList["Psychic"]["Dragon"] = 1;
	this->restrainList["Psychic"]["Dark"] = 0;
	this->restrainList["Psychic"]["Steel"] = 0.5;
	this->restrainList["Psychic"]["Fairy"] = 1;
	this->restrainList["Psychic"][""] = 1;

	this->restrainList["Bug"]["Normal"] = 1;
	this->restrainList["Bug"]["Fire"] = 0.5;
	this->restrainList["Bug"]["Water"] = 1;
	this->restrainList["Bug"]["Electric"] = 1;
	this->restrainList["Bug"]["Grass"] = 2;
	this->restrainList["Bug"]["Ice"] = 1;
	this->restrainList["Bug"]["Fighting"] = 0.5;
	this->restrainList["Bug"]["Poison"] = 0.5;
	this->restrainList["Bug"]["Ground"] = 1;
	this->restrainList["Bug"]["Flying"] = 0.5;
	this->restrainList["Bug"]["Psychic"] = 2;
	this->restrainList["Bug"]["Bug"] = 1;
	this->restrainList["Bug"]["Rock"] = 1;
	this->restrainList["Bug"]["Ghost"] = 0.5;
	this->restrainList["Bug"]["Dragon"] = 1;
	this->restrainList["Bug"]["Dark"] = 2;
	this->restrainList["Bug"]["Steel"] = 0.5;
	this->restrainList["Bug"]["Fairy"] = 0.5;
	this->restrainList["Bug"][""] = 1;

	this->restrainList["Rock"]["Normal"] = 1;
	this->restrainList["Rock"]["Fire"] = 2;
	this->restrainList["Rock"]["Water"] = 1;
	this->restrainList["Rock"]["Electric"] = 1;
	this->restrainList["Rock"]["Grass"] = 1;
	this->restrainList["Rock"]["Ice"] = 2;
	this->restrainList["Rock"]["Fighting"] = 0.5;
	this->restrainList["Rock"]["Poison"] = 1;
	this->restrainList["Rock"]["Ground"] = 0.5;
	this->restrainList["Rock"]["Flying"] = 2;
	this->restrainList["Rock"]["Psychic"] = 1;
	this->restrainList["Rock"]["Bug"] = 2;
	this->restrainList["Rock"]["Rock"] = 1;
	this->restrainList["Rock"]["Ghost"] = 1;
	this->restrainList["Rock"]["Dragon"] = 1;
	this->restrainList["Rock"]["Dark"] = 1;
	this->restrainList["Rock"]["Steel"] = 0.5;
	this->restrainList["Rock"]["Fairy"] = 1;
	this->restrainList["Rock"][""] = 1;

	this->restrainList["Ghost"]["Normal"] = 0;
	this->restrainList["Ghost"]["Fire"] = 1;
	this->restrainList["Ghost"]["Water"] = 1;
	this->restrainList["Ghost"]["Electric"] = 1;
	this->restrainList["Ghost"]["Grass"] = 1;
	this->restrainList["Ghost"]["Ice"] = 1;
	this->restrainList["Ghost"]["Fighting"] = 1;
	this->restrainList["Ghost"]["Poison"] = 1;
	this->restrainList["Ghost"]["Ground"] = 1;
	this->restrainList["Ghost"]["Flying"] = 1;
	this->restrainList["Ghost"]["Psychic"] = 2;
	this->restrainList["Ghost"]["Bug"] = 1;
	this->restrainList["Ghost"]["Rock"] = 1;
	this->restrainList["Ghost"]["Ghost"] = 2;
	this->restrainList["Ghost"]["Dragon"] = 1;
	this->restrainList["Ghost"]["Dark"] = 0.5;
	this->restrainList["Ghost"]["Steel"] = 1;
	this->restrainList["Ghost"]["Fairy"] = 1;
	this->restrainList["Ghost"][""] = 1;

	this->restrainList["Dragon"]["Normal"] = 1;
	this->restrainList["Dragon"]["Fire"] = 1;
	this->restrainList["Dragon"]["Water"] = 1;
	this->restrainList["Dragon"]["Electric"] = 1;
	this->restrainList["Dragon"]["Grass"] = 1;
	this->restrainList["Dragon"]["Ice"] = 1;
	this->restrainList["Dragon"]["Fighting"] = 1;
	this->restrainList["Dragon"]["Poison"] = 1;
	this->restrainList["Dragon"]["Ground"] = 1;
	this->restrainList["Dragon"]["Flying"] = 1;
	this->restrainList["Dragon"]["Psychic"] = 1;
	this->restrainList["Dragon"]["Bug"] = 1;
	this->restrainList["Dragon"]["Rock"] = 1;
	this->restrainList["Dragon"]["Ghost"] = 1;
	this->restrainList["Dragon"]["Dragon"] = 2;
	this->restrainList["Dragon"]["Dark"] = 1;
	this->restrainList["Dragon"]["Steel"] = 0.5;
	this->restrainList["Dragon"]["Fairy"] = 0;
	this->restrainList["Dragon"][""] = 1;

	this->restrainList["Dark"]["Normal"] = 1;
	this->restrainList["Dark"]["Fire"] = 1;
	this->restrainList["Dark"]["Water"] = 1;
	this->restrainList["Dark"]["Electric"] = 1;
	this->restrainList["Dark"]["Grass"] = 1;
	this->restrainList["Dark"]["Ice"] = 1;
	this->restrainList["Dark"]["Fighting"] = 0.5;
	this->restrainList["Dark"]["Poison"] = 1;
	this->restrainList["Dark"]["Ground"] = 1;
	this->restrainList["Dark"]["Flying"] = 1;
	this->restrainList["Dark"]["Psychic"] = 2;
	this->restrainList["Dark"]["Bug"] = 1;
	this->restrainList["Dark"]["Rock"] = 1;
	this->restrainList["Dark"]["Ghost"] = 2;
	this->restrainList["Dark"]["Dragon"] = 1;
	this->restrainList["Dark"]["Dark"] = 0.5;
	this->restrainList["Dark"]["Steel"] = 1;
	this->restrainList["Dark"]["Fairy"] = 0.5;
	this->restrainList["Dark"][""] = 1;

	this->restrainList["Steel"]["Normal"] = 1;
	this->restrainList["Steel"]["Fire"] = 0.5;
	this->restrainList["Steel"]["Water"] = 0.5;
	this->restrainList["Steel"]["Electric"] = 0.5;
	this->restrainList["Steel"]["Grass"] = 1;
	this->restrainList["Steel"]["Ice"] = 2;
	this->restrainList["Steel"]["Fighting"] = 1;
	this->restrainList["Steel"]["Poison"] = 1;
	this->restrainList["Steel"]["Ground"] = 1;
	this->restrainList["Steel"]["Flying"] = 1;
	this->restrainList["Steel"]["Psychic"] = 1;
	this->restrainList["Steel"]["Bug"] = 1;
	this->restrainList["Steel"]["Rock"] = 2;
	this->restrainList["Steel"]["Ghost"] = 1;
	this->restrainList["Steel"]["Dragon"] = 1;
	this->restrainList["Steel"]["Dark"] = 1;
	this->restrainList["Steel"]["Steel"] = 0.5;
	this->restrainList["Steel"]["Fairy"] = 2;
	this->restrainList["Steel"][""] = 1;

	this->restrainList["Fairy"]["Normal"] = 1;
	this->restrainList["Fairy"]["Fire"] = 0.5;
	this->restrainList["Fairy"]["Water"] = 1;
	this->restrainList["Fairy"]["Electric"] = 1;
	this->restrainList["Fairy"]["Grass"] = 1;
	this->restrainList["Fairy"]["Ice"] = 1;
	this->restrainList["Fairy"]["Fighting"] = 2;
	this->restrainList["Fairy"]["Poison"] = 0.5;
	this->restrainList["Fairy"]["Ground"] = 1;
	this->restrainList["Fairy"]["Flying"] = 1;
	this->restrainList["Fairy"]["Psychic"] = 1;
	this->restrainList["Fairy"]["Bug"] = 1;
	this->restrainList["Fairy"]["Rock"] = 1;
	this->restrainList["Fairy"]["Ghost"] = 1;
	this->restrainList["Fairy"]["Dragon"] = 2;
	this->restrainList["Fairy"]["Dark"] = 2;
	this->restrainList["Fairy"]["Steel"] = 0.5;
	this->restrainList["Fairy"]["Fairy"] = 1;
	this->restrainList["Fairy"][""] = 1;

	this->gameState = "StandBy";
	this->gameMode = "Normal";
	this->turn = 0;
}

// Intent: Initialize the Dame data.
// Pre: None.
// Post: The game data will be initialize to specific staus.
void Game::initialize()
{
	this->gameState = "StandBy";
	this->gameMode = "Normal";
	this->turn = 0;
}

// Intent: Let user choose game mode.
// Pre: None.
// Post: Execute the corresponding mode.
void Game::selectMode()
{
	char input = ' ';
	while (1)
	{
		cout << "Press 1 to Test Mode" << endl;
		cout << "Press 2 to Normal Mode" << endl;
		cout << "Press 3 to Load File" << endl;
		if (input != ' ')
		{
			cout << "Error Input! Please Enter Again!" << endl;
		}
		input = _getwch();
		if (input == '1')
		{
			this->gameMode = "Test";
			commandInput();
			break;
		}
		else if (input == '2')
		{
			this->gameMode = "Normal";
			commandInput();
			break;
		}
		else if (input == '3')
		{
			loadFile();
			break;
		}
		system("CLS");
	}
}
//Intent: Show current turns.
// Pre: None.
// Post: Show current turns.
void Game::printTurn()
{
	// marked
	cout << "Turn " << this->turn + 1 << endl;
}

//Intent: Calculate the damage cause by the pokemon.
// Pre: Two pokemon class named move and target, and a skill clasee named use.
// Post: Return the damage cause by the pokemon.
int Game::countDamage(Pokemon move, Pokemon target, Skill use)
{
	int damage = 0;
	float criticalHit = 1.0;

	float test1 = float(move.getAtk()) / target.getDef();
	float test2 = float(move.getSpAtk()) / target.getSpDef();

	//Check skill is physical, special or status, damage calculation differs for different damage categories
	if (use.getAtkType() == "Physical")
	{
		//Test mode, Will not happen critical, and skill always can hit the target
		if (this->gameMode == "Test")
		{
			if (move.getType1() == use.getSkillType() || move.getType2() == use.getSkillType())
			{
				damage = int(((2 * move.getLevel() + 10) / 250.0) * use.getPower() * (float(move.getAtk()) / target.getDef()) + 2) * 1.0 * 1.5 * this->restrainList[use.getSkillType()][target.getType1()] * this->restrainList[use.getSkillType()][target.getType2()];
			}
			else
			{
				damage = int(((2 * move.getLevel() + 10) / 250.0) * use.getPower() * (float(move.getAtk()) / target.getDef()) + 2) * 1.0 * 1.0 * this->restrainList[use.getSkillType()][target.getType1()] * this->restrainList[use.getSkillType()][target.getType2()];
			}
		}
		//Normal mode, skills do not always hit the target, and it may happen critical hit
		else if (this->gameMode == "Normal")
		{
			criticalHit = 1.0;
			//There is a chance of critical hit 
			if (rand() % 24 == 0)
			{
				criticalHit = 1.5;
			}
			//Skill may not hit the target
			if (rand() % 100 + 1 < 100 - use.getAccuracy())
			{
				hit = false;
			}
			//If hit the target, calculate the damage
			else
			{
				if (move.getType1() == use.getSkillType() || move.getType2() == use.getSkillType())
				{
					damage = int(((2 * move.getLevel() + 10) / 250.0) * use.getPower() * (float(move.getSpAtk()) / target.getSpDef()) + 2) * criticalHit * 1.5 * this->restrainList[use.getSkillType()][target.getType1()] * this->restrainList[use.getSkillType()][target.getType2()];
				}
				else
				{
					damage = int(((2 * move.getLevel() + 10) / 250.0) * use.getPower() * (float(move.getSpAtk()) / target.getSpDef()) + 2) * criticalHit * 1.0 * this->restrainList[use.getSkillType()][target.getType1()] * this->restrainList[use.getSkillType()][target.getType2()];
				}
				hit = true;
			}
		}
	}
	//If the skill categories is special, use this formula to calculate the damage
	else if (use.getAtkType() == "Special")
	{
		//Test mode, Will not happen critical, and skill always can hit the target
		if (this->gameMode == "Test")
		{
			if (move.getType1() == use.getSkillType() || move.getType2() == use.getSkillType())
			{
				damage = int(((2 * move.getLevel() + 10) / 250.0) * use.getPower() * (float(move.getSpAtk()) / target.getSpDef()) + 2) * 1.0 * 1.5 * this->restrainList[use.getSkillType()][target.getType1()] * this->restrainList[use.getSkillType()][target.getType2()];
			}
			else
			{
				damage = int(((2 * move.getLevel() + 10) / 250.0) * use.getPower() * (float(move.getSpAtk()) / target.getSpDef()) + 2) * 1.0 * 1.0 * this->restrainList[use.getSkillType()][target.getType1()] * this->restrainList[use.getSkillType()][target.getType2()];
			}
		}
		//Normal mode, skills do not always hit the target, and it may happen critical hit
		else if (this->gameMode == "Normal")
		{
			criticalHit = 1.0;
			//There is a chance of critical hit 
			if (rand() % 24 == 0)
			{
				criticalHit = 1.5;
			}
			//Skill may not hit the target
			if (rand() % 100 + 1 < 100 - use.getAccuracy())
			{
				hit = false;
			}
			//If hit the target, calculate the damage
			else
			{
				if (move.getType1() == use.getSkillType() || move.getType2() == use.getSkillType())
				{
					damage = int(((2 * move.getLevel() + 10) / 250.0) * use.getPower() * (float(move.getSpAtk()) / target.getSpDef()) + 2) * criticalHit * 1.5 * this->restrainList[use.getSkillType()][target.getType1()] * this->restrainList[use.getSkillType()][target.getType2()];
				}
				else
				{
					damage = int(((2 * move.getLevel() + 10) / 250.0) * use.getPower() * (float(move.getSpAtk()) / target.getSpDef()) + 2) * criticalHit * 1.0 * this->restrainList[use.getSkillType()][target.getType1()] * this->restrainList[use.getSkillType()][target.getType2()];
				}
				hit = true;
			}
		}
	}
	//If the skill categories is status, the damage always be 0
	else if (use.getAtkType() == "Status")
	{
		damage = 0;
		//Normal mode, skill may not hit the target
		if (this->gameMode == "Normal")
		{
			if (rand() % 100 + 1 < 100 - use.getAccuracy())
			{
				hit = false;
			}
			else
			{
				hit = true;
			}
		}
	}
	//Calculate the final damage cause by this pokemon
	int finalDamage = damage;

	//If skill hit the target, show which pokemon are using which skills and the damage caused and how effective the skill are 
	if (hit)
	{
		// marked
		cout << move.getName() << " used " << use.getName() << " to make " << finalDamage << " on " << target.getName() << "!" << endl;

		if (use.getAtkType() != "Status")
		{
			// marked
			if (this->restrainList[use.getSkillType()][target.getType1()] * this->restrainList[use.getSkillType()][target.getType2()] <= 0.5)
			{
				cout << "It's not very effective..." << endl;
			}
			else if (this->restrainList[use.getSkillType()][target.getType1()] * this->restrainList[use.getSkillType()][target.getType2()] == 1)
			{
				cout << "It's normally effective!" << endl;
			}
			else
			{
				cout << "It's super effective!" << endl;
			}
			if (criticalHit == 1.5)
			{
				cout << "A critical hit!" << endl;
			}
		}


	}
	//If not hit, shows which pokemon is using which skill and the target is avoiding the attack
	else
	{
		// marked
		cout << move.getName() << " used " << use.getName() << ".\n" << target.getName() << " avoided the attack!" << endl;
	}

	//Return the damage cause by pokemon after calculate
	return finalDamage;
}

//Intent: If the pokemon's skill have negative effect, than handle the negative effect cause by the pokemon.
// Pre: Two pokemon class named move and target, and a skill clasee named use.
// Post: If cause a negative effect, Show what the negative effect on the opponent's Pokemon.
void Game::handleNegativeEffect(Pokemon& player, Pokemon& target, string skill, bool& targetPAR)
{
	//If the pokemon use a skill that may cause negative effect, deal with the status of the target
	if (player.getSkill(skill).getNegativeEffect() != "" && hit)
	{
		//Test mode, whenever a skill has the potential to cause a negative effect, it must have a negative effect on the target.
		if (this->gameMode == "Test")
		{
			//Use for loop to check if the target already has this negative effect
			bool haveThisNegativeEffect = false;
			for (int i = 0; i < target.getNegativeEffect().size(); i++)
			{
				if (player.getSkill(skill).getNegativeEffect() == target.getNegativeEffect()[i])
				{
					haveThisNegativeEffect = true;
					break;
				}
			}
			//If the target does not have this negative effect, add this negative effect and show which negative effect the target has
			if (!haveThisNegativeEffect)
			{
				target.setNegativeEffect(player.getSkill(skill).getNegativeEffect());
				if (player.getSkill(skill).getNegativeEffect() == "PSN")
				{
					cout << target.getName() << " was poisoned!" << endl;
				}
				else if (player.getSkill(skill).getNegativeEffect() == "BRN")
				{
					cout << target.getName() << " was burned!" << endl;
				}
				else
				{
					target.setSpeed(target.getSpeed() * 0.5); //If the negative effect is paralysis, the speed of the target will be reduced by half
					cout << target.getName() << " is paralyzed,so it may be unable to move!" << endl;
					targetPAR = true;
				}
			}
		}
		//Normal mode, skills have only a half chance of having a negative effect on the target
		else if (this->gameMode == "Normal")
		{
			if (rand() % 100 + 1 > 50)
			{
				//Use for loop to check if the target already has this negative effect
				bool haveThisNegativeEffect = false;
				for (int i = 0; i < target.getNegativeEffect().size(); i++)
				{
					if (player.getSkill(skill).getNegativeEffect() == target.getNegativeEffect()[i])
					{
						haveThisNegativeEffect = true;
						break;
					}
				}
				//If the target does not have this negative effect, add this negative effect and show which negative effect the target has
				if (!haveThisNegativeEffect)
				{
					target.setNegativeEffect(player.getSkill(skill).getNegativeEffect());
					if (player.getSkill(skill).getNegativeEffect() == "PSN")
					{
						cout << target.getName() << " was poisoned!" << endl;
					}
					else if (player.getSkill(skill).getNegativeEffect() == "BRN")
					{
						cout << target.getName() << " was burned!" << endl;
					}
					else
					{
						target.setSpeed(target.getSpeed() * 0.5); //If the negative effect is paralysis, the speed of the target will be reduced by half
						cout << target.getName() << " is paralyzed,so it may be unable to move!" << endl;
						targetPAR = true;
					}
				}
			}
		}
	}
}

//Intent: Handle the file that user input.
// Pre: None.
// Post: Show the result after excute the file.
void Game::loadFile()
{
	//Clear screen
	system("CLS");
	//Set random seed
	srand(time(0));

	//Enter the name of the file to be read
	string firstFile;
	cout << "Please Enter Your File Name:";
	cin >> firstFile;

	//Clear screen
	system("CLS");

	string pokemonLibName, moveLibName, gameDataName;
	ifstream file;
	//Open the file to be read
	file.open(firstFile);
	//Get the file name of pokemon library,skill library and game data
	file >> pokemonLibName >> moveLibName >> gameDataName;
	ifstream pokemonLib;
	ifstream moveLib;
	ifstream gameData;
	////Open the file of pokemon library, skill library and game data
	pokemonLib.open(pokemonLibName);
	moveLib.open(moveLibName);
	gameData.open(gameDataName);
	string pokemonType1, pokemonType2, pokemonName;
	int hp, atk, def, spAtk, spDef, speed, typeNum;
	//Use for loop to get the pokemon data
	for (int i = 0; i < 3; i++)
	{
		Pokemon inputPokemon;
		pokemonLib >> pokemonName >> typeNum;

		//Get the pokemon' name
		inputPokemon.setName(pokemonName);
		//Get the pokemon's type
		if (typeNum == 1)
		{
			pokemonLib >> pokemonType1;
			inputPokemon.setType1(pokemonType1);
		}
		else if (typeNum == 2)
		{
			pokemonLib >> pokemonType1 >> pokemonType2;
			inputPokemon.setType1(pokemonType1);
			inputPokemon.setType2(pokemonType2);
		}
		//Get the each value of the pokemon
		pokemonLib >> hp >> atk >> def >> spAtk >> spDef >> speed;
		inputPokemon.setHPLimit(hp);
		inputPokemon.setHP(hp);
		inputPokemon.setAtk(atk);
		inputPokemon.setDef(def);
		inputPokemon.setSpAtk(spAtk);
		inputPokemon.setSpDef(spDef);
		inputPokemon.setSpeed(speed);
		//Add the pokemon to player and opponent' pokemon bag
		this->myself.addPokemon(inputPokemon);
		this->opponent.addPokemon(inputPokemon);
	}
	int myselfPokemonNum, myselfSkillNum, opponentPokemonNum, opponentSkillNum;
	string skillName;
	Skill tempSkill;
	//Get the number of the player pokemon
	gameData >> myselfPokemonNum;
	//Use for loop to get the pokemon's name and set the skills of the player pokemon
	for (int i = 0; i < myselfPokemonNum; i++)
	{
		//Get the name and skill number of this pokemon
		gameData >> pokemonName >> myselfSkillNum;
		if (this->myself.pokemonList[i].getName() != pokemonName)
		{
			//Set the order of appearance of player pokemon, but after the game starts, players can freely decide the order of appearance of Pokemon
			for (int j = 0; j < myselfPokemonNum; j++)
			{
				if (this->myself.pokemonList[j].getName() == pokemonName)
				{
					swap(this->myself.pokemonList[i], this->myself.pokemonList[j]);
				}
			}
		}
		//Use for loop to get and set the skills of pokemon
		for (int k = 0; k < myselfSkillNum; k++)
		{
			gameData >> skillName;
			tempSkill.setName(skillName);
			for (int n = 0; n < this->myself.pokemonList.size(); n++)
			{
				if (this->myself.pokemonList[n].getName() == pokemonName)
				{
					this->myself.pokemonList[n].setSkillList(tempSkill);
				}
			}
		}
	}
	//Get the number of opponent pokemon
	gameData >> opponentPokemonNum;
	////Use for loop to get the pokemon's name and set the skills of the opponent pokemon
	for (int i = 0; i < opponentPokemonNum; i++)
	{
		//Get the name and skill number of this pokemon
		gameData >> pokemonName >> opponentSkillNum;
		if (this->opponent.pokemonList[i].getName() != pokemonName)
		{
			//Set the order of appearance of opponent pokemon
			for (int j = 0; j < opponentPokemonNum; j++)
			{
				if (this->opponent.pokemonList[j].getName() == pokemonName)
				{
					swap(this->opponent.pokemonList[i], this->opponent.pokemonList[j]);
				}
			}
		}
		//Use for loop to get and set the skills of pokemon
		for (int k = 0; k < opponentSkillNum; k++)
		{
			gameData >> skillName;
			tempSkill.setName(skillName);
			for (int n = 0; n < this->opponent.pokemonList.size(); n++)
			{
				if (this->opponent.pokemonList[n].getName() == pokemonName)
				{
					this->opponent.pokemonList[n].setSkillList(tempSkill);
				}
			}
		}
	}
	Skill inputSkill;
	string skillType, atkType, negativeEffect;
	int power, pp, accuracy;
	//Record details of these skills
	while (moveLib >> skillName)
	{
		moveLib >> skillType >> atkType >> power >> accuracy >> pp;
		inputSkill.setName(skillName);
		inputSkill.setSkillType(skillType);
		inputSkill.setAtkType(atkType);
		inputSkill.setPower(power);
		inputSkill.setAccuracy(accuracy);
		inputSkill.setPP(pp);
		//Set the possible negative effects of this skill
		if (moveLib.peek() != '\n')
		{
			moveLib >> negativeEffect;
			inputSkill.setNegativeEffect(negativeEffect);
		}
		else
		{
			inputSkill.setNegativeEffect("");
		}
		//Update the detials of player and opponent's pokemon
		for (int i = 0; i < myselfPokemonNum; i++)
		{
			this->myself.pokemonList[i].setSkill(inputSkill);
		}
		for (int i = 0; i < opponentPokemonNum; i++)
		{
			this->opponent.pokemonList[i].setSkill(inputSkill);
		}
	}
	string mode, select, ownSkill, enemySkill, potion, targetPokemon, changePokemon;
	file >> mode;
	this->gameMode = mode;
	int myDamage = 0, enemyDamage = 0;
	//While loop to load the flow of the game
	while (file >> select)
	{
		bool myPokemonPAR = false, opponentPokemonPAR = false;

		//Show turns
		printTurn();

		//If user choose Battle
		if (select == "Battle")
		{
			//Obtain skills used by players and opponent
			file >> ownSkill >> enemySkill;

			//Pokemon using skills
			this->myself.pokemonList[0].useSkill(ownSkill);
			this->opponent.pokemonList[0].useSkill(enemySkill);

			//Check player and opponent's pokemon is paralyzed or not
			for (int i = 0; i < this->myself.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->myself.pokemonList[0].getNegativeEffect()[i] == "PAR")
				{
					myPokemonPAR = true;
					break;
				}
			}
			for (int i = 0; i < this->opponent.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->opponent.pokemonList[0].getNegativeEffect()[i] == "PAR")
				{
					myPokemonPAR = true;
					break;
				}
			}

			//player move first
			if (this->myself.pokemonList[0].getSpeed() >= this->opponent.pokemonList[0].getSpeed())
			{
				//If player's pokemon isn't be paralyzed, than it can use skill, else show a message to remind players that their pokemon cannot be moved 
				if (!myPokemonPAR)
				{
					//Calculate the damage cause by player's pokemon
					myDamage = countDamage(this->myself.pokemonList[0], this->opponent.pokemonList[0], this->myself.pokemonList[0].getSkill(ownSkill));

					//Set the HP of opponent's pokemon
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - myDamage);

					//Handle the negative effect of opponent's pokemon if player's pokemon use the skill may cause negative effect
					handleNegativeEffect(this->myself.pokemonList[0], this->opponent.pokemonList[0], ownSkill, opponentPokemonPAR);
				}
				else
				{
					cout << this->myself.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
				}

				//If opponent's pokemon still alive after player's pokemon move, than it can move, else show a message to remind opponent that their pokemon is die and change to next pokemon
				if (this->opponent.pokemonList[0].getHP() > 0)
				{
					//If opponent's pokemon isn't be paralyzed, than it can use skill, else show a message to remind opponent that their pokemon cannot be moved
					if (!opponentPokemonPAR)
					{
						//Calculate the damage cause by opponent's pokemon
						enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
						this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);

						//Handle the negative effect of player's pokemon if opponent's pokemon use the skill may cause negative effect
						handleNegativeEffect(this->opponent.pokemonList[0], this->myself.pokemonList[0], enemySkill, myPokemonPAR);
					}
					else
					{
						cout << this->opponent.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
					}
				}
				//If opponent's pokemon is died, show a message and change to next pokemon
				else
				{
					cout << this->opponent.pokemonList[0].getName() << " is fainted!" << endl;

					//Change to next pokemon, if no pokemon to change, opponent lose
					if (this->opponent.pokemonList[1].getHP() > 0)
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[1]);
					}
					else if (this->opponent.pokemonList[2].getHP() > 0)
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[2]);
					}
					else
					{
						cout << "Opponent Lose!" << endl;
						system("Pause");
						break;
					}
				}
			}
			//opponent move first
			else
			{
				//If opponent's pokemon isn't be paralyzed
				if (!opponentPokemonPAR)
				{
					//Calculate the damage cause by opponent's pokemon
					enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);

					//Handle player's negative effect
					handleNegativeEffect(this->opponent.pokemonList[0], this->myself.pokemonList[0], enemySkill, myPokemonPAR);
				}
				else
				{
					cout << this->opponent.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
				}

				//If player's pokemon still alive after opponent's pokemon move, than it can move
				if (this->myself.pokemonList[0].getHP() > 0)
				{
					//If player's pokemon isn't be paralyzed, than it can use skill, else show a message to remind player that their pokemon cannot be moved
					if (!myPokemonPAR)
					{
						//Calculate the damage cause by player's pokemon
						myDamage = countDamage(this->myself.pokemonList[0], this->opponent.pokemonList[0], this->myself.pokemonList[0].getSkill(ownSkill));
						this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - myDamage);

						//Handle opponent's negative effect
						handleNegativeEffect(this->myself.pokemonList[0], this->opponent.pokemonList[0], ownSkill, opponentPokemonPAR);
					}
					else
					{
						cout << this->myself.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
					}
				}
				//If player's pokemon is died, show a message and let player change the pokemon, if no pokemon can play, player lose
				else
				{
					if (checkAllPlayerPokemon())
					{
						cout << "Your Pokemon Die! Please open your pokemon bag to choose a new one!" << endl;
						file >> changePokemon;
						for (int i = 1; i < this->myself.pokemonList.size(); i++)
						{
							if (changePokemon == this->myself.pokemonList[i].getName() && this->myself.pokemonList[i].getHP() > 0)
							{
								swap(this->myself.pokemonList[0], this->myself.pokemonList[i]);
								cout << "Go!" << this->myself.pokemonList[0].getName() << "!" << endl;
								break;
							}
						}
					}
					else
					{
						cout << "You lose!" << endl;
						system("Pause");
						break;
					}
				}
			}

			//If player's pokemon has negative effect, show notice message and some HP is deducted
			for (int i = 0; i < this->myself.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->myself.pokemonList[0].getNegativeEffect()[i] == "PSN")
				{
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - this->myself.pokemonList[0].getHPLimit() / 16);
					cout << this->myself.pokemonList[0].getName() << " is hurt by its poisoning!" << endl;
				}
				else if (this->myself.pokemonList[0].getNegativeEffect()[i] == "BRN")
				{
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - this->myself.pokemonList[0].getHPLimit() / 16);
					cout << this->myself.pokemonList[0].getName() << " is hurt by its burn!" << endl;
				}
			}

			//If opponent's pokemon has negative effect, show notice message and some HP is deducted
			for (int i = 0; i < this->opponent.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->opponent.pokemonList[0].getNegativeEffect()[i] == "PSN")
				{
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - this->opponent.pokemonList[0].getHPLimit() / 16);
					cout << this->opponent.pokemonList[0].getName() << " is hurt by its poisoning!" << endl;
				}
				else if (this->opponent.pokemonList[0].getNegativeEffect()[i] == "BRN")
				{
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - this->opponent.pokemonList[0].getHPLimit() / 16);
					cout << this->opponent.pokemonList[0].getName() << " is hurt by its burn!" << endl;
				}
			}

			//Check if the opponent's Pokémon is dead, if it is, the next Pokémon will be replaced, if no Pokémon is available, the player will win.
			if (this->opponent.pokemonList[0].getHP() <= 0)
			{
				cout << this->opponent.pokemonList[0].getName() << " is fainted!" << endl;
				if (checkAllOpponentPokemon())
				{
					if (this->opponent.pokemonList[1].getHP() > 0)
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[1]);
					}
					else
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[2]);
					}
				}
				else
				{
					cout << "Opponent Lose!" << endl;
					system("Pause");
					break;
				}
			}

			//Check if the player's Pokémon is dead, if it is, let the player choose the next Pokémon to play, if no Pokémon can play, the player fails
			if (this->myself.pokemonList[0].getHP() <= 0)
			{
				if (checkAllPlayerPokemon())
				{
					cout << "Your Pokemon Die! Please open your pokemon bag to choose a new one!" << endl;
					file >> changePokemon;
					for (int i = 1; i < this->myself.pokemonList.size(); i++)
					{
						if (changePokemon == this->myself.pokemonList[i].getName() && this->myself.pokemonList[i].getHP() > 0)
						{
							swap(this->myself.pokemonList[0], this->myself.pokemonList[i]);
							cout << "Go!" << this->myself.pokemonList[0].getName() << "!" << endl;
							break;
						}
					}
				}
				else
				{
					cout << "You lose!" << endl;
					system("Pause");
					break;
				}
			}

			//Go to the next turn
			this->turn++;
		}
		//If the player open the bag
		else if (select == "Bag")
		{
			//Select the potion to be used and the Pokemon to be used.
			file >> potion >> targetPokemon;
			cout << "Open Bag" << endl;
			for (int i = 0; i < this->myself.pokemonList.size(); i++)
			{
				if (this->myself.pokemonList[i].getName() == targetPokemon)
				{
					cout << "You used a " << potion << "!" << endl;
					this->myself.pokemonList[i].setHP(this->myBag.usePotion(potion, this->gameMode) + this->myself.pokemonList[i].getHP());
					cout << this->myself.pokemonList[0].getName() << " had its HP restored." << endl;
					break;
				}
			}
			//Get the skill of the opponent's pokemon used
			file >> enemySkill;
			//If opponent's pokemon isn't be paralyzed, than it can use skill, else show a message to remind opponent that their pokemon cannot be moved
			if (!opponentPokemonPAR)
			{
				//Calculate the damage cause by opponent's pokemon
				enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
				this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);

				//Handle the negative effect of player's pokemon if opponent's pokemon use the skill may cause negative effect
				handleNegativeEffect(this->opponent.pokemonList[0], this->myself.pokemonList[0], enemySkill, myPokemonPAR);
			}
			else
			{
				cout << this->opponent.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
			}

			//If player's pokemon has negative effect, show notice message and some HP is deducted
			for (int i = 0; i < this->myself.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->myself.pokemonList[0].getNegativeEffect()[i] == "PSN")
				{
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - this->myself.pokemonList[0].getHPLimit() / 16);
					cout << this->myself.pokemonList[0].getName() << " is hurt by its poisoning!" << endl;
				}
				else if (this->myself.pokemonList[0].getNegativeEffect()[i] == "BRN")
				{
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - this->myself.pokemonList[0].getHPLimit() / 16);
					cout << this->myself.pokemonList[0].getName() << " is hurt by its burn!" << endl;
				}
			}

			//If opponent's pokemon has negative effect, show notice message and some HP is deducted
			for (int i = 0; i < this->opponent.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->opponent.pokemonList[0].getNegativeEffect()[i] == "PSN")
				{
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - this->opponent.pokemonList[0].getHPLimit() / 16);
					cout << this->opponent.pokemonList[0].getName() << " is hurt by its poisoning!" << endl;
				}
				else if (this->opponent.pokemonList[0].getNegativeEffect()[i] == "BRN")
				{
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - this->opponent.pokemonList[0].getHPLimit() / 16);
					cout << this->opponent.pokemonList[0].getName() << " is hurt by its burn!" << endl;
				}
			}

			//Check if the opponent's Pokémon is dead, if it is, the next Pokémon will be replaced, if no Pokémon is available, the player will win.
			if (this->opponent.pokemonList[0].getHP() <= 0)
			{
				cout << this->opponent.pokemonList[0].getName() << " is fainted!" << endl;
				if (checkAllOpponentPokemon())
				{
					if (this->opponent.pokemonList[1].getHP() > 0)
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[1]);
					}
					else
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[2]);
					}
				}
				else
				{
					cout << "Opponent Lose!" << endl;
					system("Pause");
					break;
				}
			}

			//Check if the player's Pokémon is dead, if it is, let the player choose the next Pokémon to play, if no Pokémon can play, the player fails
			if (this->myself.pokemonList[0].getHP() <= 0)
			{
				if (checkAllPlayerPokemon())
				{
					cout << "Your Pokemon Die! Please open your pokemon bag to choose a new one!" << endl;
					file >> changePokemon;
					for (int i = 1; i < this->myself.pokemonList.size(); i++)
					{
						if (changePokemon == this->myself.pokemonList[i].getName() && this->myself.pokemonList[i].getHP() > 0)
						{
							swap(this->myself.pokemonList[0], this->myself.pokemonList[i]);
							cout << "Go!" << this->myself.pokemonList[0].getName() << "!" << endl;
							break;
						}
					}
				}
				else
				{
					cout << "You lose!" << endl;
					system("Pause");
					break;
				}
			}

			//Go to the next turn
			this->turn++;
		}
		else if (select == "Status")
		{
			//Display the name of the player and the opponent's pokemon, the amount of HP and the negative effect
			this->myself.pokemonList[0].printStatus();
			this->opponent.pokemonList[0].printStatus();
			cout << endl;
		}
		else if (select == "Check")
		{
			//Show the skills and number of times a player's pokemon can use
			for (int i = 0; i < this->myself.pokemonList[0].getSkillList().size(); i++)
			{
				cout << this->myself.pokemonList[0].getSkillList()[i].getName() << " " << this->myself.pokemonList[0].getSkillList()[i].getPP() << " ";
			}
			cout << endl;
		}
		//If player choose to change pokemon
		else if (select == "Pokemon")
		{
			//Get the name of the pokemon to be played
			file >> changePokemon;
			//Use for loop to check if the player owns this pokemon
			for (int i = 1; i < this->myself.pokemonList.size(); i++)
			{
				//If the player has this pokemon, then change to this pokemon
				if (this->myself.pokemonList[i].getName() == changePokemon && this->myself.pokemonList[i].getHP() > 0)
				{
					cout << this->myself.pokemonList[0].getName() << ",switch out!\nCome back!\nGo! ";
					swap(this->myself.pokemonList[i], this->myself.pokemonList[0]);
					cout << this->myself.pokemonList[0].getName() << "!" << endl;
				}
			}
			//Get the skill of the opponent's pokemon used
			file >> enemySkill;
			//If opponent's pokemon isn't be paralyzed, than it can use skill, else show a message to remind opponent that their pokemon cannot be moved
			if (!opponentPokemonPAR)
			{
				//Calculate the damage cause by opponent's pokemon
				enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
				this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);

				//Handle the negative effect of player's pokemon if opponent's pokemon use the skill may cause negative effect
				handleNegativeEffect(this->opponent.pokemonList[0], this->myself.pokemonList[0], enemySkill, myPokemonPAR);
			}
			else
			{
				cout << this->opponent.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
			}

			//If player's pokemon has negative effect, show notice message and some HP is deducted
			for (int i = 0; i < this->myself.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->myself.pokemonList[0].getNegativeEffect()[i] == "PSN")
				{
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - this->myself.pokemonList[0].getHPLimit() / 16);
					cout << this->myself.pokemonList[0].getName() << " is hurt by its poisoning!" << endl;
				}
				else if (this->myself.pokemonList[0].getNegativeEffect()[i] == "BRN")
				{
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - this->myself.pokemonList[0].getHPLimit() / 16);
					cout << this->myself.pokemonList[0].getName() << " is hurt by its burn!" << endl;
				}
			}

			//If opponent's pokemon has negative effect, show notice message and some HP is deducted
			for (int i = 0; i < this->opponent.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->opponent.pokemonList[0].getNegativeEffect()[i] == "PSN")
				{
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - this->opponent.pokemonList[0].getHPLimit() / 16);
					cout << this->opponent.pokemonList[0].getName() << " is hurt by its poisoning!" << endl;
				}
				else if (this->opponent.pokemonList[0].getNegativeEffect()[i] == "BRN")
				{
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - this->opponent.pokemonList[0].getHPLimit() / 16);
					cout << this->opponent.pokemonList[0].getName() << " is hurt by its burn!" << endl;
				}
			}

			//Check if the opponent's Pokemon is dead, if it is, the next Pokemon will be replaced, if no Pokemon is available, the player will win.
			if (this->opponent.pokemonList[0].getHP() <= 0)
			{
				cout << this->opponent.pokemonList[0].getName() << " is fainted!" << endl;
				if (checkAllOpponentPokemon())
				{
					if (this->opponent.pokemonList[1].getHP() > 0)
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[1]);
					}
					else
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[2]);
					}
				}
				else
				{
					cout << "Opponent Lose!" << endl;
					system("Pause");
					break;
				}
			}

			//Check if the player's Pokemon is dead, if it is, let the player choose the next Poeémon to play, if no Pokemon can play, the player fails
			if (this->myself.pokemonList[0].getHP() <= 0)
			{
				if (checkAllPlayerPokemon())
				{
					cout << "Your Pokemon Die! Please open your pokemon bag to choose a new one!" << endl;
					file >> changePokemon;
					for (int i = 1; i < this->myself.pokemonList.size(); i++)
					{
						if (changePokemon == this->myself.pokemonList[i].getName() && this->myself.pokemonList[i].getHP() > 0)
						{
							swap(this->myself.pokemonList[0], this->myself.pokemonList[i]);
							cout << "Go!" << this->myself.pokemonList[0].getName() << "!" << endl;
							break;
						}
					}
				}
				else
				{
					cout << "You lose!" << endl;
					system("Pause");
					break;
				}
			}

			//Go to next turn
			this->turn++;
		}
		//If the player chooses to run, the game ends
		else if (select == "Run")
		{
			cout << "Run!" << endl;
			system("Pause");
		}
	}
}

//Intent: Check if opponent has a pokemon to play.
// Pre: None.
// Post: return true if opponent has a pokemon to play, else return false.
bool Game::checkAllOpponentPokemon()
{
	if (this->opponent.pokemonList[1].getHP() > 0)
	{
		return true;
	}
	else if (this->opponent.pokemonList[2].getHP() > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Intent: Check if player has a pokemon to play.
// Pre: None.
// Post: return true if player has a pokemon to play, else return false.
bool Game::checkAllPlayerPokemon()
{
	//for loop to check player has a pokemon to play
	for (int i = 1; i < this->myself.pokemonList.size(); i++)
	{
		if (this->myself.pokemonList[i].getHP() > 0)
		{
			return true;
		}
	}
	return false;
}

void Game::commandInput()
{
	system("CLS");
	srand(time(NULL));
	bool validFile;
	string pokemonLibName = "", moveLibName = "", gameGataName = "";
	ifstream pokemonLib, moveLib, gameData;
	cout << "Please enter the pokemon library, move library and gameData:" << endl;
	do
	{
		validFile = false;
		cin >> pokemonLibName;
		pokemonLib.open(pokemonLibName);
		if (!pokemonLib.is_open())
		{
			cout << "The pokemon library cannot be opened! Please make sure you have entered the correct file name and enter it again." << endl;
		}
		else
		{
			validFile = true;
		}
	} while (!validFile);
	do
	{
		validFile = false;
		cin >> moveLibName;
		moveLib.open(moveLibName);
		if (!moveLib.is_open())
		{
			cout << "The move library cannot be opened! Please make sure you have entered the correct file name and enter it again." << endl;
		}
		else
		{
			validFile = true;
		}
	} while (!validFile);
	do
	{
		validFile = false;
		cin >> gameGataName;
		gameData.open(gameGataName);
		if (!gameData.is_open())
		{
			cout << "The game data cannot be opened! Please make sure you have entered the correct file name and enter it again." << endl;
		}
		else
		{
			validFile = true;
		}
	} while (!validFile);
	system("CLS");
	string pokemonType1, pokemonType2, pokemonName;
	int hp, atk, def, spAtk, spDef, speed, typeNum;
	//Use for loop to get the pokemon data
	for (int i = 0; i < 3; i++)
	{
		Pokemon inputPokemon;
		pokemonLib >> pokemonName >> typeNum;

		//Get the pokemon' name
		inputPokemon.setName(pokemonName);
		//Get the pokemon's type
		if (typeNum == 1)
		{
			pokemonLib >> pokemonType1;
			inputPokemon.setType1(pokemonType1);
		}
		else if (typeNum == 2)
		{
			pokemonLib >> pokemonType1 >> pokemonType2;
			inputPokemon.setType1(pokemonType1);
			inputPokemon.setType2(pokemonType2);
		}
		//Get the each value of the pokemon
		pokemonLib >> hp >> atk >> def >> spAtk >> spDef >> speed;
		inputPokemon.setHPLimit(hp);
		inputPokemon.setHP(hp);
		inputPokemon.setAtk(atk);
		inputPokemon.setDef(def);
		inputPokemon.setSpAtk(spAtk);
		inputPokemon.setSpDef(spDef);
		inputPokemon.setSpeed(speed);
		//Add the pokemon to player and opponent' pokemon bag
		this->myself.addPokemon(inputPokemon);
		this->opponent.addPokemon(inputPokemon);
	}
	int myselfPokemonNum, myselfSkillNum, opponentPokemonNum, opponentSkillNum;
	string skillName;
	Skill tempSkill;
	//Get the number of the player pokemon
	gameData >> myselfPokemonNum;
	//Use for loop to get the pokemon's name and set the skills of the player pokemon
	for (int i = 0; i < myselfPokemonNum; i++)
	{
		//Get the name and skill number of this pokemon
		gameData >> pokemonName >> myselfSkillNum;
		if (this->myself.pokemonList[i].getName() != pokemonName)
		{
			//Set the order of appearance of player pokemon, but after the game starts, players can freely decide the order of appearance of Pokemon
			for (int j = 0; j < myselfPokemonNum; j++)
			{
				if (this->myself.pokemonList[j].getName() == pokemonName)
				{
					swap(this->myself.pokemonList[i], this->myself.pokemonList[j]);
				}
			}
		}
		//Use for loop to get and set the skills of pokemon
		for (int k = 0; k < myselfSkillNum; k++)
		{
			gameData >> skillName;
			tempSkill.setName(skillName);
			for (int n = 0; n < this->myself.pokemonList.size(); n++)
			{
				if (this->myself.pokemonList[n].getName() == pokemonName)
				{
					this->myself.pokemonList[n].setSkillList(tempSkill);
				}
			}
		}
	}
	//Get the number of opponent pokemon
	gameData >> opponentPokemonNum;
	////Use for loop to get the pokemon's name and set the skills of the opponent pokemon
	for (int i = 0; i < opponentPokemonNum; i++)
	{
		//Get the name and skill number of this pokemon
		gameData >> pokemonName >> opponentSkillNum;
		if (this->opponent.pokemonList[i].getName() != pokemonName)
		{
			//Set the order of appearance of opponent pokemon
			for (int j = 0; j < opponentPokemonNum; j++)
			{
				if (this->opponent.pokemonList[j].getName() == pokemonName)
				{
					swap(this->opponent.pokemonList[i], this->opponent.pokemonList[j]);
				}
			}
		}
		//Use for loop to get and set the skills of pokemon
		for (int k = 0; k < opponentSkillNum; k++)
		{
			gameData >> skillName;
			tempSkill.setName(skillName);
			for (int n = 0; n < this->opponent.pokemonList.size(); n++)
			{
				if (this->opponent.pokemonList[n].getName() == pokemonName)
				{
					this->opponent.pokemonList[n].setSkillList(tempSkill);
				}
			}
		}
	}
	Skill inputSkill;
	string skillType, atkType, negativeEffect;
	int power, pp, accuracy;
	//Record details of these skills
	while (moveLib >> skillName)
	{
		moveLib >> skillType >> atkType >> power >> accuracy >> pp;
		inputSkill.setName(skillName);
		inputSkill.setSkillType(skillType);
		inputSkill.setAtkType(atkType);
		inputSkill.setPower(power);
		inputSkill.setAccuracy(accuracy);
		inputSkill.setPP(pp);
		//Set the possible negative effects of this skill
		if (moveLib.peek() != '\n')
		{
			moveLib >> negativeEffect;
			inputSkill.setNegativeEffect(negativeEffect);
		}
		else
		{
			inputSkill.setNegativeEffect("");
		}
		//Update the detials of player and opponent's pokemon
		for (int i = 0; i < myselfPokemonNum; i++)
		{
			this->myself.pokemonList[i].setSkill(inputSkill);
		}
		for (int i = 0; i < opponentPokemonNum; i++)
		{
			this->opponent.pokemonList[i].setSkill(inputSkill);
		}
	}
	string command, ownSkill, enemySkill, potion, targetPokemon, changePokemon;
	int myDamage = 0, enemyDamage = 0;
	cout << "Game Start!!!" << endl;
	cout << "Go!" << this->myself.pokemonList[0].getName() << "!" << endl;
	cout << "Go!" << this->opponent.pokemonList[0].getName() << "!" << endl;
	while (cin >> command)
	{
		bool myPokemonPAR = false, opponentPokemonPAR = false, opponentCanUseSkill = true;

		if (command == "Battle")
		{
			bool currectInput, back = false;
			//Player's pokemon using skills
			do
			{
				currectInput = false;
				cin >> ownSkill;
				if (this->myself.pokemonList[0].useSkill(ownSkill))
				{
					currectInput = true;
				}
				else if (ownSkill == "Back")
				{
					back = true;
					break;
				}
				else
				{
					cout << "Your pokemon does not have this skill, please re-enter." << endl;
				}
			} while (!currectInput);

			if (back)
			{
				continue;
			}

			//Show turns
			printTurn();

			//Opponent's pokemon using skills
			do
			{
				opponentCanUseSkill = true;
				for (int i = 0; i < this->opponent.pokemonList[0].getSkillList().size(); i++)
				{
					if (this->opponent.pokemonList[0].getSkillList()[i].getPP() != 0)
					{
						break;
					}
					if (i == this->opponent.pokemonList[0].getSkillList().size() - 1)
					{
						opponentCanUseSkill = false;
					}
				}
				if (!opponentCanUseSkill)
				{
					break;
				}
				else
				{
					while (true)
					{
						int chooseSkill = rand() % 4;
						if (this->opponent.pokemonList[0].getSkillList()[chooseSkill].getPP() != 0)
						{
							enemySkill = this->opponent.pokemonList[0].getSkillList()[chooseSkill].getName();
							this->opponent.pokemonList[0].useSkill(enemySkill);
							break;
						}
						else
						{
							continue;
						}
					}
					break;
				}
			} while (true);

			//Check player and opponent's pokemon is paralyzed or not
			for (int i = 0; i < this->myself.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->myself.pokemonList[0].getNegativeEffect()[i] == "PAR")
				{
					myPokemonPAR = true;
					break;
				}
			}
			for (int i = 0; i < this->opponent.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->opponent.pokemonList[0].getNegativeEffect()[i] == "PAR")
				{
					myPokemonPAR = true;
					break;
				}
			}

			//player move first
			if (this->myself.pokemonList[0].getSpeed() >= this->opponent.pokemonList[0].getSpeed())
			{
				//If player's pokemon isn't be paralyzed, than it can use skill, else show a message to remind players that their pokemon cannot be moved 
				if (!myPokemonPAR)
				{
					//Calculate the damage cause by player's pokemon
					myDamage = countDamage(this->myself.pokemonList[0], this->opponent.pokemonList[0], this->myself.pokemonList[0].getSkill(ownSkill));

					//Set the HP of opponent's pokemon
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - myDamage);

					//Handle the negative effect of opponent's pokemon if player's pokemon use the skill may cause negative effect
					handleNegativeEffect(this->myself.pokemonList[0], this->opponent.pokemonList[0], ownSkill, opponentPokemonPAR);
				}
				else
				{
					if (this->gameMode == "Test")
					{
						cout << this->myself.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
					}
					else if (this->gameMode == "Normal")
					{
						if (rand() % 4 == 0)
						{
							cout << this->myself.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
						}
						else
						{
							//Calculate the damage cause by player's pokemon
							myDamage = countDamage(this->myself.pokemonList[0], this->opponent.pokemonList[0], this->myself.pokemonList[0].getSkill(ownSkill));

							//Set the HP of opponent's pokemon
							this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - myDamage);

							//Handle the negative effect of opponent's pokemon if player's pokemon use the skill may cause negative effect
							handleNegativeEffect(this->myself.pokemonList[0], this->opponent.pokemonList[0], ownSkill, opponentPokemonPAR);
						}
					}
				}

				//If opponent's pokemon still alive after player's pokemon move, than it can move, else show a message to remind opponent that their pokemon is die and change to next pokemon
				if (this->opponent.pokemonList[0].getHP() > 0)
				{
					//If opponent's pokemon isn't be paralyzed, than it can use skill, else show a message to remind opponent that their pokemon cannot be moved
					if (!opponentPokemonPAR)
					{
						//Calculate the damage cause by opponent's pokemon
						enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
						this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);

						//Handle the negative effect of player's pokemon if opponent's pokemon use the skill may cause negative effect
						handleNegativeEffect(this->opponent.pokemonList[0], this->myself.pokemonList[0], enemySkill, myPokemonPAR);
					}
					else
					{
						if (this->gameMode == "Test")
						{
							cout << this->opponent.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
						}
						else if (this->gameMode == "Normal")
						{
							if (rand() % 4 == 0)
							{
								cout << this->opponent.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
							}
							else
							{
								//Calculate the damage cause by opponent's pokemon
								enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
								this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);

								//Handle the negative effect of player's pokemon if opponent's pokemon use the skill may cause negative effect
								handleNegativeEffect(this->opponent.pokemonList[0], this->myself.pokemonList[0], enemySkill, myPokemonPAR);
							}
						}
					}
				}
				//If opponent's pokemon is died, show a message and change to next pokemon
				else
				{
					cout << this->opponent.pokemonList[0].getName() << " is fainted!" << endl;

					//Change to next pokemon, if no pokemon to change, opponent lose
					if (this->opponent.pokemonList[1].getHP() > 0)
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[1]);
					}
					else if (this->opponent.pokemonList[2].getHP() > 0)
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[2]);
					}
					else
					{
						cout << "Opponent Lose!" << endl;
						system("Pause");
						break;
					}
				}
			}
			//opponent move first
			else
			{
				//If opponent's pokemon isn't be paralyzed
				if (!opponentPokemonPAR)
				{
					//Calculate the damage cause by opponent's pokemon
					enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);

					//Handle player's negative effect
					handleNegativeEffect(this->opponent.pokemonList[0], this->myself.pokemonList[0], enemySkill, myPokemonPAR);
				}
				else
				{
					if (this->gameMode == "Test")
					{
						cout << this->opponent.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
					}
					else if (this->gameMode == "Normal")
					{
						if (rand() % 4 == 0)
						{
							cout << this->opponent.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
						}
						else
						{
							//Calculate the damage cause by opponent's pokemon
							enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
							this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);

							//Handle player's negative effect
							handleNegativeEffect(this->opponent.pokemonList[0], this->myself.pokemonList[0], enemySkill, myPokemonPAR);
						}
					}
				}

				//If player's pokemon still alive after opponent's pokemon move, than it can move
				if (this->myself.pokemonList[0].getHP() > 0)
				{
					//If player's pokemon isn't be paralyzed, than it can use skill, else show a message to remind player that their pokemon cannot be moved
					if (!myPokemonPAR)
					{
						//Calculate the damage cause by player's pokemon
						myDamage = countDamage(this->myself.pokemonList[0], this->opponent.pokemonList[0], this->myself.pokemonList[0].getSkill(ownSkill));
						this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - myDamage);

						//Handle opponent's negative effect
						handleNegativeEffect(this->myself.pokemonList[0], this->opponent.pokemonList[0], ownSkill, opponentPokemonPAR);
					}
					else
					{
						if (this->gameMode == "Test")
						{
							cout << this->myself.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
						}
						else if (this->gameMode == "Normal")
						{
							if (rand() % 4 == 0)
							{
								cout << this->myself.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
							}
							else
							{
								//Calculate the damage cause by player's pokemon
								myDamage = countDamage(this->myself.pokemonList[0], this->opponent.pokemonList[0], this->myself.pokemonList[0].getSkill(ownSkill));
								this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - myDamage);

								//Handle opponent's negative effect
								handleNegativeEffect(this->myself.pokemonList[0], this->opponent.pokemonList[0], ownSkill, opponentPokemonPAR);
							}
						}
					}
				}
				//If player's pokemon is died, show a message and let player change the pokemon, if no pokemon can play, player lose
				else
				{
					if (checkAllPlayerPokemon())
					{
						cout << "Your Pokemon Die! Please open your pokemon bag to choose a new one!" << endl;
						while (true)
						{
							bool findThisPokemon = false;
							cin >> changePokemon;
							for (int i = 1; i < this->myself.pokemonList.size(); i++)
							{
								if (changePokemon == this->myself.pokemonList[i].getName() && this->myself.pokemonList[i].getHP() > 0)
								{
									swap(this->myself.pokemonList[0], this->myself.pokemonList[i]);
									cout << "Go!" << this->myself.pokemonList[0].getName() << "!" << endl;
									findThisPokemon = true;
									break;
								}
							}
							if (findThisPokemon)
							{
								break;
							}
							else
							{
								cout << "You don't have this pokemon or this pokemon is fainted! Please re-enter." << endl;
							}
						}
					}
					else
					{
						cout << "All your pokemon lose their ability to fight." << endl;
						cout << "You lose!" << endl;
						system("Pause");
						break;
					}
				}
			}

			//If player's pokemon has negative effect, show notice message and some HP is deducted
			for (int i = 0; i < this->myself.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->myself.pokemonList[0].getNegativeEffect()[i] == "PSN")
				{
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - this->myself.pokemonList[0].getHPLimit() / 16);
					cout << this->myself.pokemonList[0].getName() << " is hurt by its poisoning!" << endl;
				}
				else if (this->myself.pokemonList[0].getNegativeEffect()[i] == "BRN")
				{
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - this->myself.pokemonList[0].getHPLimit() / 16);
					cout << this->myself.pokemonList[0].getName() << " is hurt by its burn!" << endl;
				}
			}

			//If opponent's pokemon has negative effect, show notice message and some HP is deducted
			for (int i = 0; i < this->opponent.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->opponent.pokemonList[0].getNegativeEffect()[i] == "PSN")
				{
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - this->opponent.pokemonList[0].getHPLimit() / 16);
					cout << this->opponent.pokemonList[0].getName() << " is hurt by its poisoning!" << endl;
				}
				else if (this->opponent.pokemonList[0].getNegativeEffect()[i] == "BRN")
				{
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - this->opponent.pokemonList[0].getHPLimit() / 16);
					cout << this->opponent.pokemonList[0].getName() << " is hurt by its burn!" << endl;
				}
			}

			//Check if the opponent's Pokémon is dead, if it is, the next Pokémon will be replaced, if no Pokémon is available, the player will win.
			if (this->opponent.pokemonList[0].getHP() <= 0)
			{
				cout << this->opponent.pokemonList[0].getName() << " is fainted!" << endl;
				if (checkAllOpponentPokemon())
				{
					if (this->opponent.pokemonList[1].getHP() > 0)
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[1]);
					}
					else
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[2]);
					}
				}
				else
				{
					cout << "Opponent Lose!" << endl;
					system("Pause");
					break;
				}
			}

			//Check if the player's Pokemon is dead, if it is, let the player choose the next Poeémon to play, if no Pokemon can play, the player fails
			if (this->myself.pokemonList[0].getHP() <= 0)
			{
				if (checkAllPlayerPokemon())
				{
					cout << "Your Pokemon Die! Please open your pokemon bag to choose a new one!" << endl;
					while (true)
					{
						bool findThisPokemon = false;
						cin >> changePokemon;
						for (int i = 1; i < this->myself.pokemonList.size(); i++)
						{
							if (changePokemon == this->myself.pokemonList[i].getName() && this->myself.pokemonList[i].getHP() > 0)
							{
								swap(this->myself.pokemonList[0], this->myself.pokemonList[i]);
								cout << "Go!" << this->myself.pokemonList[0].getName() << "!" << endl;
								findThisPokemon = true;
								break;
							}
						}
						if (findThisPokemon)
						{
							break;
						}
						else
						{
							cout << "You don't have this pokemon or this pokemon is fainted! Please re-enter." << endl;
						}
					}
				}
				else
				{
					cout << "All your pokemon lose their ability to fight." << endl;
					cout << "You lose!" << endl;
					system("Pause");
					break;
				}
			}

			//Go to the next turn
			this->turn++;
		}
		else if (command == "Bag")
		{
			bool back = false, choosePotion = true, perfectCommand = false;
			cout << "Open Bag" << endl;
			//Select the potion to be used and the Pokemon to be used.
			while (true)
			{
				potion = this->myBag.choosePotion();
				if (potion == "Back")
				{
					back = true;
					break;
				}
				else
				{
					while (true)
					{
						bool haveThisPokemon = false;
						cout << "Please select the pokemon to be treated or enter \"Back\" to reselect the potion." << endl;
						cin >> targetPokemon;
						if (targetPokemon == "Back")
						{
							break;
						}
						else
						{
							for (int i = 0; i < this->myself.pokemonList.size(); i++)
							{
								if (this->myself.pokemonList[i].getName() == targetPokemon && this->myself.pokemonList[i].getHP() > 0)
								{
									//Show turns
									printTurn();

									cout << "You used a " << potion << "!" << endl;
									this->myself.pokemonList[i].setHP(this->myBag.usePotion(potion, this->gameMode) + this->myself.pokemonList[i].getHP());
									cout << this->myself.pokemonList[0].getName() << " had its HP restored." << endl;
									haveThisPokemon = true;
									break;
								}
							}
							if (haveThisPokemon)
							{
								perfectCommand = true;
								break;
							}
							else
							{
								cout << "You don't have this pokemon or this pokemon is fainted! Please re-enter." << endl;
							}
						}
					}
				}
				if (perfectCommand)
				{
					break;
				}
			}
			if (back)
			{
				continue;
			}

			//Opponent's pokemon using skills
			do
			{
				opponentCanUseSkill = true;
				for (int i = 0; i < this->opponent.pokemonList[0].getSkillList().size(); i++)
				{
					if (this->opponent.pokemonList[0].getSkillList()[i].getPP() != 0)
					{
						break;
					}
					if (i == this->opponent.pokemonList[0].getSkillList().size() - 1)
					{
						opponentCanUseSkill = false;
					}
				}
				if (!opponentCanUseSkill)
				{
					break;
				}
				else
				{
					while (true)
					{
						int chooseSkill = rand() % 4;
						if (this->opponent.pokemonList[0].getSkillList()[chooseSkill].getPP() != 0)
						{
							enemySkill = this->opponent.pokemonList[0].getSkillList()[chooseSkill].getName();
							this->opponent.pokemonList[0].useSkill(enemySkill);
							break;
						}
						else
						{
							continue;
						}
					}
					break;
				}
			} while (true);
			//If opponent's pokemon isn't be paralyzed, than it can use skill, else show a message to remind opponent that their pokemon cannot be moved
			if (!opponentPokemonPAR)
			{
				//Calculate the damage cause by opponent's pokemon
				enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
				this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);

				//Handle the negative effect of player's pokemon if opponent's pokemon use the skill may cause negative effect
				handleNegativeEffect(this->opponent.pokemonList[0], this->myself.pokemonList[0], enemySkill, myPokemonPAR);
			}
			else
			{
				if (this->gameMode == "Test")
				{
					cout << this->opponent.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
				}
				else if (this->gameMode == "Normal")
				{
					if (rand() % 4 == 0)
					{
						cout << this->opponent.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
					}
					else
					{
						//Calculate the damage cause by opponent's pokemon
						enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
						this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);

						//Handle the negative effect of player's pokemon if opponent's pokemon use the skill may cause negative effect
						handleNegativeEffect(this->opponent.pokemonList[0], this->myself.pokemonList[0], enemySkill, myPokemonPAR);
					}
				}
			}

			//If player's pokemon has negative effect, show notice message and some HP is deducted
			for (int i = 0; i < this->myself.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->myself.pokemonList[0].getNegativeEffect()[i] == "PSN")
				{
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - this->myself.pokemonList[0].getHPLimit() / 16);
					cout << this->myself.pokemonList[0].getName() << " is hurt by its poisoning!" << endl;
				}
				else if (this->myself.pokemonList[0].getNegativeEffect()[i] == "BRN")
				{
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - this->myself.pokemonList[0].getHPLimit() / 16);
					cout << this->myself.pokemonList[0].getName() << " is hurt by its burn!" << endl;
				}
			}

			//If opponent's pokemon has negative effect, show notice message and some HP is deducted
			for (int i = 0; i < this->opponent.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->opponent.pokemonList[0].getNegativeEffect()[i] == "PSN")
				{
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - this->opponent.pokemonList[0].getHPLimit() / 16);
					cout << this->opponent.pokemonList[0].getName() << " is hurt by its poisoning!" << endl;
				}
				else if (this->opponent.pokemonList[0].getNegativeEffect()[i] == "BRN")
				{
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - this->opponent.pokemonList[0].getHPLimit() / 16);
					cout << this->opponent.pokemonList[0].getName() << " is hurt by its burn!" << endl;
				}
			}

			//Check if the opponent's Pokémon is dead, if it is, the next Pokémon will be replaced, if no Pokémon is available, the player will win.
			if (this->opponent.pokemonList[0].getHP() <= 0)
			{
				cout << this->opponent.pokemonList[0].getName() << " is fainted!" << endl;
				if (checkAllOpponentPokemon())
				{
					if (this->opponent.pokemonList[1].getHP() > 0)
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[1]);
					}
					else
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[2]);
					}
				}
				else
				{
					cout << "Opponent Lose!" << endl;
					system("Pause");
					break;
				}
			}

			//Check if the player's Pokemon is dead, if it is, let the player choose the next Poeémon to play, if no Pokemon can play, the player fails
			if (this->myself.pokemonList[0].getHP() <= 0)
			{
				if (checkAllPlayerPokemon())
				{
					cout << "Your Pokemon Die! Please open your pokemon bag to choose a new one!" << endl;
					while (true)
					{
						bool findThisPokemon = false;
						cin >> changePokemon;
						for (int i = 1; i < this->myself.pokemonList.size(); i++)
						{
							if (changePokemon == this->myself.pokemonList[i].getName() && this->myself.pokemonList[i].getHP() > 0)
							{
								swap(this->myself.pokemonList[0], this->myself.pokemonList[i]);
								cout << "Go!" << this->myself.pokemonList[0].getName() << "!" << endl;
								findThisPokemon = true;
								break;
							}
						}
						if (findThisPokemon)
						{
							break;
						}
						else
						{
							cout << "You don't have this pokemon or this pokemon is fainted! Please re-enter." << endl;
						}
					}
				}
				else
				{
					cout << "All your pokemon lose their ability to fight." << endl;
					cout << "You lose!" << endl;
					system("Pause");
					break;
				}
			}

			//Go to the next turn
			this->turn++;
		}
		else if (command == "Status")
		{
			//Display the name of the player and the opponent's pokemon, the amount of HP and the negative effect
			this->myself.pokemonList[0].printStatus();
			this->opponent.pokemonList[0].printStatus();
			cout << endl;
		}
		else if (command == "Check")
		{
			//Show the skills and number of times a player's pokemon can use
			for (int i = 0; i < this->myself.pokemonList[0].getSkillList().size(); i++)
			{
				cout << this->myself.pokemonList[0].getSkillList()[i].getName() << " " << this->myself.pokemonList[0].getSkillList()[i].getPP() << " ";
			}
			cout << endl;
		}
		else if (command == "Pokemon")
		{
			bool back = false;
			while (true)
			{
				bool findThisPokemon = false;
				//Input the name of the pokemon to be played
				cin >> changePokemon;
				if (changePokemon == "Back")
				{
					back = true;
					break;
				}
				//Use for loop to check if the player owns this pokemon
				for (int i = 1; i < this->myself.pokemonList.size(); i++)
				{
					//If the player has this pokemon, then change to this pokemon
					if (this->myself.pokemonList[i].getName() == changePokemon && this->myself.pokemonList[i].getHP() > 0)
					{
						cout << this->myself.pokemonList[0].getName() << ",switch out!\nCome back!\nGo! ";
						swap(this->myself.pokemonList[i], this->myself.pokemonList[0]);
						cout << this->myself.pokemonList[0].getName() << "!" << endl;
						findThisPokemon = true;
						break;
					}
				}
				if (findThisPokemon)
				{
					break;
				}
				else
				{
					cout << "You don't have this pokemon or this pokemon is fainted! Please re-enter." << endl;
				}
			}
			if (back)
			{
				continue;
			}
			//Opponent's pokemon using skills
			do
			{
				opponentCanUseSkill = true;
				for (int i = 0; i < this->opponent.pokemonList[0].getSkillList().size(); i++)
				{
					if (this->opponent.pokemonList[0].getSkillList()[i].getPP() != 0)
					{
						break;
					}
					if (i == this->opponent.pokemonList[0].getSkillList().size() - 1)
					{
						opponentCanUseSkill = false;
					}
				}
				if (!opponentCanUseSkill)
				{
					break;
				}
				else
				{
					while (true)
					{
						int chooseSkill = rand() % 4;
						if (this->opponent.pokemonList[0].getSkillList()[chooseSkill].getPP() != 0)
						{
							enemySkill = this->opponent.pokemonList[0].getSkillList()[chooseSkill].getName();
							this->opponent.pokemonList[0].useSkill(enemySkill);
							break;
						}
						else
						{
							continue;
						}
					}
					break;
				}
			} while (true);
			//If opponent's pokemon isn't be paralyzed, than it can use skill, else show a message to remind opponent that their pokemon cannot be moved
			if (!opponentPokemonPAR)
			{
				//Calculate the damage cause by opponent's pokemon
				enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
				this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);

				//Handle the negative effect of player's pokemon if opponent's pokemon use the skill may cause negative effect
				handleNegativeEffect(this->opponent.pokemonList[0], this->myself.pokemonList[0], enemySkill, myPokemonPAR);
			}
			else
			{
				if (this->gameMode == "Test")
				{
					cout << this->opponent.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
				}
				else if (this->gameMode == "Normal")
				{
					if (rand() % 4 == 0)
					{
						cout << this->opponent.pokemonList[0].getName() << " is paralyzed!\nIt can't move!" << endl;
					}
					else
					{
						//Calculate the damage cause by opponent's pokemon
						enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
						this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);

						//Handle the negative effect of player's pokemon if opponent's pokemon use the skill may cause negative effect
						handleNegativeEffect(this->opponent.pokemonList[0], this->myself.pokemonList[0], enemySkill, myPokemonPAR);
					}
				}
			}

			//If player's pokemon has negative effect, show notice message and some HP is deducted
			for (int i = 0; i < this->myself.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->myself.pokemonList[0].getNegativeEffect()[i] == "PSN")
				{
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - this->myself.pokemonList[0].getHPLimit() / 16);
					cout << this->myself.pokemonList[0].getName() << " is hurt by its poisoning!" << endl;
				}
				else if (this->myself.pokemonList[0].getNegativeEffect()[i] == "BRN")
				{
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - this->myself.pokemonList[0].getHPLimit() / 16);
					cout << this->myself.pokemonList[0].getName() << " is hurt by its burn!" << endl;
				}
			}

			//If opponent's pokemon has negative effect, show notice message and some HP is deducted
			for (int i = 0; i < this->opponent.pokemonList[0].getNegativeEffect().size(); i++)
			{
				if (this->opponent.pokemonList[0].getNegativeEffect()[i] == "PSN")
				{
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - this->opponent.pokemonList[0].getHPLimit() / 16);
					cout << this->opponent.pokemonList[0].getName() << " is hurt by its poisoning!" << endl;
				}
				else if (this->opponent.pokemonList[0].getNegativeEffect()[i] == "BRN")
				{
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - this->opponent.pokemonList[0].getHPLimit() / 16);
					cout << this->opponent.pokemonList[0].getName() << " is hurt by its burn!" << endl;
				}
			}

			//Check if the opponent's Pokemon is dead, if it is, the next Pokemon will be replaced, if no Pokemon is available, the player will win.
			if (this->opponent.pokemonList[0].getHP() <= 0)
			{
				cout << this->opponent.pokemonList[0].getName() << " is fainted!" << endl;
				if (checkAllOpponentPokemon())
				{
					if (this->opponent.pokemonList[1].getHP() > 0)
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[1]);
					}
					else
					{
						swap(this->opponent.pokemonList[0], this->opponent.pokemonList[2]);
					}
				}
				else
				{
					cout << "Opponent Lose!" << endl;
					system("Pause");
					break;
				}
			}

			//Check if the player's Pokemon is dead, if it is, let the player choose the next Poeémon to play, if no Pokemon can play, the player fails
			if (this->myself.pokemonList[0].getHP() <= 0)
			{
				if (checkAllPlayerPokemon())
				{
					cout << "Your Pokemon Die! Please open your pokemon bag to choose a new one!" << endl;
					while (true)
					{
						bool findThisPokemon = false;
						cin >> changePokemon;
						for (int i = 1; i < this->myself.pokemonList.size(); i++)
						{
							if (changePokemon == this->myself.pokemonList[i].getName() && this->myself.pokemonList[i].getHP() > 0)
							{
								swap(this->myself.pokemonList[0], this->myself.pokemonList[i]);
								cout << "Go!" << this->myself.pokemonList[0].getName() << "!" << endl;
								findThisPokemon = true;
								break;
							}
						}
						if (findThisPokemon)
						{
							break;
						}
						else
						{
							cout << "You don't have this pokemon or this pokemon is fainted! Please re-enter." << endl;
						}
					}
				}
				else
				{
					cout << "All your pokemon lose their ability to fight." << endl;
					cout << "You lose!" << endl;
					system("Pause");
					break;
				}
			}

			//Go to next turn
			this->turn++;
		}
		else if (command == "Run")
		{
			cout << "Run!" << endl;
			system("Pause");
		}
	}
}