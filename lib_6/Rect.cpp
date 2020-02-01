#include "Rect.h"

Rect::Rect(int color, int x_1, int y_1, int x_2, int y_2) : Shape(color)
{
	if ( (x_1 > 0) & (x_2 > 0) & (y_1 > 0) & (y_2 > 0) & (x_2 > x_1) & (y_1 > y_2) )
	{
		x1 = x_1;
		y1 = y_1;
		x2 = x_2;
		y2 = y_2;
	}
	else { cout << "\nERROR PARAMETERS RECT\n"; }
}
Shape* Rect::COPY() const
{
	return new Rect(*this);
}
float Rect::space() const
{
	return (float)(x1-x2)*(y2-y1);
}
void Rect::Inflate(int a)
{
	if (a > 0)
	{
		x1 = x1 + a;
		x2 = x2 + a;
	}
	else { cout << "\nERROR PARAMETER INFLATE RECT\n"; }
}
/*Shape & Rect::operator=(const Rect &s)
{
	q = s.q;
	x1 = s.x1;
	x2 = s.x2;
	y1 = s.y1;
	y2 = s.y2;
	return *this;
}*/
bool Rect::operator==(const Shape *p_S)
{
	if (typeid(Rect) == typeid(*p_S))// Пришлось кастовать, т.к. нельзя перегрузить в Shape из-за типа параметра
	{
		const Rect *prom = dynamic_cast<const Rect*>(p_S);
		if ((q ==  prom->q) && (x1 == prom->x1) && (x2 == prom->x2) && (y1 == prom->y1) && (y2 == prom->y2))	return true;
		else																									return false;
	}
	else return false;
}
bool Rect::operator!=(const Shape * p_S)
{
	if (typeid(Rect) == typeid(*p_S))// Пришлось кастовать, т.к. нельзя перегрузить в Shape из-за типа параметра
	{
		const Rect *prom = dynamic_cast<const Rect*>(p_S);
		if ((q == prom->q) && (x1 == prom->x1) && (x2 == prom->x2) && (y1 == prom->y1) && (y2 == prom->y2))	return false;
		else																								return true;
	}
	else return true;
}
