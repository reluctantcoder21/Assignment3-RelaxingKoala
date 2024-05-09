#include "Order.h"
#include <iostream>

Order::Order()
{
    TotalCost = 0.0f;
}

void Order::AddToOrder(const std::string& Item, float ItemCost)
{
    OrderItems.insert({Item, ItemCost});
    TotalCost += ItemCost;
}

void Order::RemoveFromOrder(const std::string& Item)
{
    if (OrderItems.empty())
    {
        std::cout << "Your Cart is currently Empty!\n";
        return;
    }
    
    for (std::pair<const std::string, float>& OrderItem : OrderItems)
    {
        if (OrderItem.first == Item)
        {
            OrderItems.erase(OrderItem.first);
            TotalCost -= OrderItem.second;
            return;
        }
    }
}

void Order::ShowOrder() const
{
    if (OrderItems.empty())
    {
        std::cout << "Your Cart is currently Empty!\n";
        return;
    }
    
    for (const std::pair<const std::string, float>& OrderItem : OrderItems)
    {
        std::cout << "Order Item: " << OrderItem.first << " Cost: " << OrderItem.second << std::endl;
    }
}

void Order::ShowTotalCost() const
{
    std::cout << "Total: " << TotalCost << "\n";
}
