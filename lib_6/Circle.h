#pragma once
#include "Point.h"
#include <iostream>
using namespace std;
class Circle
{
	Point q;
	int radius = 0;
public:
	Circle();
	Circle(int x,int y, int r);
	Circle(Point *p, int r);
	Circle(const Circle &s);
	Circle(Circle &&s);
	int get();
	Circle& operator=(const Circle &s);
	Circle& operator=(Circle &&s);
	bool operator==(const Circle &s);
	friend ostream& operator<<(ostream &os, const Circle &ms);
};

