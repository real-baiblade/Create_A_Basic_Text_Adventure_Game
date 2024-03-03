#pragma once
#include "String.h"
#include "Item.h"
using namespace std;
class Room
{
public:
	Room(String description, Item* item);
	~Room();
public:
	void Description() const;
private:
	Item* item;
	String description;
};

