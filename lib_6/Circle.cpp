#include "Circle.h"
Circle::Circle() {};
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
float Circle::space()
{

	return (radius*radius*3.14);
}
void Circle::Inflate(int a)
{
	if(a > 0)	radius = radius + a;
	else	 cout << "\nERROR PARAMETER INFLATE CIRCLE\n";
}