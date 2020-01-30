#include "List.h"


List::Node::~Node() 
{
	if ((this->pNext != 0)&& (this->pPrev != 0))
	{
		pPrev->pNext = pNext;
		pNext->pPrev = pPrev;
		delete m_Data;
	}


};

List::Node::Node(Node *p, Node *n,const Shape *ps)
{
	pPrev = p;
	pNext = n;
	if (ps != 0)
	{
		m_Data = ps->COPY();
		p->pNext = this;
		n->pPrev = this;
	}
}


/*
bool List::Node::operator==(const Circle * ps)
{
	if (m_Data == *ps)
	{
		return  true;
	}
	else
	{
		return false;
	}
};
*/
