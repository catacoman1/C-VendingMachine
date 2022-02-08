#include "CommandTaker.h"
#include "CarouselOfCakes.h"
#include<iostream>
using namespace std;
CommandTaker::CommandTaker() 
{

};

Cake CommandTaker::takeCommand(string nameOfCake)
{
	carouselRecipe.name = nameOfCake;
    string D = "dezbracat";

	string N = "napolitana";

	string T = "trio";

	string B = "biscuiti";

	RecipeCake rc;
	Cake c;
	CommandTaker C;
	if (carouselRecipe.name.compare(T)==0)
	{
		 rc = RecipeCake(carouselRecipe.name, carouselRecipe.time);
		 c = C.takeCommand(rc);
		 carouselRecipe.time = 5;
	}
	else 
		if (carouselRecipe.name.compare(B)==0)
	{
		 rc = RecipeCake(carouselRecipe.name, carouselRecipe.time);
		 c = C.takeCommand(rc);
		 carouselRecipe.time = 10;
	}
	else 
			if (carouselRecipe.name.compare(D)==0)
	{
		 rc = RecipeCake(carouselRecipe.name, carouselRecipe.time);	
		 c = C.takeCommand(rc);
		 carouselRecipe.time = 7;
	}
	else 
				if (carouselRecipe.name.compare(N)==0)
	{
		 rc = RecipeCake(carouselRecipe.name, carouselRecipe.time);
		 c = C.takeCommand(rc);
		 carouselRecipe.time = 3;
	}
	else
	{
		cout << "prajitura cautata nu se afla in meniu" << endl;
	}
	return c;
}

Cake CommandTaker::takeCommand(RecipeCake recipe)
{
	for (auto i = Array.begin(); i != Array.end(); i++)
	{
		Cake *c = *i;
		if (c->getName().compare(recipe.name) == 0)
		{
			getCake(c->getName());
			return *c;
		}
		else
		{
			cout << "Prajitura nu se gaseste in carusel, acum este data Cake maker-ului pentru a o pregati!" << endl;

			Cake c = cakeMaker.takeCommand(recipe);
			return c;
		}
	}
	refillCarousel();
}


Cake* CommandTaker::takeCommand(RecipeCake recipe, int nrOfCakes)
{
	Cake a[20];
	int i = 0;
	if (recipe.name.compare("trio") == 0 || recipe.name.compare("biscuiti") == 0 || recipe.name.compare("dezbracat") == 0 || recipe.name.compare("napolitane") == 0)
	{
		while (nrOfCakes != 0)
		{

			a[i] = cakeMaker.takeCommand(recipe);
			nrOfCakes = nrOfCakes - 1;
			i = i + 1;
			
		}
	}
	else
	{
		cout << "Prajitura nu exista!!!" << endl;
	}
	return a;
}


vector<Cake*> CommandTaker::getCakesFromCarousel()
{
	for (auto i = Array.begin(); i != Array.end(); i++)
	{
		Cake *C = *i;
		cout << C->getName() <<" ";
	}
	cout << endl;
	return Array;
}

bool CommandTaker::checkCarouselOfCakes()
{
	return getCurrentCapacity();
}

void CommandTaker::refillCarousel()
{
	Cake *c = new Cake("Tiramisu");
		if (getCurrentCapacity() <= 3)
		{
			while (getCurrentCapacity() < 10)                 
			{
				addCake(c);
			}
		}
}
