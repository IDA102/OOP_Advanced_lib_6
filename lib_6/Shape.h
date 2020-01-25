#pragma once
#include "H.h"

enum COLOR { RED, GREEN, BLUE };

class Shape
{
	COLOR q = RED;
public:
	Shape(const int a = 0);
	virtual void WhereAmI();
	virtual void Inflate(const int) = 0;
};

