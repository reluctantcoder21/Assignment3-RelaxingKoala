#include <iostream>
#include "Menu.h"

int main()
{
	std::cout << "Hello Team!" << std::endl;

	Menu* menu = new Menu();

	menu->GetMenuItems();

	
	return 0;
}