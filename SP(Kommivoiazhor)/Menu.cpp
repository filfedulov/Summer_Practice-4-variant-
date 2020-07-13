#include "Menu.h"

Menu::Menu()
{
	menu();
}

void Menu::menu()
{
	std::cout << "\t\t\tПрограмма ""НАХОЖДЕНИЕ КРАТЧАЙШЕГО ПУТИ С ПОСЕЩЕНИЕМ ВСЕХ ПУНКТОВ НА КАРТЕ ДОРОГ""\n";
	std::cout << "\t\t\t(!Данный задача решена методом ""ВЕТВЕЙ И ГРАНИЦ"")\n\n";

	while (true)
	{
		std::cout << "Выберите действие:\n";
		std::cout << "1.Воспользоваться картой дорог по-умолчанию для демонстрации алгоритма\n"
			<< "2.Разработать собственную карту дорог и найти кратчайший путь (максимальное количество пунктов 15)\n"
			<< "3.Выход.\n";

		std::cin >> choice;
		if (choice == 1)
		{
			Kommivoiazhors one;
			one.MAIN_finding_the_shortest_way(&one);

			continue;
		}

		else if (choice == 2)
		{
			std::cout << "Введите количество пунктов:";
			std::cin >> amount_vertex;
			Kommivoiazhors one(amount_vertex);
			one.create_road_map();
			one.MAIN_finding_the_shortest_way(&one);

			continue;
		}

		else if (choice == 3)
		{
			std::cout << std::endl;
			break;
		}

		else
		{
			std::cout << "Нет действия под данным индексом, Внимательней!";
			continue;
		}
	}
}

Menu::~Menu()
{
	std::cout << "Вызвался деструктор для объекта типа Menu:" << this << std::endl;
}
