///coman catalin andrei
///grupa 3.1
#include "CarouselOfCakes.h"
#include<iostream>
#include<string>
#include<vector>


int CarouselOfCakes::getCurrentCapacity()
{
	return size(Array);
}

CarouselOfCakes::CarouselOfCakes() {};

bool CarouselOfCakes::addCake(Cake *cake)
{
	if (getCurrentCapacity() < maxCap)
	{
		cake =new Cake("Dezbracat");
		Array.push_back(cake);
		return true;
	}
	else
	{
		return 0;
	}
}

Cake CarouselOfCakes::getCake(string name)
{
	for (auto i = Array.begin(); i != Array.end(); i++)
	{
		Cake *C = *i;
		if (C->getName().compare(name) == 0)
		{
			Array.erase(i);
			cout << "Prajitura a fost gasita in carusel" << endl;
			Cake c = Cake("Tiramisu");
			return c;
		}
	}
	cout << endl;
}


