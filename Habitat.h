#pragma once
#include <iostream>
#include <vector>
#include "Animal.h"

class Habitat
{
private:
	std::vector<Animal> animals;

public:

	void add_animal();
	void print_animals();
};

