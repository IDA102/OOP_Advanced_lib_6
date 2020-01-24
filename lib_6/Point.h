#pragma once
//#include "H.h"
#include <iostream>
using namespace std;
class Point
{
	int x = 0;
	int y = 0;
public:
	Point();
	Point(int x_x, int y_y);
	Point(const Point &s);
	Point(Point &&s);
	Point& operator=(const Point &s);
	Point& operator=(Point &&s);
	bool operator==(const Point &s);
	friend ostream& operator<<(ostream &os, const Point &ms);
};

