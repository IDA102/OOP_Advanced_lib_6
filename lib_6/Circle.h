#pragma once
#include "H.h"
class Circle : public Shape
{
	int x1 = 0;
	int y1 = 0;
	int radius = 0;
public:
	Circle();
	Circle(const int color = 0, const int x_1 = 0, const int y_1 = 0, const int m_radius = 0);
	virtual float space();
	virtual void Inflate(const int a = 0);
};
