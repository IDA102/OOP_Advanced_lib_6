#pragma once
#include "H.h"

enum COLOR { RED, GREEN, BLUE };

class Shape
{
protected:
	COLOR q = RED;
public:
	Shape(const int a = 0);
	virtual float space() const = 0;
	virtual Shape *COPY() const = 0;
	virtual void Inflate(const int) = 0;
	virtual bool operator ==(const Shape *p_S) const = 0;

};

 