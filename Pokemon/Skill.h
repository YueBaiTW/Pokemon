#pragma once
#include <string>

using namespace std;

class Skill
{

private:
	string name;
	string skillType;
	string atkType;
	int power;
	int accuracy;
	int pp;
	int ppLimit;
	string negativeEffect;

public:
	Skill();
	void setName(string name);
	void setSkillType(string skillType);
	void setAtkType(string atkType);
	void setPower(int power);
	void setAccuracy(int accuracy);
	void setPP(int pp);
	void setPPLimit(int ppLimit);
	void setNegativeEffect(string negativeEffect);
	string getName();
	string getSkillType();
	string getAtkType();
	int getPower();
	int getAccuracy();
	int getPP();
	int getPPLimit();
	string getNegativeEffect();
};
