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
	// Вывод в поток задействует кучу. При просмтре памяти на утечки убирай вывод в поток!!!!
	setlocale(LC_ALL, "Russian");
	stop
	List q;
	q.ATH(Circle(1, 1, 1, 5));
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
	cout << "Сортировка по площади" << endl << endl;
	q.SORT();
	cout << q;
	cout << "-------------------------------------------------------------" << endl;
	stop
	cout << "Удалил 1/1 найденный элемент" << endl << endl;
	bool DTO = q.DTO(Circle(1, 1, 1, 5));
	cout << q;
	cout << "-------------------------------------------------------------" << endl;
	stop
	cout << "Удалил все найденные элементы" << endl << endl;
	int DTAE = q.DTAE(Circle(1, 1, 1, 5));
	cout << q;
	cout << "-------------------------------------------------------------" << endl;
	stop
	cout << "Удаляем всё кроме стражей" << endl << endl;
	bool w = q.DELITE_ALL();
	cout << q;
	cout << "-------------------------------------------------------------" << endl;
	stop
	cout << "Добавляем 9 новых объектов в старый List" << endl << endl;
	q.ATH(Circle(1, 1, 1, 5));
	q.ATH(Circle(1, 1, 1, 5));
	q.ATH(Rect(1, 1, 6, 2, 1));
	q.ATH(Circle(1, 1, 1, 4));
	q.ATH(Rect(1, 1, 6, 2, 1));
	q.ATH(Circle(1, 1, 1, 8));
	q.ATH(Circle(1, 1, 1, 1));
	q.ATE(Circle(1, 1, 1, 7));
	q.ATE(Circle(1, 1, 1, 2));
	cout << q;
	cout << "-------------------------------------------------------------" << endl;
	stop
	cout << "Вызываем конструктор копирования для нового объекта типа List" << endl << endl;
	List g(q);
	cout << g;
	cout << "-------------------------------------------------------------" << endl;
	stop
	cout << "Вызываем перемещающий конструктор" << endl << endl;
	List h = std::move(q);
	cout << h;
	cout << "-------------------------------------------------------------" << endl;
	stop
	cout << "Сравниваем два List по разным признакам" << endl << endl;
	cout << h;
	cout << "-------------------------------------------------------------" << endl;
	cout << g;
	bool k = (h==g);
	g.ATE(Circle(1, 1, 1, 2));
	k = (h == g);
	h.ATE(Circle(1, 1, 1, 3));
	k = (h == g);
	stop

// вывод в файл
	ofstream fout("qwe");
	fout << h << endl;
	fout.close();
	stop
	bool o = q.DELITE_ALL();
//Вывод из файла
	char buff[80] = {'0'};
	int MASS[11][3];
	int color = 0;
	int x = 0;
	int y = 0;
	int radius = 0;

	int i = 0;

	ifstream z;
	z.open("qwe");

	while (!z.eof())
	{
			z >> buff >> buff >> color >> buff >> buff >> x >> buff >> buff >> y >> buff >> buff >> radius;
		if (buff[0] != '\0')
		{
			q.ATE(Circle(color, x, y, radius));
			i++;
		}	
	}
	stop
	cout << q;

	List r(q);
	cout << r;
	stop
	return 0;
}
