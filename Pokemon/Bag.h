#pragma once
#include "Potion.h"
#include <string>

using namespace std;

class Bag
{
private:
	Potion potion, superPotion, hyperPotion, maxPotion;

public:
	Bag();
	int usePotion(string name,string mode);
};
