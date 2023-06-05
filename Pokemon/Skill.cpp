#include "Skill.h"

using namespace std;

Skill::Skill()
{
	this->name = "";
	this->skillType = "";
	this->atkType = "";
	this->power = 0;
	this->accuracy = 0;
	this->pp = 0;
	this->ppLimit = 0;
	this->negativeEffect = "";
}

void Skill::setName(string name)
{
	this->name = name;
}

void Skill::setSkillType(string skillType)
{
	this->skillType = skillType;
}

void Skill::setAtkType(string atkType)
{
	this->atkType = atkType;
}

void Skill::setPower(int power)
{
	this->power = power;
}

void Skill::setAccuracy(int accuracy)
{
	this->accuracy = accuracy;
}

void Skill::setPP(int pp)
{
	if (this->pp < 0)
	{
		return;
	}
	else
	{
		this->pp = pp;
	}
}

void Skill::setPPLimit(int ppLimit)
{
	this->ppLimit = ppLimit;
}

void Skill::setNegativeEffect(string negativeEffect)
{
	this->negativeEffect = negativeEffect;
}

string Skill::getName()
{
	return this->name;
}

string Skill::getSkillType()
{
	return this->skillType;
}

string Skill::getAtkType()
{
	return this->atkType;
}

int Skill::getPower()
{
	return this->power;
}

int Skill::getAccuracy()
{
	return this->accuracy;
}

int Skill::getPP()
{
	return this->pp;
}

int Skill::getPPLimit()
{
	return this->ppLimit;
}

string Skill::getNegativeEffect()
{
	return this->negativeEffect;
}
