///coman catalin andrei
///grupa 3.1
#pragma once
#include "RecipeCake.h"
#include "CakeMaker.h"
#include "CarouselOfCakes.h"
class CommandTaker :public CakeMaker, public CarouselOfCakes
{
	RecipeCake carouselRecipe;
	CakeMaker cakeMaker;
	CarouselOfCakes carousel;

	bool checkCarouselOfCakes();
	void refillCarousel();

public:
	CommandTaker();
    Cake takeCommand(RecipeCake);
	Cake* takeCommand(RecipeCake, int);
    Cake takeCommand(string);
	vector<Cake*> getCakesFromCarousel();
};

