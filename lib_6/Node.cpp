#include "List.h"

List::Node::Node() {};
List::Node::~Node() 
{
	if ((this->pNext != 0)&& (this->pPrev != 0))
	{
		stop
		pPrev->pNext = pNext;
		pNext->pPrev = pPrev;
	}


};
List::Node::Node(Node *p, Node *n,const Shape &ps)
{
	pPrev = p;
	pNext = n;	
	*m_Data = ps;
}
bool List::Node::operator==(const Shape &ps)
{
	if (*m_Data == ps)
	{
		return  true;
	}
	else
	{
		return false;
	}
};
