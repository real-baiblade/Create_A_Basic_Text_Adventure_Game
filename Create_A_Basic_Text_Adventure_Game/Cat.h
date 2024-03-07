#pragma once
#include "Item.h"
#include <iostream>
class Cat : public Item
{
public:
	Cat();
public:
	virtual void Description() const;
	virtual void Use();
private:
	bool purring;
};

