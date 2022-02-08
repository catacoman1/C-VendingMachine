///coman catalin andrei
///grupa 3.1
#pragma once
#include "Cake.h"
#include<string>

using namespace std;

class RecipeCake
{
	string name;
	int time;
public:
	RecipeCake();
	RecipeCake(string, int);
	string getName();
	int getTime();
	void afisare();
	friend class CakeMaker;
	friend class CommandTaker;
};

