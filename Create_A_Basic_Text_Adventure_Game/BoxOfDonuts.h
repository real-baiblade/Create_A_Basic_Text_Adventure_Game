#pragma once
#include "Item.h"
class BoxOfDonuts : public Item
{
public:
	BoxOfDonuts();
public:
	virtual void Description() const;
	virtual void Use();
private:
	int count;
};

