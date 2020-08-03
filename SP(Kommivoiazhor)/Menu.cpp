#include "Menu.h"

Menu::Menu()
{
	menu();
}

void Menu::menu()
{
	std::cout << "\t\t\t��������� ""���������� ����������� ���� � ���������� ���� ������� �� ����� �����""\n";
	std::cout << "\t\t\t(!������ ������ ������ ������� ""������ � ������"")\n\n";

	while (true)
	{
		std::cout << "�������� ��������:\n";
		std::cout << "1.��������������� ������ ����� ��-��������� ��� ������������ ���������\n"
			<< "2.����������� ����������� ����� ����� � ����� ���������� ���� (������������ ���������� ������� 15)\n"
			<< "3.�����.\n";

		std::cin >> choice;
		if (choice == 1)
		{
			Kommivoiazhors one;
			one.MAIN_finding_the_shortest_way(&one);

			continue;
		}

		else if (choice == 2)
		{
			std::cout << "������� ���������� �������:";
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
			throw std::exception("�� ����� ������ ������ �����, ���� ��� �������� ��� ������ ��������, ������������!");
		}
	}
}

Menu::~Menu()
{
	std::cout << "�������� ���������� ��� ������� ���� Menu:" << this << std::endl;
}
