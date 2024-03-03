#pragma once
#include "Item.h"
class Lamp : public Item
{
public:
	Lamp();
public:
	virtual void Description() const;
	virtual void Use();
private:
	bool turnedOn;
};

