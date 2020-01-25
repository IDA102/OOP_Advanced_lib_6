#include "H.h"

Shape::Shape(const int a)
{
	if (((int)a > -1) && ((int)a < 3))
	{
		q = COLOR(a);
	}
}
bool Shape::operator==(const Shape &ps)
{
	if(typeid(this) == typeid(ps))	return true;
	else	return false;
}
