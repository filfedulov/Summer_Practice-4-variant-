#pragma once
#include"Kommivoiazhor.h"

class Menu :public Kommivoiazhors
{
public:
	Menu();
	void menu();

	~Menu();

private:
	int choice = 0;

};
