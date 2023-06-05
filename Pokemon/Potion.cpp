#include "Potion.h"

Potion::Potion()
{
	this->name = "";
	this->healAmount = 0;
	this->frequency = 10;
}

Potion Potion::getPotion()
{
	return *this;
}

void Potion::setHealAmount(int initAmount)
{
	this->healAmount = initAmount;
}

void Potion::setFrequency(int initFrequency)
{
	this->frequency = initFrequency;
}

void Potion::setName(string name)
{
	this->name = name;
}

string Potion::getName()
{
	return this->name;
}

int Potion::getHealAmount()
{
	return this->healAmount;
}

int Potion::getFrequency()
{
	return this->frequency;
}
