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
		Circle m_Data;
		Node();
		~Node();
		Node(Node *p, Node *n, const Circle *ps);
		bool operator==(const Circle *ps);
		friend class List;
		
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
	void ATH(const Circle &p_C);
	void ATE(const Circle &p_C);
	bool DTO(const Circle &p_C);
	int DTAE(const Circle &p_C);
	bool DELITE_ALL();
	void SORT();
	int get_size();

};

