#include "Inventory.h"
#include <iostream>

Inventory::Inventory()
{
	std::cout << "Default constructor called" << std::endl;
	
	unitsAvailable = 0;
	itemName = "TBD";
	itemPrice = 0.00;
}

Inventory::Inventory(double somePrice, int someUnits, std::string someName)
{
	itemPrice = somePrice;
	unitsAvailable = someUnits;
	itemName = someName;
}

double Inventory::totalCalculateValue()
{

	return 0.0;
}

std::string Inventory::getItemName()
{
	return std::string();
}

void Inventory::setItemName(std::string someName)
{
	itemName = someName;


}

double Inventory::getItemPrice()
{
	return 0.0;
}

void Inventory::setItemPrice(double somePrice)
{
	
	if (somePrice > 0.0)
	{
		itemPrice = somePrice;
	}
	else
	{
	
	std::cout << "Price can not be set to less than or equal to 0" << "\n";
	itemPrice = 0;
	}


}

int Inventory::getUnitsAvailable()
{
	return 0;
}

void Inventory::setUnitsAvailable(int someUnits)
{
	if (someUnits > 0)
	{
		unitsAvailable = someUnits;
	}
	else
	{
		std::cout << "Units is less than or equal to 0 can not be entered" << "\n ";
		unitsAvailable = 0;
	}



}

bool Inventory::comparePrices(const Inventory& inventory2)
{
	if (itemName == inventory2.itemName
		&&
		itemPrice == inventory2.itemPrice
		&&
		unitsAvailable == inventory2.unitsAvailable)
	{
		return true;
	}
	else
	{
		return false;
	}

}

}
