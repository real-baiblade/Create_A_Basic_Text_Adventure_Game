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
	String spells[10] = {"Eclipse", "Eruption", "Frostbite", "Levitate", "Mirage", "Petrify", "Polymorph", "Teleport", "Thunder", "Vortex"};
};

