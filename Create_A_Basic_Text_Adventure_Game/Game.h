#pragma once
#include "Player.h"
#include "Room.h"
class Game
{
public:
	Game();
	~Game();
public:
	void Run();
private:
	Player* player;
	Room rooms[5][5];
};

