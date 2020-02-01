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
	void ATH(const Shape &p_S);//�������� ������ � ������
	void ATE(const Shape &p_S);//�������� ������ � �����
	bool DTO(const Shape &p_S);//������� 1 ��������� �������
	bool DELETE_ONE();//������� 1 ������� � ������ List
	bool DELETE_DATA(Node &r_N);//������� ������ �� �������� Node ������ List
	int DTAE(const Shape &p_S);//������� ��� ��������� ��������
	bool DELETE_ALL();//������� List
	void SORT();//���������� �� �������
	void RECOPPY(const List &s);//����������� ��� ��������
	//int get_size();
};

