#include "Game.h"
#include <iostream>
#include <conio.h>
#include <sstream>
#include <fstream>

using namespace std;

Game::Game()
{
	this->restrainList["NORMAL"]["NORMAL"] = 1;
	this->restrainList["NORMAL"]["FIRE"] = 1;
	this->restrainList["NORMAL"]["WATER"] = 1;
	this->restrainList["NORMAL"]["ELECTRIC"] = 1;
	this->restrainList["NORMAL"]["GRASS"] = 1;
	this->restrainList["NORMAL"]["ICE"] = 1;
	this->restrainList["NORMAL"]["FIGHTING"] = 1;
	this->restrainList["NORMAL"]["POISON"] = 1;
	this->restrainList["NORMAL"]["GROUND"] = 1;
	this->restrainList["NORMAL"]["FLYING"] = 1;
	this->restrainList["NORMAL"]["PSYCHIC"] = 1;
	this->restrainList["NORMAL"]["BUG"] = 1;
	this->restrainList["NORMAL"]["ROCK"] = 0.5;
	this->restrainList["NORMAL"]["GHOST"] = 0;
	this->restrainList["NORMAL"]["DRAGON"] = 1;
	this->restrainList["NORMAL"]["DARK"] = 1;
	this->restrainList["NORMAL"]["STEEL"] = 0.5;
	this->restrainList["NORMAL"]["FAIRY"] = 1;

	this->restrainList["FIRE"]["NORMAL"] = 1;
	this->restrainList["FIRE"]["FIRE"] = 0.5;
	this->restrainList["FIRE"]["WATER"] = 0.5;
	this->restrainList["FIRE"]["ELECTRIC"] = 1;
	this->restrainList["FIRE"]["GRASS"] = 2;
	this->restrainList["FIRE"]["ICE"] = 2;
	this->restrainList["FIRE"]["FIGHTING"] = 1;
	this->restrainList["FIRE"]["POISON"] = 1;
	this->restrainList["FIRE"]["GROUND"] = 1;
	this->restrainList["FIRE"]["FLYING"] = 1;
	this->restrainList["FIRE"]["PSYCHIC"] = 1;
	this->restrainList["FIRE"]["BUG"] = 2;
	this->restrainList["FIRE"]["ROCK"] = 0.5;
	this->restrainList["FIRE"]["GHOST"] = 1;
	this->restrainList["FIRE"]["DRAGON"] = 0.5;
	this->restrainList["FIRE"]["DARK"] = 1;
	this->restrainList["FIRE"]["STEEL"] = 2;
	this->restrainList["FIRE"]["FAIRY"] = 1;

	this->restrainList["WATER"]["NORMAL"] = 1;
	this->restrainList["WATER"]["FIRE"] = 2;
	this->restrainList["WATER"]["WATER"] = 0.5;
	this->restrainList["WATER"]["ELECTRIC"] = 1;
	this->restrainList["WATER"]["GRASS"] = 0.5;
	this->restrainList["WATER"]["ICE"] = 1;
	this->restrainList["WATER"]["FIGHTING"] = 1;
	this->restrainList["WATER"]["POISON"] = 1;
	this->restrainList["WATER"]["GROUND"] = 2;
	this->restrainList["WATER"]["FLYING"] = 1;
	this->restrainList["WATER"]["PSYCHIC"] = 1;
	this->restrainList["WATER"]["BUG"] = 1;
	this->restrainList["WATER"]["ROCK"] = 2;
	this->restrainList["WATER"]["GHOST"] = 1;
	this->restrainList["WATER"]["DRAGON"] = 0.5;
	this->restrainList["WATER"]["DARK"] = 1;
	this->restrainList["WATER"]["STEEL"] = 1;
	this->restrainList["WATER"]["FAIRY"] = 1;

	this->restrainList["ELECTRIC"]["NORMAL"] = 1;
	this->restrainList["ELECTRIC"]["FIRE"] = 1;
	this->restrainList["ELECTRIC"]["WATER"] = 2;
	this->restrainList["ELECTRIC"]["ELECTRIC"] = 0.5;
	this->restrainList["ELECTRIC"]["GRASS"] = 0.5;
	this->restrainList["ELECTRIC"]["ICE"] = 1;
	this->restrainList["ELECTRIC"]["FIGHTING"] = 1;
	this->restrainList["ELECTRIC"]["POISON"] = 1;
	this->restrainList["ELECTRIC"]["GROUND"] = 1;
	this->restrainList["ELECTRIC"]["FLYING"] = 0;
	this->restrainList["ELECTRIC"]["PSYCHIC"] = 2;
	this->restrainList["ELECTRIC"]["BUG"] = 1;
	this->restrainList["ELECTRIC"]["ROCK"] = 1;
	this->restrainList["ELECTRIC"]["GHOST"] = 1;
	this->restrainList["ELECTRIC"]["DRAGON"] = 0.5;
	this->restrainList["ELECTRIC"]["DARK"] = 1;
	this->restrainList["ELECTRIC"]["STEEL"] = 1;
	this->restrainList["ELECTRIC"]["FAIRY"] = 1;

	this->restrainList["GRASS"]["NORMAL"] = 1;
	this->restrainList["GRASS"]["FIRE"] = 0.5;
	this->restrainList["GRASS"]["WATER"] = 2;
	this->restrainList["GRASS"]["ELECTRIC"] = 1;
	this->restrainList["GRASS"]["GRASS"] = 0.5;
	this->restrainList["GRASS"]["ICE"] = 1;
	this->restrainList["GRASS"]["FIGHTING"] = 1;
	this->restrainList["GRASS"]["POISON"] = 0.5;
	this->restrainList["GRASS"]["GROUND"] = 2;
	this->restrainList["GRASS"]["FLYING"] = 0.5;
	this->restrainList["GRASS"]["PSYCHIC"] = 1;
	this->restrainList["GRASS"]["BUG"] = 0.5;
	this->restrainList["GRASS"]["ROCK"] = 2;
	this->restrainList["GRASS"]["GHOST"] = 1;
	this->restrainList["GRASS"]["DRAGON"] = 0.5;
	this->restrainList["GRASS"]["DARK"] = 1;
	this->restrainList["GRASS"]["STEEL"] = 0.5;
	this->restrainList["GRASS"]["FAIRY"] = 1;

	this->restrainList["ICE"]["NORMAL"] = 1;
	this->restrainList["ICE"]["FIRE"] = 0.5;
	this->restrainList["ICE"]["WATER"] = 0.5;
	this->restrainList["ICE"]["ELECTRIC"] = 1;
	this->restrainList["ICE"]["GRASS"] = 2;
	this->restrainList["ICE"]["ICE"] = 0.5;
	this->restrainList["ICE"]["FIGHTING"] = 1;
	this->restrainList["ICE"]["POISON"] = 1;
	this->restrainList["ICE"]["GROUND"] = 2;
	this->restrainList["ICE"]["FLYING"] = 2;
	this->restrainList["ICE"]["PSYCHIC"] = 1;
	this->restrainList["ICE"]["BUG"] = 1;
	this->restrainList["ICE"]["ROCK"] = 1;
	this->restrainList["ICE"]["GHOST"] = 1;
	this->restrainList["ICE"]["DRAGON"] = 2;
	this->restrainList["ICE"]["DARK"] = 1;
	this->restrainList["ICE"]["STEEL"] = 0.5;
	this->restrainList["ICE"]["FAIRY"] = 1;

	this->restrainList["FIGHTING"]["NORMAL"] = 2;
	this->restrainList["FIGHTING"]["FIRE"] = 1;
	this->restrainList["FIGHTING"]["WATER"] = 1;
	this->restrainList["FIGHTING"]["ELECTRIC"] = 1;
	this->restrainList["FIGHTING"]["GRASS"] = 1;
	this->restrainList["FIGHTING"]["ICE"] = 2;
	this->restrainList["FIGHTING"]["FIGHTING"] = 1;
	this->restrainList["FIGHTING"]["POISON"] = 0.5;
	this->restrainList["FIGHTING"]["GROUND"] = 1;
	this->restrainList["FIGHTING"]["FLYING"] = 0.5;
	this->restrainList["FIGHTING"]["PSYCHIC"] = 0.5;
	this->restrainList["FIGHTING"]["BUG"] = 0.5;
	this->restrainList["FIGHTING"]["ROCK"] = 2;
	this->restrainList["FIGHTING"]["GHOST"] = 0;
	this->restrainList["FIGHTING"]["DRAGON"] = 1;
	this->restrainList["FIGHTING"]["DARK"] = 2;
	this->restrainList["FIGHTING"]["STEEL"] = 2;
	this->restrainList["FIGHTING"]["FAIRY"] = 0.5;

	this->restrainList["POISON"]["NORMAL"] = 1;
	this->restrainList["POISON"]["FIRE"] = 1;
	this->restrainList["POISON"]["WATER"] = 1;
	this->restrainList["POISON"]["ELECTRIC"] = 1;
	this->restrainList["POISON"]["GRASS"] = 2;
	this->restrainList["POISON"]["ICE"] = 1;
	this->restrainList["POISON"]["FIGHTING"] = 1;
	this->restrainList["POISON"]["POISON"] = 0.5;
	this->restrainList["POISON"]["GROUND"] = 0.5;
	this->restrainList["POISON"]["FLYING"] = 1;
	this->restrainList["POISON"]["PSYCHIC"] = 1;
	this->restrainList["POISON"]["BUG"] = 1;
	this->restrainList["POISON"]["ROCK"] = 0.5;
	this->restrainList["POISON"]["GHOST"] = 0.5;
	this->restrainList["POISON"]["DRAGON"] = 1;
	this->restrainList["POISON"]["DARK"] = 1;
	this->restrainList["POISON"]["STEEL"] = 0;
	this->restrainList["POISON"]["FAIRY"] = 2;

	this->restrainList["GROUND"]["NORMAL"] = 1;
	this->restrainList["GROUND"]["FIRE"] = 2;
	this->restrainList["GROUND"]["WATER"] = 1;
	this->restrainList["GROUND"]["ELECTRIC"] = 2;
	this->restrainList["GROUND"]["GRASS"] = 0.5;
	this->restrainList["GROUND"]["ICE"] = 1;
	this->restrainList["GROUND"]["FIGHTING"] = 1;
	this->restrainList["GROUND"]["POISON"] = 2;
	this->restrainList["GROUND"]["GROUND"] = 1;
	this->restrainList["GROUND"]["FLYING"] = 0;
	this->restrainList["GROUND"]["PSYCHIC"] = 1;
	this->restrainList["GROUND"]["BUG"] = 0.5;
	this->restrainList["GROUND"]["ROCK"] = 2;
	this->restrainList["GROUND"]["GHOST"] = 1;
	this->restrainList["GROUND"]["DRAGON"] = 1;
	this->restrainList["GROUND"]["DARK"] = 1;
	this->restrainList["GROUND"]["STEEL"] = 2;
	this->restrainList["GROUND"]["FAIRY"] = 1;

	this->restrainList["FLYING"]["NORMAL"] = 1;
	this->restrainList["FLYING"]["FIRE"] = 1;
	this->restrainList["FLYING"]["WATER"] = 1;
	this->restrainList["FLYING"]["ELECTRIC"] = 0.5;
	this->restrainList["FLYING"]["GRASS"] = 2;
	this->restrainList["FLYING"]["ICE"] = 1;
	this->restrainList["FLYING"]["FIGHTING"] = 2;
	this->restrainList["FLYING"]["POISON"] = 1;
	this->restrainList["FLYING"]["GROUND"] = 1;
	this->restrainList["FLYING"]["FLYING"] = 1;
	this->restrainList["FLYING"]["PSYCHIC"] = 1;
	this->restrainList["FLYING"]["BUG"] = 2;
	this->restrainList["FLYING"]["ROCK"] = 0.5;
	this->restrainList["FLYING"]["GHOST"] = 1;
	this->restrainList["FLYING"]["DRAGON"] = 1;
	this->restrainList["FLYING"]["DARK"] = 1;
	this->restrainList["FLYING"]["STEEL"] = 0.5;
	this->restrainList["FLYING"]["FAIRY"] = 1;

	this->restrainList["PSYCHIC"]["NORMAL"] = 1;
	this->restrainList["PSYCHIC"]["FIRE"] = 1;
	this->restrainList["PSYCHIC"]["WATER"] = 1;
	this->restrainList["PSYCHIC"]["ELECTRIC"] = 1;
	this->restrainList["PSYCHIC"]["GRASS"] = 1;
	this->restrainList["PSYCHIC"]["ICE"] = 1;
	this->restrainList["PSYCHIC"]["FIGHTING"] = 2;
	this->restrainList["PSYCHIC"]["POISON"] = 2;
	this->restrainList["PSYCHIC"]["GROUND"] = 1;
	this->restrainList["PSYCHIC"]["FLYING"] = 1;
	this->restrainList["PSYCHIC"]["PSYCHIC"] = 0.5;
	this->restrainList["PSYCHIC"]["BUG"] = 1;
	this->restrainList["PSYCHIC"]["ROCK"] = 1;
	this->restrainList["PSYCHIC"]["GHOST"] = 1;
	this->restrainList["PSYCHIC"]["DRAGON"] = 1;
	this->restrainList["PSYCHIC"]["DARK"] = 0;
	this->restrainList["PSYCHIC"]["STEEL"] = 0.5;
	this->restrainList["PSYCHIC"]["FAIRY"] = 1;

	this->restrainList["BUG"]["NORMAL"] = 1;
	this->restrainList["BUG"]["FIRE"] = 0.5;
	this->restrainList["BUG"]["WATER"] = 1;
	this->restrainList["BUG"]["ELECTRIC"] = 1;
	this->restrainList["BUG"]["GRASS"] = 2;
	this->restrainList["BUG"]["ICE"] = 1;
	this->restrainList["BUG"]["FIGHTING"] = 0.5;
	this->restrainList["BUG"]["POISON"] = 0.5;
	this->restrainList["BUG"]["GROUND"] = 1;
	this->restrainList["BUG"]["FLYING"] = 0.5;
	this->restrainList["BUG"]["PSYCHIC"] = 2;
	this->restrainList["BUG"]["BUG"] = 1;
	this->restrainList["BUG"]["ROCK"] = 1;
	this->restrainList["BUG"]["GHOST"] = 0.5;
	this->restrainList["BUG"]["DRAGON"] = 1;
	this->restrainList["BUG"]["DARK"] = 2;
	this->restrainList["BUG"]["STEEL"] = 0.5;
	this->restrainList["BUG"]["FAIRY"] = 0.5;

	this->restrainList["ROCK"]["NORMAL"] = 1;
	this->restrainList["ROCK"]["FIRE"] = 2;
	this->restrainList["ROCK"]["WATER"] = 1;
	this->restrainList["ROCK"]["ELECTRIC"] = 1;
	this->restrainList["ROCK"]["GRASS"] = 1;
	this->restrainList["ROCK"]["ICE"] = 2;
	this->restrainList["ROCK"]["FIGHTING"] = 0.5;
	this->restrainList["ROCK"]["POISON"] = 1;
	this->restrainList["ROCK"]["GROUND"] = 0.5;
	this->restrainList["ROCK"]["FLYING"] = 2;
	this->restrainList["ROCK"]["PSYCHIC"] = 1;
	this->restrainList["ROCK"]["BUG"] = 2;
	this->restrainList["ROCK"]["ROCK"] = 1;
	this->restrainList["ROCK"]["GHOST"] = 1;
	this->restrainList["ROCK"]["DRAGON"] = 1;
	this->restrainList["ROCK"]["DARK"] = 1;
	this->restrainList["ROCK"]["STEEL"] = 0.5;
	this->restrainList["ROCK"]["FAIRY"] = 1;

	this->restrainList["GHOST"]["NORMAL"] = 0;
	this->restrainList["GHOST"]["FIRE"] = 1;
	this->restrainList["GHOST"]["WATER"] = 1;
	this->restrainList["GHOST"]["ELECTRIC"] = 1;
	this->restrainList["GHOST"]["GRASS"] = 1;
	this->restrainList["GHOST"]["ICE"] = 1;
	this->restrainList["GHOST"]["FIGHTING"] = 1;
	this->restrainList["GHOST"]["POISON"] = 1;
	this->restrainList["GHOST"]["GROUND"] = 1;
	this->restrainList["GHOST"]["FLYING"] = 1;
	this->restrainList["GHOST"]["PSYCHIC"] = 2;
	this->restrainList["GHOST"]["BUG"] = 1;
	this->restrainList["GHOST"]["ROCK"] = 1;
	this->restrainList["GHOST"]["GHOST"] = 2;
	this->restrainList["GHOST"]["DRAGON"] = 1;
	this->restrainList["GHOST"]["DARK"] = 0.5;
	this->restrainList["GHOST"]["STEEL"] = 1;
	this->restrainList["GHOST"]["FAIRY"] = 1;

	this->restrainList["DRAGON"]["NORMAL"] = 1;
	this->restrainList["DRAGON"]["FIRE"] = 1;
	this->restrainList["DRAGON"]["WATER"] = 1;
	this->restrainList["DRAGON"]["ELECTRIC"] = 1;
	this->restrainList["DRAGON"]["GRASS"] = 1;
	this->restrainList["DRAGON"]["ICE"] = 1;
	this->restrainList["DRAGON"]["FIGHTING"] = 1;
	this->restrainList["DRAGON"]["POISON"] = 1;
	this->restrainList["DRAGON"]["GROUND"] = 1;
	this->restrainList["DRAGON"]["FLYING"] = 1;
	this->restrainList["DRAGON"]["PSYCHIC"] = 1;
	this->restrainList["DRAGON"]["BUG"] = 1;
	this->restrainList["DRAGON"]["ROCK"] = 1;
	this->restrainList["DRAGON"]["GHOST"] = 1;
	this->restrainList["DRAGON"]["DRAGON"] = 2;
	this->restrainList["DRAGON"]["DARK"] = 1;
	this->restrainList["DRAGON"]["STEEL"] = 0.5;
	this->restrainList["DRAGON"]["FAIRY"] = 0;

	this->restrainList["DARK"]["NORMAL"] = 1;
	this->restrainList["DARK"]["FIRE"] = 1;
	this->restrainList["DARK"]["WATER"] = 1;
	this->restrainList["DARK"]["ELECTRIC"] = 1;
	this->restrainList["DARK"]["GRASS"] = 1;
	this->restrainList["DARK"]["ICE"] = 1;
	this->restrainList["DARK"]["FIGHTING"] = 0.5;
	this->restrainList["DARK"]["POISON"] = 1;
	this->restrainList["DARK"]["GROUND"] = 1;
	this->restrainList["DARK"]["FLYING"] = 1;
	this->restrainList["DARK"]["PSYCHIC"] = 2;
	this->restrainList["DARK"]["BUG"] = 1;
	this->restrainList["DARK"]["ROCK"] = 1;
	this->restrainList["DARK"]["GHOST"] = 2;
	this->restrainList["DARK"]["DRAGON"] = 1;
	this->restrainList["DARK"]["DARK"] = 0.5;
	this->restrainList["DARK"]["STEEL"] = 1;
	this->restrainList["DARK"]["FAIRY"] = 0.5;

	this->restrainList["STEEL"]["NORMAL"] = 1;
	this->restrainList["STEEL"]["FIRE"] = 0.5;
	this->restrainList["STEEL"]["WATER"] = 0.5;
	this->restrainList["STEEL"]["ELECTRIC"] = 0.5;
	this->restrainList["STEEL"]["GRASS"] = 1;
	this->restrainList["STEEL"]["ICE"] = 2;
	this->restrainList["STEEL"]["FIGHTING"] = 1;
	this->restrainList["STEEL"]["POISON"] = 1;
	this->restrainList["STEEL"]["GROUND"] = 1;
	this->restrainList["STEEL"]["FLYING"] = 1;
	this->restrainList["STEEL"]["PSYCHIC"] = 1;
	this->restrainList["STEEL"]["BUG"] = 1;
	this->restrainList["STEEL"]["ROCK"] = 2;
	this->restrainList["STEEL"]["GHOST"] = 1;
	this->restrainList["STEEL"]["DRAGON"] = 1;
	this->restrainList["STEEL"]["DARK"] = 1;
	this->restrainList["STEEL"]["STEEL"] = 0.5;
	this->restrainList["STEEL"]["FAIRY"] = 2;

	this->restrainList["FAIRY"]["NORMAL"] = 1;
	this->restrainList["FAIRY"]["FIRE"] = 0.5;
	this->restrainList["FAIRY"]["WATER"] = 1;
	this->restrainList["FAIRY"]["ELECTRIC"] = 1;
	this->restrainList["FAIRY"]["GRASS"] = 1;
	this->restrainList["FAIRY"]["ICE"] = 1;
	this->restrainList["FAIRY"]["FIGHTING"] = 2;
	this->restrainList["FAIRY"]["POISON"] = 0.5;
	this->restrainList["FAIRY"]["GROUND"] = 1;
	this->restrainList["FAIRY"]["FLYING"] = 1;
	this->restrainList["FAIRY"]["PSYCHIC"] = 1;
	this->restrainList["FAIRY"]["BUG"] = 1;
	this->restrainList["FAIRY"]["ROCK"] = 1;
	this->restrainList["FAIRY"]["GHOST"] = 1;
	this->restrainList["FAIRY"]["DRAGON"] = 2;
	this->restrainList["FAIRY"]["DARK"] = 2;
	this->restrainList["FAIRY"]["STEEL"] = 0.5;
	this->restrainList["FAIRY"]["FAIRY"] = 1;

	this->gameState = "StandBy";
	this->gameMode = "Normal";
	this->turn = 0;
}

void Game::initialize()
{
	this->gameState = "StandBy";
	this->gameMode = "Normal";
	this->turn = 0;
}

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
			break;
		}
		else if (input == '2')
		{
			this->gameMode = "Normal";
			break;
		}
		else if (input == '3')
		{
			loadFile();
			break;
		}
		system("CLS");
	}
	//cout << "Finish";
}

void Game::printTurn()
{
	cout << this->turn << endl;
}

int Game::countDamage(Pokemon move, Pokemon target, Skill use)
{
	int damage = 0;
	if (use.getAtkType() == "Physical")
	{
		if (this->gameMode == "Test")
		{
			damage = (((2 * move.getLevel() + 10) / 250) * use.getPower() * (move.getAtk() / target.getDef()) + 2) * 1;
		}
		
	}

}

void Game::loadFile()
{
	system("CLS");
	string firstFile;
	cout << "Please Enter Your File Name:";
	cin >> firstFile;
	system("CLS");
	string pokemonLibName, moveLibName, gameDataName;
	ifstream file;
	file.open(firstFile);
	file >> pokemonLibName >> moveLibName >> gameDataName;
	ifstream pokemonLib;
	ifstream moveLib;
	ifstream gameData;
	pokemonLib.open(pokemonLibName);
	moveLib.open(moveLibName);
	gameData.open(gameDataName);
	string pokemonType1, pokemonType2, pokemonName;
	int hp, atk, def, spAtk, spDef, speed, typeNum;
	for (int i = 0; i < 3; i++)
	{
		Pokemon inputPokemon;
		pokemonLib >> pokemonName >> typeNum;
		inputPokemon.setName(pokemonName);
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
		pokemonLib >> hp >> atk >> def >> spAtk >> spDef >> speed;
		inputPokemon.setHP(hp);
		inputPokemon.setHPLimit(hp);
		inputPokemon.setAtk(atk);
		inputPokemon.setDef(def);
		inputPokemon.setSpAtk(spAtk);
		inputPokemon.setSpDef(spDef);
		inputPokemon.setSpeed(speed);
		this->myself.addPokemon(inputPokemon);
		this->opponent.addPokemon(inputPokemon);
	}
	int myselfPokemonNum, myselfSkillNum, opponentPokemonNum, opponentSkillNum;
	string skillName;
	Skill tempSkill;
	gameData >> myselfPokemonNum;
	for (int i = 0; i < myselfPokemonNum; i++)
	{
		gameData >> pokemonName >> myselfSkillNum;
		if (this->myself.pokemonList[i].getName() != pokemonName)
		{
			for (int j = 0; j < myselfPokemonNum; j++)
			{
				if (this->myself.pokemonList[j].getName() == pokemonName)
				{
					swap(this->myself.pokemonList[i], this->myself.pokemonList[j]);
				}
			}
		}
		for (int k = 0; k < myselfSkillNum; k++)
		{
			gameData >> skillName;
			tempSkill.setName(skillName);
			for (int n = 0; n < this->myself.pokemonList.size(); n++)
			{
				if (this->myself.pokemonList[n].getName() == pokemonName)
				{
					this->myself.pokemonList[n].addSkill(tempSkill);
				}
			}
		}
	}
	gameData >> opponentPokemonNum;
	for (int i = 0; i < opponentPokemonNum; i++)
	{
		gameData >> pokemonName >> opponentSkillNum;
		if (this->opponent.pokemonList[i].getName() != pokemonName)
		{
			for (int j = 0; j < opponentPokemonNum; j++)
			{
				if (this->opponent.pokemonList[j].getName() == pokemonName)
				{
					swap(this->opponent.pokemonList[i], this->opponent.pokemonList[j]);
				}
			}
		}
		for (int k = 0; k < opponentSkillNum; k++)
		{
			gameData >> skillName;
			tempSkill.setName(skillName);
			for (int n = 0; n < this->opponent.pokemonList.size(); n++)
			{
				if (this->opponent.pokemonList[n].getName() == pokemonName)
				{
					this->opponent.pokemonList[n].addSkill(tempSkill);
				}
			}
		}
	}
	Skill inputSkill;
	string skillType, atkType, negativeEffect;
	int power, pp, accuracy;
	while (moveLib >> skillName)
	{
		moveLib >> skillType >> atkType >> power >> accuracy >> pp;
		inputSkill.setName(skillName);
		inputSkill.setSkillType(skillType);
		inputSkill.setAtkType(atkType);
		inputSkill.setPower(power);
		inputSkill.setAccuracy(accuracy);
		inputSkill.setPP(pp);
		if (moveLib.peek() != '\n')
		{
			moveLib >> negativeEffect;
			inputSkill.setNegativeEffect(negativeEffect);
		}
		else
		{
			inputSkill.setNegativeEffect("");
		}
		for (int i = 0; i < myselfPokemonNum; i++)
		{
			this->myself.pokemonList[i].updateSkill(inputSkill);
		}
		for (int i = 0; i < opponentPokemonNum; i++)
		{
			this->opponent.pokemonList[i].updateSkill(inputSkill);
		}
	}
	string mode, select, ownSkill, enemySkill, potion, targetPokemon, changePokemon;
	file >> mode;
	this->gameMode = mode;
	int myDamage, enemyDamage;
	while (file >> select)
	{
		if (select == "Battle")
		{
			file >> ownSkill >> enemySkill;
			this->myself.pokemonList[0].useSkill(ownSkill);
			this->opponent.pokemonList[0].useSkill(enemySkill);
			countDamage(this->myself.pokemonList[0], this->opponent.pokemonList[0], this->myself.pokemonList[0].getSkill(ownSkill));
			countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
			this->turn++;
		}
		else if (select == "Bag")
		{
			file >> potion >> targetPokemon;
			cout << "Open Bag" << endl;
			for (int i = 0; i < this->myself.pokemonList.size(); i++)
			{
				if (this->myself.pokemonList[i].getName() == targetPokemon)
				{
					this->myself.pokemonList[i].setHP(this->myBag.usePotion(potion, this->gameMode) + this->myself.pokemonList[i].getHP());
				}
			}
			file >> enemySkill;
			countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
			this->turn++;
		}
		else if (select == "Status")
		{
			this->myself.pokemonList[0].printStatus();
			this->opponent.pokemonList[0].printStatus();
			cout << endl;
		}
		else if (select == "Check")
		{
			for (int i = 0; i < this->myself.pokemonList[0].getSkillList().size(); i++)
			{
				cout << this->myself.pokemonList[0].getSkillList()[i].getName() << " " << this->myself.pokemonList[0].getSkillList()[i].getPP() << " ";
			}
			cout << endl;
		}
		else if (select == "Pokemon")
		{
			file >> changePokemon;
			for (int i = 1; i < this->myself.pokemonList.size(); i++)
			{
				if (this->myself.pokemonList[i].getName() == changePokemon)
				{
					swap(this->myself.pokemonList[i], this->myself.pokemonList[0]);
				}
			}
			file >> enemySkill;
			countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
		}
		else if (select == "Run")
		{
			system("Pause");
		}
	}
}

void Game::selectCommand(string input)
{

}
