#include <iostream>
#include <iomanip>
#include "Inventory.h"


int main()
{
	Inventory store{ 0.00, 0, ""};

	std::cout << std::fixed << std::setprecision(2);

	Inventory storePrime = store;

	std::cout << "BEFORE calling any setter and modifying member vars: \n";
	std::cout << store.getItemName() << "\n";
	std::cout << store.getItemPrice() << "\n";
	std::cout << store.getUnitsAvailable() << "\n";

	store.setItemPrice(9215882.21);
	

	std::cout << "AFTER calling any setter and modifying member vars: \n";
	std::cout << store.getItemName() << "\n";
	std::cout << store.getItemPrice() << "\n";
	std::cout << store.getUnitsAvailable() << "\n";



	std::cout << std::boolalpha << storePrime.comparePrices(store);

	return 0;
}