#pragma once
#include "String.h"
#include <list>
using namespace std;
class Player
{
public:
	Player();
	~Player();
public:
	bool FindSpell(String spell);
private:
	list<String> spells = { "Eclipse", "Eruption", "Frostbite", "Levitate", "Mirage", "Petrify", "Polymorph", "Teleport", "Thunderwave", "Vortex" };
};

