#pragma once
#include <string>
#include <map>

class Menu
{
	//Returns a list of Menu Items

public:
	void RetrieveMenuFromDataBase();

	std::map<std::string, float> GetMenuItems() const;
	
private:
	std::map<std::string, float> MenuItems;
};
