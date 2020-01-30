#pragma once
#include "H.h"

enum COLOR { RED, GREEN, BLUE };

class Shape
{
protected:
	COLOR q = RED;
public:
	Shape(const int a = 0);
	virtual Shape *COPY() const = 0 ;
	virtual void Inflate(const int) = 0;
};

