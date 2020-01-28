#include "List.h"

List::List()
{
	m_size = 0;
	Head.pNext = &End;
	End.pPrev = &Head;
}


/*
List::List(const List &s)
{
	Head.pNext = &End;
	End.pPrev = &Head;
	m_size = 0;

	Node *prom2 = s.Head.pNext;
	for (size_t i = 0; i < s.m_size; i++)
	{
		ATE(prom2->m_Data);
		prom2 = prom2->pNext;
	}
}
*/

/*
List::List(List && s)//Дописать удаление своих данных, для предотвращения утечки
{
	//Clear
	DELITE_ALL();
	//Изымаем
	Head.pNext = s.Head.pNext;
	End.pPrev = s.End.pPrev;

	Head.pNext->pPrev = &Head;
	End.pPrev->pNext = &End;
	
	s.Head.pNext = &s.End;
	s.End.pPrev = &s.Head;

	this->m_size = s.m_size;

}
*/

/*
List& List::operator=(const List & s)
{
	if (this != &s)
	{
		this->DELITE_ALL();

		Node *prom2 = s.Head.pNext;
		for (size_t i = 0; i < s.m_size; i++)
		{
			ATE(prom2->m_Data);
			prom2 = prom2->pNext;
		}
	}
	return *this;
}
*/

/*
List & List::operator=(List && s)
{	//Clear
	this->DELITE_ALL();
	//Изымаем
	Head.pNext = s.Head.pNext;
	End.pPrev = s.End.pPrev;

	Head.pNext->pPrev = &Head;
	End.pPrev->pNext = &End;

	s.Head.pNext = &s.End;
	s.End.pPrev = &s.Head;
	return *this;
}
*/

void List::ATH(const Shape &p_S)//------------В Shape и Rect добавить const Методы присваивания
{	
	Node *prom = Head.pNext;
	Head.pNext =  new Node(&Head,Head.pNext,&p_S);
	prom->pPrev = Head.pNext;
	m_size++;
}

/*
void List::ATE(const Circle & p_C)
{
	Node *prom = End.pPrev;
	End.pPrev = new Node(End.pPrev, &End, &p_C);
	prom->pNext = End.pPrev;
	m_size++;
}
*/

/*
bool List::DTO(const Circle & p_C)
{
	Node *prom = Head.pNext;
	while (prom->pNext != &this->End)//(prom->pNext != 0)
	{
		if (prom->m_Data == p_C)
		{
			prom = prom->pNext;
			delete prom->pPrev;
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
*/

/*
int List::DTAE(const Circle & p_C)
{
	int cnt = 0;
	Node *prom = Head.pNext;
	while (prom->pNext != 0)
	{
		if (prom->m_Data == p_C)
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
*/

/*
bool List::DELITE_ALL()
{
	Node *prom = Head.pNext;
	while (prom->pNext != 0)
	{
		delete prom;
		m_size--;
		prom = Head.pNext;
	}
	prom = 0;
	return true;
}
*/

/*
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
				if (prom2->m_Data.get() < prom->m_Data.get())
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
*/

/*
int List::get_size()
{
	return m_size;
};
*/