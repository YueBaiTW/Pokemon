#include "Player.h"
#include "Pokemon.h"
#include "Potion.h"
#include "Bag.h"
#include <map>
#include <string>

using namespace std;

class Game
{

public:
	Game();
	void initialize();
	void selectMode();
	void printTurn();
	int countDamage(Pokemon move, Pokemon target, Skill use);
	void loadFile();
	void selectCommand(string input);

private:

	Player myself, opponent;

	Bag myBag, oppoBag;
	vector<Skill> allSkill;

	map<string, map<string, double>> restrainList;
	string gameState;
	string gameMode;
	int turn;


};