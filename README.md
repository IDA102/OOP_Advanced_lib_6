# OOP_Advanced_lib_6

Lib_6_RTTI 6 Лабораторная работа ВИШ по С++ расширеный курс. Использование RTTI. За основу брались 2 и 4 л/р из "Базового курса".

Суть лабораторной в изменении раннего связывания на позднее методами RTTI.

Не дописано адекватное считывание из файла. (Лень разбирать строки) Пре необходимости переписать вывод из файла с учётом структуры строки.

Это типо структура строки ----  os << "Rect-------" << "COLOR = " << ms.q << "	x1 = " << ms.x1 << "	y1 = " << ms.y1 << "	x2 = " << ms.x2 << "	y2 = " << ms.y2 << endl;
А это то, что поменять -------  z >> buff >> buff >> color >> buff >> buff >> x >> buff >> buff >> y >> buff >> buff >> radius;
