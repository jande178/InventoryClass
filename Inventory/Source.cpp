#include <iostream>
#include "Inventory.h"


int main()
{
	Inventory store{ 0, 0.0, {" "} };

	Inventory storePrime = store;


	std::cout << std::boolalpha << storePrime.comparePrices(store);

	return 0;
}