#include "Circle.h"

Circle::Circle() {}
Circle::Circle(int x, int y, int r) :q(x, y)
{
	radius = r;
};
Circle::Circle(Point * p, int r)
{
	q = *p;
	radius = r;
}
Circle::Circle(const Circle & s)
{
	q = s.q;
	radius = s.radius;
}
Circle::Circle(Circle && s)
{
	int prom = s.radius;
	radius = s.radius;
	s.radius = prom;
	q = s.q;
};
int Circle::get()
{
	return radius;
}
Circle & Circle::operator=(const Circle &s)
{
	q = s.q;
	radius = s.radius;
	return *this;
}
Circle & Circle::operator=(Circle &&s)
{
	int prom = s.radius;
	radius = s.radius;
	s.radius = prom;
	Point p_prom = q;
	q = s.q;
	s.q = p_prom;
	return *this;
}
bool Circle::operator==(const Circle &s)
{
	if ((radius == s.radius) && (q == s.q))
	{
		return true;
	}
	else
	{
		return false;
	}
};
