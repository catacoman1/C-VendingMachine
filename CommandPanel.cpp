///coman catalin andrei
///grupa 3.1
#include "CommandPanel.h"
#include<iostream>
using namespace std;
CommandPanel::CommandPanel() 
{

};

void CommandPanel::showProducts()
{
	list<RecipeCake*> meniu;
	RecipeCake* cake1, * cake2, * cake3, * cake4;
	cake1 = new RecipeCake("dezbracat", 5);
	cake2 = new RecipeCake("napolitana", 10);
	cake3 = new RecipeCake("trio", 7);
	cake4 = new RecipeCake("biscuiti", 3);

	meniu.push_back(cake1);
	meniu.push_back(cake2);
	meniu.push_back(cake3);
	meniu.push_back(cake4);

	cout  << endl;
	for (auto i = meniu.begin(); i != meniu.end(); i++)
	{
		RecipeCake *R = *i;
		R->afisare();
	}
	cout << endl;
}

void CommandPanel::selectProduct(string name)
{
	commandTaker.takeCommand(name);
}

void CommandPanel::selectProduct(string name, int numberOfProducts)
{
	RecipeCake r = RecipeCake(name, 5);
	commandTaker.takeCommand(r, numberOfProducts);

}

void CommandPanel::showProductsInCarousel()
{
	commandTaker.getCakesFromCarousel();
}