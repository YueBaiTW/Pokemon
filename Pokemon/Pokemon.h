#pragma once
#include <string>
#include <vector>
#include "Skill.h"

using namespace std;

class Pokemon
{
private:

	string name;
	string type1;
	string type2;
	int hp;
	int hpLimit;
	int atk;
	int def;
	int spAtk;
	int spDef;
	int speed;
	int level;
	vector<string> negativeEffect;
	vector<Skill> skill;

public:

	Pokemon();
	Pokemon(string name, string type1, string type2, int hp, int atk, int def, int spAtk, int spDef, int speed,int level);
	void setName(string name);
	void setType1(string type);
	void setType2(string type);
	void setHP(int hp);
	void setHPLimit (int hpLimit);
	void setAtk(int atk);
	void setDef(int def);
	void setSpAtk(int spAtk);
	void setSpDef(int spDef);
	void setSpeed(int speed);
	void setLevel(int level);
	void setNegativeEffect(string negativeEffect);
	string getName();
	string getType1();
	string getType2();
	int getHP();
	int getAtk();
	int getDef();
	int getSpAtk();
	int getSpDef();
	int getSpeed();
	int getLevel();
	vector<string> getNegativeEffect();
	void addSkill(Skill temp);
	bool useSkill(string name);
	Skill getSkill(string name);
	vector<Skill> getSkillList();
	void printStatus();
	void printSkill();
	void updateSkill(Skill input);
};
