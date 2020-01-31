#pragma once
#include "H.h"
#include "Circle.h"
class List
{
	friend ostream& operator<<(ostream &os, const List &ms);
	class Node
	{
		friend class List;
		Node* pPrev = 0;
		Node* pNext = 0;
		Shape *m_Data = 0;
		~Node();
		Node(Node *p = 0 , Node *n = 0 , const Shape *ps = 0);
		//bool operator==(const Circle *ps);
		friend ostream& operator<<(ostream &os, const List &ms);
	};
	Node Head;
	Node End;
	size_t m_size = 0;
public:
	List();
	List(const List &s);
	List(List &&s);
	List& operator=(const List &s);
	List& operator=(List &&s);
	bool operator==(const List &s);
	void ATH(const Shape &p_S);//Добавить объект в начало
	void ATE(const Shape &p_S);//Добавить объект в конец
	bool DTO(const Shape &p_S);//Удалить 1 найденный элемент
	int DTAE(const Shape &p_S);//Удалить все найденные элементы
	bool DELITE_ALL();
	void SORT();//Сортировка по площади
	//int get_size();

};

