#include "Bag.h"

Bag::Bag()
{
	this->potion.setName("potion");
	this->potion.setHealAmount(20);
	this->superPotion.setName("SuperPotion");
	this->superPotion.setHealAmount(60);
	this->hyperPotion.setName("HyperPotion");
	this->hyperPotion.setHealAmount(120);
	this->maxPotion.setName("MaxPotion");
	this->maxPotion.setHealAmount(100000);
}

int Bag::usePotion(string name, string mode)
{
	if (name == "Potion")
	{
		if (mode == "Normal" && this->potion.getFrequency() > 0)
		{
			this->potion.setFrequency(this->potion.getFrequency() - 1);
		}
		return this->potion.getHealAmount();
	}
	else if (name == "SuperPotion")
	{
		if (mode == "Normal" && this->superPotion.getFrequency() > 0)
		{
			this->superPotion.setFrequency(this->superPotion.getFrequency() - 1);
		}
		return this->superPotion.getHealAmount();
	}
	else if (name == "HyperPotion")
	{
		if (mode == "Normal" && this->hyperPotion.getFrequency() > 0)
		{
			this->hyperPotion.setFrequency(this->hyperPotion.getFrequency() - 1);
		}
		return this->hyperPotion.getHealAmount();
	}
	else if (name == "MaxPotion")
	{
		if (mode == "Normal" && this->maxPotion.getFrequency() > 0)
		{
			this->maxPotion.setFrequency(this->maxPotion.getFrequency() - 1);
		}
		return this->maxPotion.getHealAmount();
	}
}
