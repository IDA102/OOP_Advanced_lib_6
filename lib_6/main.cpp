#include "H.h"

ostream& operator<<(ostream &os, const Circle &ms)
{
	os << "Circle-----" << "COLOR = "<< ms.q << "	x1 = " << ms.x1  << "	y1 = " << ms.y1 << "	radius = " << ms.radius << endl;
	return os;
}

ostream& operator<<(ostream &os, const Rect &ms)
{
	os << "Rect-------" << "COLOR = " << ms.q << "	x1 = " << ms.x1 << "	y1 = " << ms.y1 << "	x2 = " << ms.x2 << "	y2 = " << ms.y2 << endl;
	return os;
}

ostream& operator<<(ostream &os, const List &ms)
{
	const List::Node *p = &ms.Head;
	p = p->pNext;
	for (size_t i = 0; i < ms.m_size; i++)
	{
			if (typeid(*p->m_Data) == typeid(Rect))
			{
				Rect *pR = dynamic_cast<Rect*>(p->m_Data);
				os << *pR << endl;
			}
			else
			{
				Circle *pC = dynamic_cast<Circle*>(p->m_Data);
				os << *pC << endl;
			}	
			p = p->pNext;
	}
	return os;
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	
	List q;
	q.ATH(Circle(1, 1, 1, 5));
	q.ATH(Rect(1, 1, 6, 2, 1));
	q.ATH(Circle(1, 1, 1, 4));
	q.ATH(Rect(1, 1, 6, 2, 1));
	q.ATH(Circle(1, 1, 1, 8));
	q.ATH(Circle(1, 1, 1, 1));
	q.ATE(Circle(1, 1, 1, 7));                                                                                                                                                                                                                                     
	q.ATE(Circle(1, 1, 1, 2));
	stop
	cout << "Вывод списка" << endl << endl;
	cout << q;
	cout << "-------------------------------------------------------------" << endl;
	stop
	cout << "Сортировка по площади" << endl;
	q.SORT();
	cout << q;
	cout << "-------------------------------------------------------------" << endl;
	stop
	cout << "Уничтожение первого в списке похожего" << endl;
	//bool w = q.DTO(Circle(1, 1, 1, 5));
	cout << q;
	cout << "-------------------------------------------------------------" << endl;
	stop

	//int w = q.DTAE(Circle(1, 1, 1));
	//bool w = q.DELITE_ALL();
	//cout << q;
	stop
/*
// вывод в файл
	ofstream fout("qwe");
	fout << q << endl;
	fout.close();
	stop
	bool w = q.DELITE_ALL();
//Вывод из файла
	char buff[80] = {'0'};
	int MASS[11][3];
	int x = 0;
	int y = 0;
	int v = 0;

	int i = 0;

	ifstream z;
	z.open("qwe");

	while (!z.eof())
	{
		z >> buff >> buff >> x >> buff >> buff >> y >> v;
		if (buff[0] != '\0')
		{
			q.ATE(Circle(v, y, x));
			i++;
		}	
	}
	stop
	cout << q;

	List r(q);
	cout << r;
	stop
*/
	return 0;
}
