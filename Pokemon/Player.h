#pragma once
#include "Pokemon.h"
#include "Potion.h"
#include <string>
#include <vector>

using namespace std;

class Player
{
public:
	vector<Pokemon> pokemonList;
	Player();
	void addPokemon(Pokemon input);
};
