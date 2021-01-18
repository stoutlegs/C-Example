// C++ Example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Animal.h"
#include "Habitat.h"

int main()
{
    Habitat canada;

	while (true)
	{
		std::cout << "Please add an animal to the habitat.\n\n";

		canada.add_animal();

		canada.print_animals();
	}
}

