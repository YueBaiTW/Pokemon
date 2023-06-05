#include "Pokemon.h"
#include <iostream>

using namespace std;

Pokemon::Pokemon()
{
	this->name = "";
	this->type1 = "";
	this->type2 = "";
	this->hp = 0;
	this->atk = 0;
	this->def = 0;
	this->spAtk = 0;
	this->spDef = 0;
	this->speed = 0;
	this->level = 50;
	this->skill.clear();
	this->negativeEffect.clear();
}

Pokemon::Pokemon(string name, string type1, string type2, int hp, int atk, int def, int spAtk, int spDef, int speed,int level)
{
	this->name = name;
	this->type1 = type1;
	this->type2 = type2;
	this->hp = hp;
	this->atk = atk;
	this->def = def;
	this->spAtk = spAtk;
	this->spDef = spDef;
	this->speed = speed;
	this->level = level;
	this->skill.clear();
	this->negativeEffect.clear();
}

void Pokemon::setName(string name)
{
	this->name = name;
}

void Pokemon::setType1(string type)
{
	this->type1 = type;
}

void Pokemon::setType2(string type)
{
	this->type2 = type;
}

void Pokemon::setHP(int hp)
{
	if (hp >= this->hpLimit)
	{
		this->hp = hp;
	}
	else
	{
		this->hp = hp;
	}
}

void Pokemon::setHPLimit(int hpLimit)
{
	this->hpLimit = hpLimit;
}

void Pokemon::setAtk(int atk)
{
	this->atk = atk;
}

void Pokemon::setDef(int def)
{
	this->def = def;
}

void Pokemon::setSpAtk(int spAtk)
{
	this->spAtk = spAtk;
}

void Pokemon::setSpDef(int spDef)
{
	this->spDef = spDef;
}

void Pokemon::setSpeed(int speed)
{
	this->speed = speed;
}

void Pokemon::setLevel(int level)
{
	this->level = level;
}

void Pokemon::setNegativeEffect(string negativeEffect)
{
	this->negativeEffect.push_back(negativeEffect);
}

string Pokemon::getName()
{
	return this->name;
}

string Pokemon::getType1()
{
	return this->type1;
}

string Pokemon::getType2()
{
	return this->type2;
}

int Pokemon::getHP()
{
	return this->hp;
}

int Pokemon::getAtk()
{
	return this->atk;
}

int Pokemon::getDef()
{
	return this->def;
}

int Pokemon::getSpAtk()
{
	return this->spAtk;
}

int Pokemon::getSpDef()
{
	return this->spDef;
}

int Pokemon::getSpeed()
{
	return this->speed;
}

int Pokemon::getLevel()
{
	return this->level;
}

vector<string> Pokemon::getNegativeEffect()
{
	return this->negativeEffect;
}

void Pokemon::addSkill(Skill temp)
{
	this->skill.push_back(temp);
}

bool Pokemon::useSkill(string name)
{
	bool exist;
	for (int i = 0; i < skill.size(); i++)
	{
		if (this->skill[i].getName() == name && this->skill[i].getPP() > 0)
		{
			exist = true;
			this->skill[i].setPP(this->skill[i].getPP() - 1);
			break;
		}
		else
		{
			exist = false;
		}
	}
	return exist;
}

Skill Pokemon::getSkill(string name)
{
	for (int i = 0; i < this->skill.size(); i++)
	{
		if (this->skill[i].getName() == name)
		{
			return this->skill[i];
		}
	}
}

vector<Skill> Pokemon::getSkillList()
{
	return this->skill;
}

void Pokemon::printStatus()
{
	cout << this->name << " " << this->hp << " ";
	for (int i = 0; i < this->negativeEffect.size(); i++)
	{
		cout << this->negativeEffect[i] << " ";
	}
}

void Pokemon::printSkill()
{
	for (int i = 0; i < this->skill.size(); i++)
	{
		cout << this->skill[0].getName();
	}
}

void Pokemon::updateSkill(Skill input)
{
	for (int i = 0; i < this->skill.size(); i++)
	{
		if (this->skill[i].getName() == input.getName())
		{
			this->skill[i].setName(input.getName());
			this->skill[i].setSkillType(input.getSkillType());
			this->skill[i].setAtkType(input.getAtkType());
			this->skill[i].setPower(input.getPower());
			this->skill[i].setAccuracy(input.getAccuracy());
			this->skill[i].setPP(input.getPP());
			this->skill[i].setNegativeEffect(input.getNegativeEffect());
		}
	}
}
