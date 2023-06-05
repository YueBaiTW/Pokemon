#include "Player.h"

Player::Player()
{
	this->pokemonList.clear();
}

void Player::addPokemon(Pokemon input)
{
	this->pokemonList.push_back(input);
}
