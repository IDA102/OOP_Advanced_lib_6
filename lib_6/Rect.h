#pragma once
#include "H.h"
class Rect : public Shape
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
public:
	Rect(int color = 0, int x_1 = 0, int y_1 = 0, int x_2 = 0, int y_2 = 0);
	virtual Shape* COPY() const;
	virtual float space();
	virtual void Inflate(const int a = 0);
	friend ostream& operator<<(ostream& os, const Rect &ms);
};