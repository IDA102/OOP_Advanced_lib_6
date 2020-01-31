#include "Circle.h"
Circle::Circle(int color, int x_1, int y_1, int m_radius) :Shape(color)
{
	if ((x_1 > 0) & (y_1 > 0) & (m_radius > 0))
	{
		x1 = x_1;
		y1 = y_1;
		radius = m_radius;
	}
	else { cout << "\nERROR PARAMETERS CIRCLE\n" ;}
}
Shape* Circle::COPY() const
{
	return new Circle(*this);
}
float Circle::space() const
{
	return (float)(radius*radius*3.14);
}
void Circle::Inflate(int a)
{
	if(a > 0)	radius = radius + a;
	else	 cout << "\nERROR PARAMETER INFLATE CIRCLE\n";
}
bool Circle::operator==(const Shape * p_S)
{
	if (typeid(Circle) == typeid(*p_S))// Пришлось кастовать, т.к. нельзя перегрузить в Shape из-за типа параметра
	{
		const Circle *prom = dynamic_cast<const Circle*>(p_S);
		if ((q == prom->q) && (x1 == prom->x1) && (y1 == prom->y1) && (radius == prom->radius))	return true;
		else																					return false;
	}
	else return false;
}
bool Circle::operator!=(const Shape * p_S)
{
	if (typeid(Circle) == typeid(*p_S))// Пришлось кастовать, т.к. нельзя перегрузить в Shape из-за типа параметра
	{
		const Circle *prom = dynamic_cast<const Circle*>(p_S);
		if ((q == prom->q) && (x1 == prom->x1) && (y1 == prom->y1) && (radius == prom->radius))	return false;
		else																					return true;
	}
	else return true;
}
