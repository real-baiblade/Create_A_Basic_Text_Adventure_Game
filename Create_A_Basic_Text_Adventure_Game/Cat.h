#pragma once
#include "Item.h"
class Cat
{
public:
	Cat();
public:
	virtual void Description() const;
	virtual void Use();
private:
	bool purring;
};

