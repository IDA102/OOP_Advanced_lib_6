#include "List.h"

List::List()
{
	m_size = 0;
	Head.pNext = &End;
	End.pPrev = &Head;
}
List::List(const List &s)
{
	Head.pNext = &End;
	End.pPrev = &Head;
	m_size = 0;

	Node *prom2 = s.Head.pNext;
	for (size_t i = 0; i < s.m_size; i++)
	{
		ATE(*(prom2->m_Data));
		prom2 = prom2->pNext;
	}
}
List::List(List &&s)//Дописать удаление своих данных, для предотвращения утечки
{
	//Clear
	if(this->m_size != 0) DELETE_ALL();
	//Изымаем
	Head.pNext = s.Head.pNext;
	End.pPrev = s.End.pPrev;

	Head.pNext->pPrev = &Head;
	End.pPrev->pNext = &End;
	
	s.Head.pNext = &s.End;
	s.End.pPrev = &s.Head;

	int q = this->m_size;
	this->m_size = s.m_size;
	s.m_size = q;
}
List& List::operator=(const List &s)
{
	if (this != &s)
	{
		if ((this->m_size) > (s.m_size))
		{
			do
			{
				this->DELETE_ONE();
			} while ((this->m_size) != (s.m_size));
			this->RECOPPY(s);
		}
		else if ((this->m_size) == (s.m_size))
		{
			this->RECOPPY(s);
		}

		else if ((this->m_size) < (s.m_size))
		{
			do
			{
				this->ATH(Circle(0, 1, 1, 1));
			} while ((this->m_size) != (s.m_size));
			this->RECOPPY(s);
		}
	}
	return *this;
}
List & List::operator=(List &&s)
{	//Clear
	if (this->m_size != 0) this->DELETE_ALL();
	//Изымаем
	Head.pNext = s.Head.pNext;
	End.pPrev = s.End.pPrev;

	Head.pNext->pPrev = &Head;
	End.pPrev->pNext = &End;

	s.Head.pNext = &s.End;
	s.End.pPrev = &s.Head;

	int q = this->m_size;
	this->m_size = s.m_size;
	s.m_size = q;
	
	return *this;
}
bool List::operator==(const List &s)
{
	if ( this->m_size == s.m_size)
	{
		int i = m_size;
		Node *prom = this->Head.pNext;
		Node *prom2 = s.Head.pNext;
		do
		{
			if (*(prom->m_Data) != prom2->m_Data) { return false; }
			prom = prom->pNext;
			prom2 = prom2->pNext;
			i--;
		} while (i != 0);
		return  true;
	}
	else return false;
}
void List::ATH(const Shape &p_S)
{	
	new Node(&Head,Head.pNext,&p_S);
	m_size++;
}
void List::ATE(const Shape &p_S)
{
	new Node(End.pPrev, &End, &p_S);
	m_size++;
}
bool List::DTO(const Shape &p_S)
{
	Node *prom = Head.pNext;
	while (prom->pNext != &this->End)//(prom->pNext != 0)
	{
		if ( *(prom->m_Data) == &p_S)
		{
			delete prom;
			m_size--;
			return true;
		}
		else
		{
			prom = prom->pNext;
		}
	}
	return false;
}
bool List::DELETE_ONE()
{
	Node *prom = Head.pNext;
	if ( (prom != &this->End) && (prom->pNext != 0) )
	{
		delete prom;
		m_size--;
		return true;
	}
	else return false;
}
bool List::DELETE_DATA(Node &r_N)
{
	if (r_N.m_Data != 0)
	{
		delete r_N.m_Data;
		return true;
	}
	return false;
}
int List::DTAE(const Shape & p_S)
{
	int cnt = 0;
	Node *prom = Head.pNext;
	while (prom->pNext != 0)
	{
		if (*(prom->m_Data) == &p_S)
		{
			prom = prom->pNext;
			delete prom->pPrev;
			m_size--;
			cnt++;
		}
		else
		{
			prom = prom->pNext;
		}
	}
	return cnt;
}
bool List::DELETE_ALL()
{
	Node *prom = Head.pNext;
	while (prom->pNext != 0)
	{
		delete prom->m_Data;
		prom->m_Data = 0;
		delete prom;
		m_size--;
		prom = Head.pNext;
	}
	prom = 0;
	return true;
}
void List::SORT()
{
	int k = 1;
	Node *prom = 0;
	Node *prom2 = 0;
	Node *p= 0;
	if (m_size >= 4)
	{	

		for (size_t i = 0; i < m_size - k; i++)
		{
			prom = Head.pNext;
			prom2 = prom->pNext;
			for (size_t i = 0; i < m_size - k; i++)
			{
				if (prom2->m_Data->space() < prom->m_Data->space())
				{
					prom->pPrev->pNext = prom->pNext;
					prom2->pPrev = prom->pPrev;
					prom->pNext = prom2->pNext;
					prom2->pNext->pPrev = prom;
					prom->pPrev = prom2;
					prom2->pNext = prom;

					prom2 = prom->pNext;
				}
				else
				{
					prom = prom->pNext;
					prom2 = prom2->pNext;
				}

			}
		}
	}

}
void List::RECOPPY(const List &s)
{
	Node *prom = this->Head.pNext;
	Node *prom2 = s.Head.pNext;
	for (int cnt = 0; cnt < m_size; cnt++)
	{
		if (typeid(prom->m_Data) == typeid (prom2->m_Data))
		{
			*prom->m_Data = *prom2->m_Data;
			prom = prom->pNext;
			prom2 = prom2->pNext;
		}
		else
		{
			DELETE_DATA(*prom);
			*prom->m_Data = *prom2->m_Data->COPY();
			prom = prom->pNext;
			prom2 = prom2->pNext;
		}
	}
}

/*
int List::get_size()
{
	return m_size;
};
*/ 