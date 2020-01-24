#include "Point.h"
Point::Point() {}
Point::Point(int x_x, int y_y)
{
	x = x_x;
	y = y_y;
};
Point::Point(const Point &s)
{
	x = s.x;
	y = s.y;
}
Point::Point(Point &&s)
{
	int prom = x;
	x = s.x;
	s.x = prom;

	prom = y;
	y = s.y;
	s.y = prom;
}
Point & Point::operator=(const Point &s)
{
	x = s.x;
	y = s.y;
	return *this;
}
Point & Point::operator=(Point &&s)
{
	int prom = x;
	x = s.x;
	s.x = prom;

	prom = y;
	y = s.y;
	s.y = prom;
	return *this;
}
bool Point::operator==(const Point &s)
{
	if ((x == s.x) && (y == s.y))
	{
		return true;
	}
	else
	{
		return false;
	}
};