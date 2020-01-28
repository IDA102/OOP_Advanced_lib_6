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
float Rect::space()
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