#include "Menu.h"

Menu::Menu()
{
	menu();
}

void Menu::menu()
{
	std::cout << "\t\t\tÏðîãðàììà ""ÍÀÕÎÆÄÅÍÈÅ ÊÐÀÒ×ÀÉØÅÃÎ ÏÓÒÈ Ñ ÏÎÑÅÙÅÍÈÅÌ ÂÑÅÕ ÏÓÍÊÒÎÂ ÍÀ ÊÀÐÒÅ ÄÎÐÎÃ""\n";
	std::cout << "\t\t\t(!Äàííûé çàäà÷à ðåøåíà ìåòîäîì ""ÂÅÒÂÅÉ È ÃÐÀÍÈÖ"")\n\n";

	while (true)
	{
		std::cout << "Âûáåðèòå äåéñòâèå:\n";
		std::cout << "1.Âîñïîëüçîâàòüñÿ êàðòîé äîðîã ïî-óìîë÷àíèþ äëÿ äåìîíñòðàöèè àëãîðèòìà\n"
			<< "2.Ðàçðàáîòàòü ñîáñòâåííóþ êàðòó äîðîã è íàéòè êðàò÷àéøèé ïóòü (ìàêñèìàëüíîå êîëè÷åñòâî ïóíêòîâ 15)\n"
			<< "3.Âûõîä.\n";

		std::cin >> choice;
		if (choice == 1)
		{
			Kommivoiazhors one;
			one.MAIN_finding_the_shortest_way(&one);

			continue;
		}

		else if (choice == 2)
		{
			std::cout << "Ââåäèòå êîëè÷åñòâî ïóíêòîâ:";
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
			throw std::exception("ÂÛ ÂÂÅËÈ ÑÈÌÂÎË ÂÌÅÑÒÎ ×ÈÑËÀ, ËÈÁÎ ÍÅÒ ÄÅÉÑÒÂÈÉ ÏÎÄ ÄÀÍÍÛÌ ÈÍÄÅÊÑÎÌ, ÂÍÈÌÀÒÅËÜÍÅÉ!");
		}
	}
}

Menu::~Menu()
{
	std::cout << "Âûçâàëñÿ äåñòðóêòîð äëÿ îáúåêòà òèïà Menu:" << this << std::endl;
}
