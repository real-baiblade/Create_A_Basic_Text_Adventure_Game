#pragma once
#include "Player.h"
#include "Room.h"
#include "Lamp.h"
#include "BoxOfDonuts.h"
#include "Cat.h"
class Game
{
public:
	Game();
	~Game();
public:
	void Run();
private:
	String Descripts[3][3] = { 
		{"a", "b", "c"}, // change these descriptions
		{"d", "e", "f"},
		{"g", "h", "i"} 
	};
};

