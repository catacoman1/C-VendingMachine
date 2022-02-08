///coman catalin andrei
///grupa 3.1
#pragma once
#include<iostream>
#include "CommandTaker.h"
class CommandPanel :public CommandTaker
{
	list<RecipeCake*> menu;
	CommandTaker commandTaker;
public:
	CommandPanel();
    void showProducts();
    void selectProduct(string);
	void selectProduct(string,int);
    void showProductsInCarousel();

};

