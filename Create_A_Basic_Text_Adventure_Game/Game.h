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
		"The room is run down and cramped, the walls are made of large stone bricks. The bricks are crumbling. The ceiling is only a few inches taller than you.", 
		"The room is painted bright colours, each wall different to the others, one is blue, one is yellow, one is green and the last is pink.", 
		"This room looks well used, it is full of shelves with a desk against the far wall. every surface is covered in maps, all of different places.", 
		"This room is covered wall to wall in vines. Under the vines, the walls are covered in moss. The wilderness has clearly taken this room for itself.", 
		"The room looks to be filled with many insects. An explorer previous to you has used this space as a terrarium of sorts, a showcase of different species.", 
		"The room has a tree spiralling up from each corner. The room seems to be built with the trees in the corners as the foundations, rather than the floor underneath.",
		"This room is decorated like the insides of a ship. Ropes hang from the ceiling, and sails hang down the walls. A mast stands tall in the middle of the room.", 
		"This room is filled with potted plants, an explorer previous to you has used this room to grow and cultivate plants of all kinds, from many different lands.", 
		"As you walk through the door, you only see the fog, you can just make out large thick trees in the distance. The room is built larger than the rest of the rooms combined." 
	};
};