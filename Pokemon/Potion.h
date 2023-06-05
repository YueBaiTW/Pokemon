#pragma once
#include <string>

using namespace std;

class Potion
{
private:

	string name;
	int healAmount;
	int frequency;

public:
	Potion();
	Potion getPotion();
	void setHealAmount(int initAmount);
	void setFrequency(int initFrequency);
	void setName(string name);
	string getName();
	int getHealAmount();
	int getFrequency();
};
