#include "Menu.h"
#include <fstream>
#include <iostream>
#include <sstream>

void Menu::GetMenuItems()
{
    //Look through a document and grab the variables and pass the two variables into an array

    std::ifstream MenuFile("MenuDatabase/MenuItems.txt");

    if (MenuFile.is_open())
    {
        std::string Line;
        
        while (std::getline(MenuFile, Line))
        {
            std::istringstream StringStream(Line);
            std::string ItemName;
            float ItemCost;

            //Extract the data from the txt file
            if (StringStream >> ItemName >> ItemCost)
            {
                MenuItems[ItemName] = ItemCost;
            }
            else
            {
                std::cout << "Error Parsing Line " << Line << std::endl;
            }
        }

        MenuFile.close();
    }
    else
    {
        std::cerr << "Unable to open file!" << std::endl;
    }

    for (const std::pair<const std::string, float>& item : MenuItems)
    {
        std::cout << "Item: " << item.first << ", Cost: " << item.second << std::endl;
    }
}