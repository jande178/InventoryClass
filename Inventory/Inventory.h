#pragma once
#include <string>

class Inventory
{
	//private classes
	std::string itemName = "";
	double itemPrice = 0.0;
	int unitsAvailable = 0;

public:
	Inventory(); //DEFAULT constructor
	Inventory(double somePrice, int someUnits ,std::string someName);
	
	double totalCalculateValue();


	//Getter Accessor to display cout
	std::string getItemName();

	void setItemName(std::string someName);


	//Getter Accessor to display cout
	double getItemPrice();


	void setItemPrice(double somePrice);


	//Getter Accessor to display cout
	int getUnitsAvailable();

	void setUnitsAvailable(int someUnits);

	bool comparePrices (const Inventory& inventory2);




};

