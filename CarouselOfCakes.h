///coman catalin andrei
///grupa 3.1
#pragma once
#include<vector>
#include<list>
#include "Cake.h"

class CarouselOfCakes :public Cake
{
	friend class CommandTaker;
	unsigned int maxCap = 10;
	unsigned int lowLimit = 3;
	Cake*new_cake = new Cake("dobos");
	vector<Cake*>Array = {new_cake,new_cake, new_cake, new_cake, new_cake, new_cake, new_cake, new_cake};
public:
	bool addCake(Cake*);
	CarouselOfCakes();
	Cake getCake(string);
	int getCurrentCapacity();
};

