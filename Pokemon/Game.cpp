#include "Game.h"
#include <iostream>
#include <conio.h>
#include <sstream>
#include <fstream>

using namespace std;

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
	cout << "Turn " << this->turn << endl;
}

int Game::countDamage(Pokemon move, Pokemon target, Skill use)
{
	float damage = 0;

	float test1 = float(move.getAtk()) / target.getDef();
	float test2 = float(move.getSpAtk()) / target.getSpDef();
	if (use.getAtkType() == "Physical")
	{
		if (this->gameMode == "Test")
		{
			if (move.getType1() == use.getSkillType() || move.getType2() == use.getSkillType())
			{
				damage = (((2 * move.getLevel() + 10) / 250.0) * use.getPower() * (float(move.getAtk()) / target.getDef()) + 2) * 1 * 1.5 * this->restrainList[use.getSkillType()][target.getType1()] * this->restrainList[use.getSkillType()][target.getType2()];
			}
			else
			{
				damage = (((2 * move.getLevel() + 10) / 250.0) * use.getPower() * (float(move.getAtk()) / target.getDef()) + 2) * 1 * 1 * this->restrainList[use.getSkillType()][target.getType1()] * this->restrainList[use.getSkillType()][target.getType2()];
			}
		}
		else if (this->gameMode == "Normal")
		{
			//have free time will write,the accuracy of skill isn't 100%
		}

	}
	else if (use.getAtkType() == "Special")
	{
		if (this->gameMode == "Test")
		{
			if (move.getType1() == use.getSkillType() || move.getType2() == use.getSkillType())
			{
				damage = (((2 * move.getLevel() + 10) / 250.0) * use.getPower() * (float(move.getSpAtk()) / target.getSpDef()) + 2) * 1 * 1.5 * this->restrainList[use.getSkillType()][target.getType1()] * this->restrainList[use.getSkillType()][target.getType2()];
			}
			else
			{
				damage = (((2 * move.getLevel() + 10) / 250.0) * use.getPower() * (float(move.getSpAtk()) / target.getSpDef()) + 2) * 1 * 1 * this->restrainList[use.getSkillType()][target.getType1()] * this->restrainList[use.getSkillType()][target.getType2()];
			}
		}
		else if (this->gameMode == "Normal")
		{
			//have free time will write,the accuracy of skill isn't 100%
		}
	}
	else if (use.getAtkType() == "Status")
	{
		damage = 0;
	}
	int finalDamage = floor(damage);
	cout << move.getName() << " use " << use.getName() << " to make " << finalDamage << " on " << target.getName() << "!" << endl;
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
	return finalDamage;
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
	int myDamage = 0, enemyDamage = 0;
	while (file >> select)
	{
		printTurn();
		if (select == "Battle")
		{
			file >> ownSkill >> enemySkill;
			this->myself.pokemonList[0].useSkill(ownSkill);
			this->opponent.pokemonList[0].useSkill(enemySkill);
			if (this->myself.pokemonList[0].getSpeed() >= this->opponent.pokemonList[0].getSpeed())
			{
				myDamage = countDamage(this->myself.pokemonList[0], this->opponent.pokemonList[0], this->myself.pokemonList[0].getSkill(ownSkill));
				this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - myDamage);
				if (this->opponent.pokemonList[0].getHP() > 0)
				{
					enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
					this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);
				}
				else
				{
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
					}
				}
			}
			else
			{
				enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
				this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);
				if (this->myself.pokemonList[0].getHP() > 0)
				{
					myDamage = countDamage(this->myself.pokemonList[0], this->opponent.pokemonList[0], this->myself.pokemonList[0].getSkill(ownSkill));
					this->opponent.pokemonList[0].setHP(this->opponent.pokemonList[0].getHP() - myDamage);
				}
				else
				{
					cout << "Your Pokemon Die! Please open your pokemon bag to choose a new one!" << endl;
				}
			}
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
			enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
			this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);
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
			enemyDamage = countDamage(this->opponent.pokemonList[0], this->myself.pokemonList[0], this->opponent.pokemonList[0].getSkill(enemySkill));
			this->myself.pokemonList[0].setHP(this->myself.pokemonList[0].getHP() - enemyDamage);
			this->turn++;
		}
		else if (select == "Run")
		{
			cout << "Run!" << endl;
			system("Pause");
		}
	}
}

void Game::selectCommand(string input)
{

}
