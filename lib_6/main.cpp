#include "H.h"

ostream& operator<<(ostream &os, const Point &ms)
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
	for (size_t i = 0; i < ms.m_size; i++)
	{
		os << p->m_Data<< endl;
		p = p->pNext;
	}
	return os;
}

int _tmain(int argc, _TCHAR* argv[])
{
	List q;
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
	cout << "-------------------------------------------------------------" << endl;
	stop
	List g(q);
	cout << g;
	cout << "-------------------------------------------------------------" << endl;
	stop
	g.DELITE_ALL();
	cout << g;
	cout << "-------------------------------------------------------------" << endl;
	stop
	g = q;
	cout << g;
	cout << "-------------------------------------------------------------" << endl;
	stop
	q.ATH(Circle(1, 1, 1));
	q.ATH(Circle(1, 1, 1));
	q.ATH(Circle(1, 1, 1));
	cout << q;
	cout << "-------------------------------------------------------------" << endl;
	stop
	bool w = q.DTO(Circle(1, 1, 1));
	cout << q;
	cout << "-------------------------------------------------------------" << endl;
	stop
	int ww = q.DTAE(Circle(1, 1, 1));
	cout << q;
	cout << "-------------------------------------------------------------" << endl;
	stop
	bool www = q.DELITE_ALL();
	cout << q;
	cout << "-------------------------------------------------------------" << endl;
	stop

	q.ATH(Circle(1, 1, 5));
	q.ATH(Circle(1, 1, 6));
	q.ATH(Circle(1, 1, 4));
	q.ATH(Circle(1, 1, 3));
	q.ATH(Circle(1, 1, 8));
	q.ATH(Circle(1, 1, 1));
	q.ATE(Circle(1, 1, 7));
	q.ATE(Circle(1, 1, 2));
// גûגמה ג פאיכ
	ofstream fout("qwe");
	fout << q << endl;
	fout.close();
	stop
	bool wwwww = q.DELITE_ALL();
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
	cout << q;
	cout << "-------------------------------------------------------------" << endl;
	stop


	return 0;
}
