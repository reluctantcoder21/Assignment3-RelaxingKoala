#pragma once
#include <string>
#include <map>

class Menu
{
	//Returns a list of Menu Items

public:
	void GetMenuItems();

private:
	std::map<std::string, float> MenuItems;
};
