#include "H.h"

/*ostream& operator<<(ostream &os, const Point &ms)
{
	os << ms.x << " " << ms.y;
	return os;
}

ostream& operator<<(ostream &os, const Circle &ms)
{
	os << "radius = " << ms.radius << " " << "xy = " << ms.q;
	return os;
}

ostream& operator<<(ostream &os, const List &ms)
{
	const List::Node *p = &ms.Head;
	p = p->pNext;
	for (size_t i = 0; i < ms.m_size-2; i++)
	{
		os << p->m_Data<< endl;
		p = p->pNext;
	}
	return os;
}*/

int _tmain(int argc, _TCHAR* argv[])
{

	List q;
	/*
	q.ATH(Circle(1, 1, 5));
	q.ATH(Circle(1, 1, 6));
	q.ATH(Circle(1, 1, 4));
	q.ATH(Circle(1, 1, 3));
	q.ATH(Circle(1, 1, 8));
	q.ATH(Circle(1, 1, 1));
	q.ATE(Circle(1, 1, 7));
	q.ATE(Circle(1, 1, 2));
	cout << q;
	cout << "-------------------------------------------------------------" << endl;
	stop
	q.SORT();
	cout << q;
	stop
	//q.~List();
	//stop
	//bool w = q.DTO(Circle(1, 1, 1));
	//int w = q.DTAE(Circle(1, 1, 1));
	//bool w = q.DELITE_ALL();
	//cout << q;
	stop
// גûגמה ג פאיכ
	ofstream fout("qwe");
	fout << q << endl;
	fout.close();
	stop
	bool w = q.DELITE_ALL();
//ֲûגמה טח פאיכא
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
