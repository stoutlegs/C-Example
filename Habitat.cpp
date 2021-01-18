#include "Habitat.h"

void Habitat::add_animal() {

	Animal newAnimal;
	animals.push_back(newAnimal);
	int i = animals.size();
	i--;
	std::string value;

	std::cout << "Animal Name: ";
	std::cin >> value;

	animals[i].name = value;

	std::cout << "Number of Legs: ";
	std::cin >> animals[i].legs;
	
	std::cout << "Is it a mammal (YES/NO): ";
	std::cin >> value;

	if (value == "YES")
	{
		animals[i].mammal = true;
	}
	else if (value == "NO") 
	{
		animals[i].mammal = false;
	}
}

void Habitat::print_animals() {

	for (int i = 0; i < animals.size(); i++)
	{
		std::cout << "\nName: " << animals[i].name << "\n";
		std::cout << "# Legs: " << animals[i].legs << "\n";

		if (animals[i].mammal == true)
		{
			std::cout << "Is Mammal? YES\n\n";
		}
		else if (animals[i].mammal == false)
		{
			std::cout << "Is Mammal? NO\n\n";
		}
	}
}