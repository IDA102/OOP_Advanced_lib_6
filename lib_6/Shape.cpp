#include "H.h"

Shape::Shape(const int a)
{
	if (((int)a > -1) && ((int)a < 3))
	{
		q = COLOR(a);
	}
}